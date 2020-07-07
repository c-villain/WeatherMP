# WeatherMP
Demo weather app with multiplatform network core.

Демо приложение погоды с кроссплатформенным сетевым слоем.

Coding multiplatform network layer using [KMM](https://www.jetbrains.com/lp/mobilecrossplatform/) and code-generation.

## Usage 
For correct building change path to your andoid sdk dir in file [local.properties](https://github.com/c-villain/WeatherMP/blob/master/local.properties).

Чтобы сбилдить проект, пропишите путь к android sdk в файле [local.properties](https://github.com/c-villain/WeatherMP/blob/master/local.properties).

## Used: 
* [Public weather api](https://www.metaweather.com/api)
* [Gradle 6.1.1](https://gradle.org/releases/)

## Problem solution
  
1. **PROBLEM**: [OpenApi-Generator](https://github.com/OpenAPITools/openapi-generator) currently (as a publication day) not generates multiplatform kotlin code correctly: lots of calls are deprecated, you may see it [here](https://github.com/c-villain/WeatherMP/tree/master/%5BNotWorking%5DNetworkLayer).
    >openapi-generator generate -g kotlin -i [file].yaml --library multiplatform -o NetworkLayer 
2. Using [moko-network **sample**](https://github.com/icerockdev/moko-network) am generate **part** of necessary code:
    * >CityApi.kt
    * >City.kt
    * >Weather.kt
    * >WeatherNewsList.kt
    
   **PROBLEM**: [icerockdev](https://github.com/icerockdev)'s approach in **moko-network** is to generate code for multiplatform view model. 
   My case is to write multiplatfrom network service.
3. Using [this article](https://tproger.ru/articles/creating-an-app-for-kotlin-multiplatform) (special thanks to [**Anna Zharkova**](https://github.com/anioutkazharkova)) and [this project](https://github.com/anioutkazharkova/kmp_news_sample) write a **rest part** of code:
    * >Dispatcher.kt
    * >WeatherApiService.kt
   
## Решение:

1. **Проблема**: [OpenApi-Generator](https://github.com/OpenAPITools/openapi-generator) на текущий момент (на время публикации репозитория) корректно не генерирует код для мультиплатформенной библиотеки на Kotlin: много вызовов запрещены, сгенерированный код можете посмотреть [здесь](https://github.com/c-villain/WeatherMP/tree/master/%5BNotWorking%5DNetworkLayer).
    >openapi-generator generate -g kotlin -i [file].yaml --library multiplatform -o NetworkLayer 
2. Используя [moko-network **sample**](https://github.com/icerockdev/moko-network) сгенерировал **часть** необходимого кода, в моем случае это:
    * >CityApi.kt
    * >City.kt
    * >Weather.kt
    * >WeatherNewsList.kt
    
   **Проблема**: подход [icerockdev](https://github.com/icerockdev) в **moko-network** - сгенерировать мультиплатформенный код для view model. 
   В моем случае решил сделать сетевой сервис.
3. Используя статью ["Создаём своё первое приложение для Kotlin Multiplatform"](https://tproger.ru/articles/creating-an-app-for-kotlin-multiplatform) (отдельное спасибо [**Анне Жарковой**](https://github.com/anioutkazharkova)) и [этот проект](https://github.com/anioutkazharkova/kmp_news_sample) пишем **оставшуюся** часть кода:
    * >Dispatcher.kt
    * >WeatherApiService.kt
