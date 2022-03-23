cmake_minimum_required(VERSION 3.21)
project(Projet)

set(CMAKE_CXX_STANDARD 14)

add_executable(Projet main.cpp Game.cpp Game.h GameLogic.cpp GameLogic.h Actors/TTLObject.cpp Actors/TTLObject.h Actors/Collectible.cpp Actors/Collectible.h Actors/Car.cpp Actors/Car.h Actors/Capacitor.cpp Actors/Capacitor.h Actors/Actor.cpp Actors/Actor.h Coordinate.h Dimension.h Actors/Player.cpp Actors/Player.h Map.cpp Map.h Option.h Controller/EventListener.cpp Controller/EventListener.h Controller/EventManager.cpp Controller/EventManager.h Controller/Controller.cpp Controller/Controller.h)
