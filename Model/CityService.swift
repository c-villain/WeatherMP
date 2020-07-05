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
    private var newServiceApi : NewsApiService = NewsApiService()
    
    func loadCities(_ cityName: String, onLoading: @escaping (_ results: Result<[City], Error>) -> ())
    {
        newServiceApi.loadData(query: cityName)
        let results = newServiceApi.data
        
        guard results != nil else {
            onLoading(.failure(NSError()))
            return
        }
        
        onLoading(.success(results))
    }
}
