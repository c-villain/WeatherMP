//
//  CityRow.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 04.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import SwiftUI
import app

struct CityRow: View {
    
    let city: City
    
    var body: some View {
        VStack(alignment: .leading) {
            Text(city.title ?? "")
                .font(.headline)
            Text(city.locationType ?? "")
                .font(.callout)
                .foregroundColor(.gray)
            Text(city.lattLong ?? "")
            .font(.callout)
                .foregroundColor(.blue)
        }
    }
}

struct CityRow_Previews: PreviewProvider {
    static var previews: some View {
        let city = City(title: "London", locationType: "City", woeid: 44418, lattLong: "51.506321,-0.12714")
        return CityRow(city: city)
    }
}
