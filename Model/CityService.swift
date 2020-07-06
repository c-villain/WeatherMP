//
//  CityService.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 04.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import Foundation
import app

class CityService {
    private var weatherServiceApi : WeatherApiService = WeatherApiService()
    
//    func loadCities(_ cityName: String, onLoading: @escaping (_ results: Result<[City], Error>) -> ())
//    {
//        weatherServiceApi.loadData(query: cityName)
//        let results = weatherServiceApi.data
//        
//        guard results != nil else {
//            onLoading(.failure(NSError()))
//            return
//        }
//        
//        onLoading(.success(results))
//    }
}
