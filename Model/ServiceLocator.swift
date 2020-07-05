//
//  ServiceLocator.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 04.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import Foundation

class ServiceLocator : ObservableObject{
    
    private var registry : [String: Any] = [:]
    
    func registerService<T>(service: T) {
        let key = "\(T.self)"
        registry[key] = service
    }
    
    private func tryGetService<T>() -> T? {
        let key = "\(T.self)"
        return registry[key] as? T
    }
    
    func getService<T>() -> T {
      tryGetService()!
    }
}
