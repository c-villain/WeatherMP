package dev.icerock.moko.network.generated.dispatcher

import kotlinx.coroutines.CoroutineDispatcher
import kotlin.coroutines.CoroutineContext

expect val defaultDispatcher: CoroutineContext
expect val iosDispatcher: CoroutineContext
expect val uiDispatcher: CoroutineContext

expect val ApplicationDispatcher: CoroutineDispatcher

//Свой скоуп для сетевого клиента
expect fun ktorScope(block: suspend () -> Unit)
