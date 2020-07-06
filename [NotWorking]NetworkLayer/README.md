# org.openapitools.client - Kotlin client library for City

## Requires

* Kotlin 1.3.41
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in OpenAPI definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://virtserver.swaggerhub.com/c-villain/City/1.0.0*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*CityApi* | [**searchCity**](docs/CityApi.md#searchcity) | **GET** /search/ | Search city
*CityApi* | [**weatherOnEarthID**](docs/CityApi.md#weatheronearthid) | **GET** /{woeid} | Get weather by Earth ID


<a name="documentation-for-models"></a>
## Documentation for Models

 - [org.openapitools.client.models.City](docs/City.md)
 - [org.openapitools.client.models.Weather](docs/Weather.md)
 - [org.openapitools.client.models.WeatherNewsList](docs/WeatherNewsList.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

All endpoints do not require authorization.
