/**
* City
* Cities
*
* OpenAPI spec version: 1.0.0
* Contact: lexkraev@gmail.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
package dev.icerock.moko.network.generated.apis

import dev.icerock.moko.network.generated.models.City
import dev.icerock.moko.network.generated.models.WeatherNewsList

import io.ktor.client.HttpClient
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.request
import io.ktor.client.request.forms.FormDataContent
import io.ktor.http.ContentType
import io.ktor.http.HttpMethod
import io.ktor.http.Parameters
import io.ktor.http.takeFrom
import kotlinx.serialization.json.Json
import kotlinx.serialization.builtins.list
//import dev.icerock.moko.network.LargeTextContent
import io.ktor.client.call.ReceivePipelineException

class CityApi(basePath: kotlin.String = "https://www.metaweather.com/api/location/", httpClient: HttpClient, json: Json) {
    private val _basePath = basePath
    private val _httpClient = httpClient
    private val _json = json

    /**
    * Search city
    * 
    * @param query name of city 
    * @return kotlin.collections.List<City>
    */
    //@Suppress("UNCHECKED_CAST")
    suspend fun searchCity(query: kotlin.String) : kotlin.collections.List<City> {
        val builder = HttpRequestBuilder()

        builder.method = HttpMethod.Get
        builder.url {
            takeFrom(_basePath)
            encodedPath = encodedPath.let { startingPath ->
                path("search/")
                return@let startingPath + encodedPath.substring(1)
            }
            with(parameters) {
                query?.let { append("query", it.toString()) }
            }
        }

        with(builder.headers) {
            append("Accept", "application/json")
        }

        try {
            //not primitive type
            val result: String = _httpClient.request(builder)
            return _json.parse(City.serializer().list, result)
        } catch (pipeline: ReceivePipelineException) {
            throw pipeline.cause
        }
    }

    /**
    * Get weather by Earth ID
    * 
    * @param woeid Where On Earth ID 
    * @return WeatherNewsList
    */
    @Suppress("UNCHECKED_CAST")
    suspend fun weatherOnEarthID(woeid: kotlin.Int) : WeatherNewsList {
        val builder = HttpRequestBuilder()

        builder.method = HttpMethod.Get
        builder.url {
            takeFrom(_basePath)
            encodedPath = encodedPath.let { startingPath ->
                path("$woeid")
                return@let startingPath + encodedPath.substring(1)
            }
        }

        with(builder.headers) {
            append("Accept", "application/json")
        }

        try {
            //not primitive type
            val result: String = _httpClient.request(builder)
            return _json.parse(WeatherNewsList.serializer(), result)
        } catch (pipeline: ReceivePipelineException) {
            throw pipeline.cause
        }
    }

}