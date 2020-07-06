//
//  CityViewModel.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 04.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import Foundation
import app

final class CityViewModel : ObservableObject
{
    @Published private(set) var cities: [City] = [City]()

    func clearItems(){
        self.cities.removeAll()
    }
    
    private var weatherServiceApi : WeatherApiService = WeatherApiService()
    
    func loadCities(cityName: String)  {
        
        weatherServiceApi.loadData(query: cityName)

        DispatchQueue.main.asyncAfter(deadline: .now() + 0.3){
                let results = self.weatherServiceApi.data
                self.cities.append(contentsOf: results)
            }

//        DispatchQueue.main.async {
//                let results = self.weatherServiceApi.loadData(query: cityName)
//                self.cities.append(contentsOf: results)
//            }
//            
        
        
//            self.weatherServiceApi.loadData(query: cityName)
//        DispatchQueue.main.async {
//            let results = self.weatherServiceApi.data
//            self.cities.append(contentsOf: results)
//        }
//
//        weatherServiceApi.loadCities(query: cityName){result in
//            DispatchQueue.main.async {
//                switch result{
//                case .success(let cities):
//                    self.cities.append(contentsOf: cities)
//
//                case .failure(let error):
//                    print("Failed loading cities: " + error.localizedDescription)
//                }
//            }
//        }
    }
}
