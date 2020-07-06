//
//  WeatherViewModel.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 06.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import Foundation
import app

final class WeatherViewModel : ObservableObject
{
    @Published private(set) var items: [Weather] = [Weather]()
    
    private var weatherServiceApi : WeatherApiService = WeatherApiService()
    
    func clearItems(){
        self.items.removeAll()
    }
    
    func loadWeather(woeid: Int32)  {
        weatherServiceApi.loadWeatherForCity(woeid: woeid)
        DispatchQueue.main.asyncAfter(deadline: .now() + 1){
            DispatchQueue.main.async{
                let results = self.weatherServiceApi.weatherList
                self.items.append(contentsOf: results.consolidatedWeather ??  [Weather]())
            }
        }
    }
}

