//
//  SceneDelegate.swift
//  WeatherMP
//
//  Created by Alexander Kraev on 02.07.2020.
//  Copyright © 2020 Alexander Kraev. All rights reserved.
//

import UIKit
import SwiftUI

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?

    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        
        let locator = ServiceLocator()
        let cityService = CityService() as CityService
        locator.registerService(service: cityService)
        
        let cityViewModel = CityViewModel(cityService: locator.getService())
        
        let contentView = ContentView().environmentObject(cityViewModel)

        if let windowScene = scene as? UIWindowScene {
            let window = UIWindow(windowScene: windowScene)
            window.rootViewController = UIHostingController(rootView: contentView)
            self.window = window
            window.makeKeyAndVisible()
        }
    }

    func sceneDidDisconnect(_ scene: UIScene) {

    }

    func sceneDidBecomeActive(_ scene: UIScene) {

    }

    func sceneWillResignActive(_ scene: UIScene) {

    }

    func sceneWillEnterForeground(_ scene: UIScene) {

    }

    func sceneDidEnterBackground(_ scene: UIScene) {

    }


}

