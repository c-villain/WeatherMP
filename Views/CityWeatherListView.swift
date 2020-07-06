//
//  CityWeatherListView.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 06.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import SwiftUI
import app

struct CityWeatherListView: View {
    @EnvironmentObject var viewModel: WeatherViewModel
    
    @State var city : City
    
    var body: some View {
        NavigationView{
            VStack{
                List(self.viewModel.items, id: \.id){item in NavigationLink(destination: WeatherRow(weather: item)){
                        WeatherRow(weather: item)
                    }
                }.onAppear(){
                    self.viewModel.clearItems()
                    self.viewModel.loadWeather(woeid: self.city.woeid as! Int32)
                }//List
            }
            .navigationBarTitle("")
            .navigationBarHidden(true)
        }  //NavigationView
    } //body View
}

struct CityWeatherListView_Previews: PreviewProvider {
    static var previews: some View {
        let city = City(title: "London", locationType: "City", woeid: 44418, lattLong: "51.506321,-0.12714")
        return CityWeatherListView(city: city)
    }
}

