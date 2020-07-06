# CityApi

All URIs are relative to *https://virtserver.swaggerhub.com/c-villain/City/1.0.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**searchCity**](CityApi.md#searchCity) | **GET** /search/ | Search city
[**weatherOnEarthID**](CityApi.md#weatherOnEarthID) | **GET** /{woeid} | Get weather by Earth ID


<a name="searchCity"></a>
# **searchCity**
> kotlin.Array&lt;City&gt; searchCity(query)

Search city

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CityApi()
val query : kotlin.String = query_example // kotlin.String | name of city
try {
    val result : kotlin.Array<City> = apiInstance.searchCity(query)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CityApi#searchCity")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CityApi#searchCity")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | **kotlin.String**| name of city |

### Return type

[**kotlin.Array&lt;City&gt;**](City.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="weatherOnEarthID"></a>
# **weatherOnEarthID**
> WeatherNewsList weatherOnEarthID(woeid)

Get weather by Earth ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CityApi()
val woeid : kotlin.Int = 56 // kotlin.Int | Where On Earth ID
try {
    val result : WeatherNewsList = apiInstance.weatherOnEarthID(woeid)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CityApi#weatherOnEarthID")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CityApi#weatherOnEarthID")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **woeid** | **kotlin.Int**| Where On Earth ID |

### Return type

[**WeatherNewsList**](WeatherNewsList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

