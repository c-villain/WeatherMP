/*
 * Copyright 2019 IceRock MAG Inc. Use of this source code is governed by the Apache 2.0 license.
 */

package com.icerockdev.library

import dev.icerock.moko.network.generated.apis.CityApi
import dev.icerock.moko.network.generated.models.City
import dev.icerock.moko.network.generated.models.Weather
import dev.icerock.moko.network.generated.models.WeatherNewsList

import dev.icerock.moko.network.generated.dispatcher.*

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

class WeatherApiService{
    protected var scope: CoroutineScope = CoroutineScope(defaultDispatcher + Job())
    
    private var httpClient = HttpClient()
    var cities: List<City> = arrayListOf()
    
    var weatherList: WeatherNewsList = WeatherNewsList()
    
    private var cityApi = CityApi(
        basePath = "https://www.metaweather.com/api/location/",
        httpClient = httpClient,
        json = Json.nonstrict
    )

    fun loadCities(query: kotlin.String) {
        scope.launch {
            try {
                cities = cityApi.searchCity(query)
            } catch (error: Exception) {
                println("can't load $error")
            }
        }
    }
    
    fun loadWeatherForCity(woeid: kotlin.Int){
        scope.launch {
            try {
                weatherList = cityApi.weatherOnEarthID(woeid)
            } catch (error: Exception) {
                println("can't load $error")
            }
        }
    }
    
    /*
    fun loadCities(query: kotlin.String) {
        scope.launch {
            cityApi.searchCity(query) {
                val result = it
                if (result.errorResponse == null) {
                    //data = arrayListOf()
                    data = result.content ?: arrayListOf()
                    //data.addAll(result.content ?: arrayListOf())
                }
            }
        }
    }
    */
    /*
    fun loadData(query: kotlin.String) : List<City> {
        return cityApi.searchCity(query)
    }*/
}

