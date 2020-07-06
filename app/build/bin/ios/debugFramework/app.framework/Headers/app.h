#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AppCity, AppWeatherNewsList, AppKtor_client_coreHttpClient, AppKotlinx_serialization_runtimeJson, AppWeather, AppErrorResponse, AppErrorType, AppKotlinEnum, AppKotlinx_coroutines_coreCoroutineDispatcher, AppKtor_client_coreHttpClientConfig, AppKtor_client_coreHttpClientEngineConfig, AppKtor_client_coreHttpReceivePipeline, AppKtor_client_coreHttpRequestPipeline, AppKtor_client_coreHttpResponsePipeline, AppKtor_client_coreHttpSendPipeline, AppKotlinx_serialization_runtimeJsonBuilder, AppKotlinx_serialization_runtimeJsonConfiguration, AppKotlinx_serialization_runtimeJsonElement, AppKotlinAbstractCoroutineContextElement, AppKtor_utilsAttributeKey, AppKtor_client_coreProxyConfig, AppKotlinNothing, AppKtor_utilsPipelinePhase, AppKotlinArray, AppKtor_utilsPipeline, AppKotlinx_serialization_runtimeUpdateMode, AppKotlinx_serialization_runtimeJsonNull, AppKotlinx_serialization_runtimeJsonPrimitive, AppKotlinx_serialization_runtimeSerialKind, AppKtor_httpUrl, AppKtor_httpURLProtocol;

