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
    
    private let cityService: CityService

    init(cityService: CityService) {
        self.cityService = cityService
    }

    func clearItems(){
        self.cities.removeAll()
    }
    
    func loadCities(cityName: String )  {
        cityService.loadCities(cityName){result in
            DispatchQueue.main.async {
                switch result{
                case .success(let cities):
                    self.cities.append(contentsOf: cities)
                    
                case .failure(let error):
                    print("Failed loading cities: " + error.localizedDescription)
                }
            }
        }
    }
}
