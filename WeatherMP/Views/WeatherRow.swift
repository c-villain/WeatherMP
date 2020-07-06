//
//  WeatherRow.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 06.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import SwiftUI
import app

struct WeatherRow: View {
    let weather: Weather
    
    var body: some View {
        VStack(alignment: .leading){
            
            Text("Date: " + String(weather.applicableDate ?? ""))
                .font(.headline)
                .foregroundColor(.black)
            
            Text("Temp: " + String(weather.theTemp?.description ?? ""))
            
            Text("Weather state name: " + String( weather.weatherStateName ?? ""))
                .font(.callout)
                .foregroundColor(.gray)
            
            Text("Wind direction: " + String (weather.windDirectionCompass ?? ""))
            .font(.callout)
                .foregroundColor(.blue)
        }
    }
}

struct WeatherRow_Previews: PreviewProvider {
    static var previews: some View {
        WeatherRow(weather: Weather(id: 123, weatherStateName: "Showers", applicableDate: "2020-07-06", theTemp: 19.13, windDirectionCompass: "WNW"))
    }
}
