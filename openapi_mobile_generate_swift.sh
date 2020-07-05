openapi-generator generate -g kotlin -i weatheropenapi.yaml --library multiplatform -o NetworkLayer 
rm -r WeatherMP/_CodeGenNetworkMobile/*
cp -R swift-api/OpenAPIClient/Classes/OpenAPIs/. WeatherMP/_CodeGenNetworkMobile/*
rm -r swift-api