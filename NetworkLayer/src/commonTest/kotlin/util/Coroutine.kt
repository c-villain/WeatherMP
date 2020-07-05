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

package util

import kotlinx.coroutines.CoroutineScope

/**
* Block the current thread until execution of the given coroutine is complete.
*
* @param block The coroutine code.
* @return The result of the coroutine.
*/
internal expect fun <T> runTest(block: suspend CoroutineScope.() -> T): T
