//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_GAMELOGIC_H
#define PROJET_GAMELOGIC_H

#include <queue>
#include "Actors/Car.h"
#include "Actors/Capacitor.h"
#include "Actors/Collectible.h"
#include "Actors/Player.h"

enum GameState {
    INIT,
    PLAYING,
    PAUSE,
    SUCCESS,
    FAIL
};

using namespace std;

class GameLogic {
private:
    int difficulty;
    queue<Car> cars;
    queue<Capacitor> capacitors;
    Collectible collectible;
    Player player;
    GameState gameState;

public:
    GameLogic();
    void play();
    void pause();
    void stop();
    GameState hasSucceeded();
};


#endif //PROJET_GAMELOGIC_H
