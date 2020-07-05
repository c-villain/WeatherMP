//
//  City.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 04.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import Foundation
import app

extension City: Identifiable{
    public var id: String{
        return UUID().uuidString
    }
}