@protocol AppKotlinx_coroutines_coreCoroutineScope, AppKotlinx_serialization_runtimeKSerializer, AppKotlinComparable, AppKotlinSuspendFunction0, AppKotlinCoroutineContext, AppKtor_ioCloseable, AppKtor_client_coreHttpClientEngine, AppKtor_client_coreHttpClientEngineCapability, AppKtor_utilsAttributes, AppKotlinx_serialization_runtimeDeserializationStrategy, AppKotlinx_serialization_runtimeSerializationStrategy, AppKotlinx_serialization_runtimeSerialModule, AppKotlinx_serialization_runtimeSerialFormat, AppKotlinx_serialization_runtimeStringFormat, AppKotlinx_serialization_runtimeEncoder, AppKotlinx_serialization_runtimeSerialDescriptor, AppKotlinx_serialization_runtimeDecoder, AppKotlinFunction, AppKotlinCoroutineContextKey, AppKotlinCoroutineContextElement, AppKotlinContinuation, AppKotlinContinuationInterceptor, AppKotlinx_coroutines_coreRunnable, AppKtor_client_coreHttpClientFeature, AppKotlinSuspendFunction2, AppKotlinx_serialization_runtimeSerialModuleCollector, AppKotlinKClass, AppKotlinx_serialization_runtimeCompositeEncoder, AppKotlinAnnotation, AppKotlinx_serialization_runtimeCompositeDecoder, AppKotlinIterator, AppKotlinKDeclarationContainer, AppKotlinKAnnotatedElement, AppKotlinKClassifier, AppKtor_httpParameters, AppKotlinMapEntry, AppKtor_utilsStringValues;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface AppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AppBase (AppBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AppNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface AppByte : AppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AppUByte : AppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AppShort : AppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AppUShort : AppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AppInt : AppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AppUInt : AppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AppLong : AppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AppULong : AppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AppFloat : AppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AppDouble : AppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AppBoolean : AppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherApiService")))
@interface AppWeatherApiService : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)loadCitiesQuery:(NSString *)query __attribute__((swift_name("loadCities(query:)")));
- (void)loadWeatherForCityWoeid:(int32_t)woeid __attribute__((swift_name("loadWeatherForCity(woeid:)")));
@property NSArray<AppCity *> *cities __attribute__((swift_name("cities")));
@property id<AppKotlinx_coroutines_coreCoroutineScope> scope __attribute__((swift_name("scope")));
@property AppWeatherNewsList *weatherList __attribute__((swift_name("weatherList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityApi")))
@interface AppCityApi : AppBase
- (instancetype)initWithBasePath:(NSString *)basePath httpClient:(AppKtor_client_coreHttpClient *)httpClient json:(AppKotlinx_serialization_runtimeJson *)json __attribute__((swift_name("init(basePath:httpClient:json:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City")))
@interface AppCity : AppBase
- (instancetype)initWithTitle:(NSString * _Nullable)title locationType:(NSString * _Nullable)locationType woeid:(AppInt * _Nullable)woeid lattLong:(NSString * _Nullable)lattLong __attribute__((swift_name("init(title:locationType:woeid:lattLong:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (AppInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (AppCity *)doCopyTitle:(NSString * _Nullable)title locationType:(NSString * _Nullable)locationType woeid:(AppInt * _Nullable)woeid lattLong:(NSString * _Nullable)lattLong __attribute__((swift_name("doCopy(title:locationType:woeid:lattLong:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable lattLong __attribute__((swift_name("lattLong")));
@property (readonly) NSString * _Nullable locationType __attribute__((swift_name("locationType")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) AppInt * _Nullable woeid __attribute__((swift_name("woeid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City.Companion")))
@interface AppCityCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface AppWeather : AppBase
- (instancetype)initWithId:(AppLong * _Nullable)id weatherStateName:(NSString * _Nullable)weatherStateName applicableDate:(NSString * _Nullable)applicableDate theTemp:(AppDouble * _Nullable)theTemp windDirectionCompass:(NSString * _Nullable)windDirectionCompass __attribute__((swift_name("init(id:weatherStateName:applicableDate:theTemp:windDirectionCompass:)"))) __attribute__((objc_designated_initializer));
- (AppLong * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (AppDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AppWeather *)doCopyId:(AppLong * _Nullable)id weatherStateName:(NSString * _Nullable)weatherStateName applicableDate:(NSString * _Nullable)applicableDate theTemp:(AppDouble * _Nullable)theTemp windDirectionCompass:(NSString * _Nullable)windDirectionCompass __attribute__((swift_name("doCopy(id:weatherStateName:applicableDate:theTemp:windDirectionCompass:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable applicableDate __attribute__((swift_name("applicableDate")));
@property (readonly) AppLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) AppDouble * _Nullable theTemp __attribute__((swift_name("theTemp")));
@property (readonly) NSString * _Nullable weatherStateName __attribute__((swift_name("weatherStateName")));
@property (readonly) NSString * _Nullable windDirectionCompass __attribute__((swift_name("windDirectionCompass")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather.Companion")))
@interface AppWeatherCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherNewsList")))
@interface AppWeatherNewsList : AppBase
- (instancetype)initWithConsolidatedWeather:(NSArray<AppWeather *> * _Nullable)consolidatedWeather __attribute__((swift_name("init(consolidatedWeather:)"))) __attribute__((objc_designated_initializer));
- (NSArray<AppWeather *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (AppWeatherNewsList *)doCopyConsolidatedWeather:(NSArray<AppWeather *> * _Nullable)consolidatedWeather __attribute__((swift_name("doCopy(consolidatedWeather:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AppWeather *> * _Nullable consolidatedWeather __attribute__((swift_name("consolidatedWeather")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherNewsList.Companion")))
@interface AppWeatherNewsListCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentResponse")))
@interface AppContentResponse : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property id _Nullable content __attribute__((swift_name("content")));
@property AppErrorResponse * _Nullable errorResponse __attribute__((swift_name("errorResponse")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface AppErrorResponse : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t code __attribute__((swift_name("code")));
@property NSString *errorType __attribute__((swift_name("errorType")));
@property NSString *message __attribute__((swift_name("message")));
@property AppErrorType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol AppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface AppKotlinEnum : AppBase <AppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(AppKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorType")))
@interface AppErrorType : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppErrorType *network __attribute__((swift_name("network")));
@property (class, readonly) AppErrorType *auth __attribute__((swift_name("auth")));
@property (class, readonly) AppErrorType *tech __attribute__((swift_name("tech")));
@property (class, readonly) AppErrorType *other __attribute__((swift_name("other")));
@property (class, readonly) AppErrorType *notfound __attribute__((swift_name("notfound")));
@property (class, readonly) AppErrorType *badanswer __attribute__((swift_name("badanswer")));
- (int32_t)compareToOther:(AppErrorType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatcherKt")))
@interface AppDispatcherKt : AppBase
+ (void)ktorScopeBlock:(id<AppKotlinSuspendFunction0>)block __attribute__((swift_name("ktorScope(block:)")));
@property (class, readonly) AppKotlinx_coroutines_coreCoroutineDispatcher *ApplicationDispatcher __attribute__((swift_name("ApplicationDispatcher")));
@property (class, readonly) id<AppKotlinCoroutineContext> defaultDispatcher __attribute__((swift_name("defaultDispatcher")));
@property (class, readonly) id<AppKotlinCoroutineContext> iosDispatcher __attribute__((swift_name("iosDispatcher")));
@property (class, readonly) id<AppKotlinCoroutineContext> uiDispatcher __attribute__((swift_name("uiDispatcher")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AppKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AppKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface AppKtor_client_coreHttpClient : AppBase <AppKotlinx_coroutines_coreCoroutineScope, AppKtor_ioCloseable>
- (instancetype)initWithEngine:(id<AppKtor_client_coreHttpClientEngine>)engine userConfig:(AppKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (AppKtor_client_coreHttpClient *)configBlock:(void (^)(AppKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<AppKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<AppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) AppKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<AppKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) AppKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) AppKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) AppKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) AppKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) AppKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialFormat")))
@protocol AppKotlinx_serialization_runtimeSerialFormat
@required
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeStringFormat")))
@protocol AppKotlinx_serialization_runtimeStringFormat <AppKotlinx_serialization_runtimeSerialFormat>
@required
- (id _Nullable)parseDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("parse(deserializer:string:)")));
- (NSString *)stringifySerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("stringify(serializer:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJson")))
@interface AppKotlinx_serialization_runtimeJson : AppBase <AppKotlinx_serialization_runtimeStringFormat>
- (instancetype)initWithBlock:(void (^)(AppKotlinx_serialization_runtimeJsonBuilder *))block __attribute__((swift_name("init(block:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Default constructor is deprecated, please specify the desired configuration explicitly or use Json(JsonConfiguration.Default)")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithConfiguration:(AppKotlinx_serialization_runtimeJsonConfiguration *)configuration context:(id<AppKotlinx_serialization_runtimeSerialModule>)context __attribute__((swift_name("init(configuration:context:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)fromJsonDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer json:(AppKotlinx_serialization_runtimeJsonElement *)json __attribute__((swift_name("fromJson(deserializer:json:)")));
- (id)fromJsonTree:(AppKotlinx_serialization_runtimeJsonElement *)tree __attribute__((swift_name("fromJson(tree:)")));
- (id _Nullable)parseDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("parse(deserializer:string:)")));
- (AppKotlinx_serialization_runtimeJsonElement *)parseJsonString:(NSString *)string __attribute__((swift_name("parseJson(string:)")));
- (NSString *)stringifySerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("stringify(serializer:value:)")));
- (AppKotlinx_serialization_runtimeJsonElement *)toJsonValue:(id)value __attribute__((swift_name("toJson(value:)")));
- (AppKotlinx_serialization_runtimeJsonElement *)toJsonSerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("toJson(serializer:value:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol AppKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<AppKotlinx_serialization_runtimeEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol AppKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AppKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<AppKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol AppKotlinx_serialization_runtimeKSerializer <AppKotlinx_serialization_runtimeSerializationStrategy, AppKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol AppKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol AppKotlinSuspendFunction0 <AppKotlinFunction>
@required
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AppKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AppKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AppKotlinCoroutineContextElement> _Nullable)getKey:(id<AppKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AppKotlinCoroutineContext>)minusKeyKey:(id<AppKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AppKotlinCoroutineContext>)plusContext:(id<AppKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AppKotlinCoroutineContextElement <AppKotlinCoroutineContext>
@required
@property (readonly) id<AppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface AppKotlinAbstractCoroutineContextElement : AppBase <AppKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<AppKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol AppKotlinContinuationInterceptor <AppKotlinCoroutineContextElement>
@required
- (id<AppKotlinContinuation>)interceptContinuationContinuation:(id<AppKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<AppKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface AppKotlinx_coroutines_coreCoroutineDispatcher : AppKotlinAbstractCoroutineContextElement <AppKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<AppKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<AppKotlinCoroutineContext>)context block:(id<AppKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<AppKotlinCoroutineContext>)context block:(id<AppKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<AppKotlinContinuation>)interceptContinuationContinuation:(id<AppKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<AppKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (AppKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(AppKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<AppKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol AppKtor_client_coreHttpClientEngine <AppKotlinx_coroutines_coreCoroutineScope, AppKtor_ioCloseable>
@required
- (void)installClient:(AppKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) AppKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) AppKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<AppKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface AppKtor_client_coreHttpClientConfig : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AppKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(AppKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(AppKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<AppKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(AppKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(AppKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol AppKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol AppKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(AppKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(AppKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(AppKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(AppKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(AppKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(AppKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(AppKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(AppKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<AppKtor_utilsAttributeKey *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface AppKtor_client_coreHttpClientEngineConfig : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property AppKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) AppKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface AppKtor_utilsPipeline : AppBase
- (instancetype)initWithPhase:(AppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AppKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(AppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(AppKtor_utilsPipelinePhase *)reference phase:(AppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(AppKtor_utilsPipelinePhase *)reference phase:(AppKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(AppKtor_utilsPipelinePhase *)phase block:(id<AppKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(AppKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<AppKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<AppKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface AppKtor_client_coreHttpReceivePipeline : AppKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(AppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AppKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface AppKtor_client_coreHttpRequestPipeline : AppKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(AppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AppKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface AppKtor_client_coreHttpResponsePipeline : AppKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(AppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AppKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface AppKtor_client_coreHttpSendPipeline : AppKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(AppKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AppKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AppKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol AppKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<AppKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<AppKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<AppKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<AppKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<AppKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<AppKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<AppKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonBuilder")))
@interface AppKotlinx_serialization_runtimeJsonBuilder : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AppKotlinx_serialization_runtimeJsonConfiguration *)buildConfiguration __attribute__((swift_name("buildConfiguration()")));
- (id<AppKotlinx_serialization_runtimeSerialModule>)buildModule __attribute__((swift_name("buildModule()")));
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property NSString *indent __attribute__((swift_name("indent")));
@property BOOL isLenient __attribute__((swift_name("isLenient")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property id<AppKotlinx_serialization_runtimeSerialModule> serialModule __attribute__((swift_name("serialModule")));
@property BOOL serializeSpecialFloatingPointValues __attribute__((swift_name("serializeSpecialFloatingPointValues")));
@property BOOL strictMode __attribute__((swift_name("strictMode"))) __attribute__((unavailable("'strictMode = true' is replaced with 3 new configuration parameters: 'ignoreUnknownKeys = false' to fail if an unknown key is encountered, 'serializeSpecialFloatingPointValues = false' to fail on 'NaN' and 'Infinity' values, 'isLenient = false' to prohibit parsing of any non-compliant or malformed JSON")));
@property BOOL unquoted __attribute__((swift_name("unquoted"))) __attribute__((unavailable("'unquoted' is deprecated in the favour of 'unquotedPrint'")));
@property BOOL unquotedPrint __attribute__((swift_name("unquotedPrint")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonConfiguration")))
@interface AppKotlinx_serialization_runtimeJsonConfiguration : AppBase
- (instancetype)initWithEncodeDefaults:(BOOL)encodeDefaults ignoreUnknownKeys:(BOOL)ignoreUnknownKeys isLenient:(BOOL)isLenient serializeSpecialFloatingPointValues:(BOOL)serializeSpecialFloatingPointValues allowStructuredMapKeys:(BOOL)allowStructuredMapKeys prettyPrint:(BOOL)prettyPrint unquotedPrint:(BOOL)unquotedPrint indent:(NSString *)indent useArrayPolymorphism:(BOOL)useArrayPolymorphism classDiscriminator:(NSString *)classDiscriminator updateMode:(AppKotlinx_serialization_runtimeUpdateMode *)updateMode __attribute__((swift_name("init(encodeDefaults:ignoreUnknownKeys:isLenient:serializeSpecialFloatingPointValues:allowStructuredMapKeys:prettyPrint:unquotedPrint:indent:useArrayPolymorphism:classDiscriminator:updateMode:)"))) __attribute__((objc_designated_initializer));
- (AppKotlinx_serialization_runtimeJsonConfiguration *)doCopyEncodeDefaults:(BOOL)encodeDefaults ignoreUnknownKeys:(BOOL)ignoreUnknownKeys isLenient:(BOOL)isLenient serializeSpecialFloatingPointValues:(BOOL)serializeSpecialFloatingPointValues allowStructuredMapKeys:(BOOL)allowStructuredMapKeys prettyPrint:(BOOL)prettyPrint unquotedPrint:(BOOL)unquotedPrint indent:(NSString *)indent useArrayPolymorphism:(BOOL)useArrayPolymorphism classDiscriminator:(NSString *)classDiscriminator updateMode:(AppKotlinx_serialization_runtimeUpdateMode *)updateMode __attribute__((swift_name("doCopy(encodeDefaults:ignoreUnknownKeys:isLenient:serializeSpecialFloatingPointValues:allowStructuredMapKeys:prettyPrint:unquotedPrint:indent:useArrayPolymorphism:classDiscriminator:updateMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeJsonElement")))
@interface AppKotlinx_serialization_runtimeJsonElement : AppBase
- (BOOL)containsKey_:(NSString *)key __attribute__((swift_name("contains(key_:)")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) NSArray<AppKotlinx_serialization_runtimeJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) AppKotlinx_serialization_runtimeJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, AppKotlinx_serialization_runtimeJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) AppKotlinx_serialization_runtimeJsonPrimitive *primitive __attribute__((swift_name("primitive")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol AppKotlinx_serialization_runtimeEncoder
@required
- (id<AppKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(AppKotlinArray *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)")));
- (id<AppKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeSerializers:(AppKotlinArray *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol AppKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<AppKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AppKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<AppKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()"))) __attribute__((deprecated("Deprecated in the favour of 'annotations' property")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<AppKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) AppKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name"))) __attribute__((unavailable("name property deprecated in the favour of serialName")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol AppKotlinx_serialization_runtimeDecoder
@required
- (id<AppKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeParams:(AppKotlinArray *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AppKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) AppKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AppKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol AppKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<AppKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol AppKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol AppKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(AppKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) AppKtor_utilsAttributeKey *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface AppKtor_utilsAttributeKey : AppBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface AppKtor_client_coreProxyConfig : AppBase
- (instancetype)initWithUrl:(AppKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AppKotlinNothing : AppBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface AppKtor_utilsPipelinePhase : AppBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol AppKotlinSuspendFunction2 <AppKotlinFunction>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AppKotlinArray : AppBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(AppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol AppKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<AppKotlinKClass>)kClass serializer:(id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AppKotlinKClass>)baseClass actualClass:(id<AppKotlinKClass>)actualClass actualSerializer:(id<AppKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AppKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AppKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AppKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AppKotlinKClass <AppKotlinKDeclarationContainer, AppKotlinKAnnotatedElement, AppKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface AppKotlinx_serialization_runtimeUpdateMode : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) AppKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) AppKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(AppKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeJsonPrimitive")))
@interface AppKotlinx_serialization_runtimeJsonPrimitive : AppKotlinx_serialization_runtimeJsonElement
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) AppBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) AppDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) AppFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) AppInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) AppLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@property (readonly) AppKotlinx_serialization_runtimeJsonPrimitive *primitive __attribute__((swift_name("primitive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonNull")))
@interface AppKotlinx_serialization_runtimeJsonNull : AppKotlinx_serialization_runtimeJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly) AppKotlinx_serialization_runtimeJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol AppKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeUnitElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AppKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface AppKotlinx_serialization_runtimeSerialKind : AppBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol AppKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:)")));
- (int16_t)decodeShortElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)decodeUnitElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) AppKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface AppKtor_httpUrl : AppBase
- (instancetype)initWithProtocol:(AppKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<AppKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (AppKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<AppKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (AppKtor_httpUrl *)doCopyProtocol:(AppKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<AppKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AppKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AppKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface AppKtor_httpURLProtocol : AppBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (AppKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol AppKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AppKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol AppKtor_httpParameters <AppKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol AppKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
