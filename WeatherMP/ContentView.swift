//
//  ContentView.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 02.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import SwiftUI

struct ContentView: View {
    
    @EnvironmentObject var cityViewModel: CityViewModel
    
    @State var searchTerm : String = "Mos"
    
    var body: some View {
        NavigationView{
            VStack{
                HStack{
                    SearchBar(text: $searchTerm)
                    Button(action:{
                        self.cityViewModel.clearItems()
                        self.cityViewModel.loadCities(cityName: self.searchTerm)
                    }, label: {
                        Text("Search")})
                    Spacer()
                }
                
                List(self.cityViewModel.cities, id: \.id){city in
                    NavigationLink(destination: CityWeatherListView(city: city)){
                        CityRow(city: city)
                    }
                }.onAppear(){
                    self.cityViewModel.clearItems()
                    self.cityViewModel.loadCities(cityName: self.searchTerm)
                }//List
                    .navigationBarTitle("", displayMode: .inline)
                    .navigationBarHidden(true)
            } //NavigationView
        }
    } //View
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
