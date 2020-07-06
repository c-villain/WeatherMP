/**
* City
* Cities
*
* The version of the OpenAPI document: 1.0.0
* Contact: lexkraev@gmail.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models


import kotlinx.serialization.*
import kotlinx.serialization.internal.CommonEnumSerializer
/**
 * 
 * @param id 
 * @param weatherStateName 
 * @param applicableDate 
 * @param theTemp 
 * @param windDirectionCompass 
 */
@Serializable
data class Weather (
    @SerialName(value = "id") val id: kotlin.Int? = null,
    @SerialName(value = "weather_state_name") val weatherStateName: kotlin.String? = null,
    @SerialName(value = "applicable_date") val applicableDate: kotlin.String? = null,
    @SerialName(value = "the_temp") val theTemp: kotlin.Double? = null,
    @SerialName(value = "wind_direction_compass") val windDirectionCompass: kotlin.String? = null
)
