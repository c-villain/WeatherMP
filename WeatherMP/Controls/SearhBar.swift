//
//  SearhBar.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 05.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import SwiftUI

class Cordinator : NSObject, UISearchBarDelegate {
    
    @Binding var text : String

    init(text : Binding<String>){
        _text = text
    }
    
    func searchBar(_ searchBar: UISearchBar,
                   textDidChange searchText: String){
        text = searchText
    }
}

struct SearchBar : UIViewRepresentable {
    
    @Binding var text : String
    
    func searchBar(_ searchBar: UISearchBar,
                   textDidChange searchText: String) {
        text = searchText
    }
    
    func makeCoordinator() -> Cordinator {
        return Cordinator(text: $text)
    }
    
    func makeUIView(context: UIViewRepresentableContext<SearchBar>)
        -> UISearchBar {
            
            let searchBar = UISearchBar(frame: .zero)
            searchBar.delegate = context.coordinator
            searchBar.searchBarStyle = .minimal
        
            return searchBar
    }
    
    func updateUIView(_ uiView: UISearchBar,
                      context: UIViewRepresentableContext<SearchBar>) {
        uiView.text = text
    }
}
