/*
 * Copyright 2019 IceRock MAG Inc. Use of this source code is governed by the Apache 2.0 license.
 */

package com.icerockdev.library

import dev.icerock.moko.network.generated.apis.CityApi
import dev.icerock.moko.network.generated.models.City
//import dev.icerock.moko.network.generated.dispatcher
import io.ktor.client.HttpClient

import kotlinx.coroutines.launch
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlin.coroutines.CoroutineContext

import kotlinx.coroutines.*
import platform.darwin.*
import kotlin.native.concurrent.SharedImmutable
import kotlin.native.concurrent.freeze

class NewsApiService{
    protected var scope: CoroutineScope = CoroutineScope(defaultDispatcher)
    
    /*
    fun init(){
        scope = CoroutineScope(defaultDispatcher)
    }*/
    
    private var httpClient = HttpClient()
    var data: List<City> = arrayListOf()
    
    private var newsApi = CityApi(
        basePath = "https://www.metaweather.com/api/location/",
        httpClient = httpClient,
        json = Json.nonstrict
    )

    fun loadData(query: kotlin.String) {
        scope.launch {
            try {
                data = newsApi.searchCity(query)

            } catch (error: Exception) {
                println("can't load $error")
            }
        }
    }
}

expect val defaultDispatcher: CoroutineContext

expect val uiDispatcher: CoroutineContext


actual val uiDispatcher: CoroutineContext
    get() = MainDispatcher

actual val defaultDispatcher: CoroutineContext
    get() = MainDispatcher


private object  MainDispatcher: CoroutineDispatcher() {
        override fun dispatch(context: CoroutineContext, block: Runnable) {
            dispatch_async(dispatch_get_main_queue()) {
                try {
                    block.run().freeze()
                } catch (err: Throwable) {
                    throw err
                }
        }
    }
}
