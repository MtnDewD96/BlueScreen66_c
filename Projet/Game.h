//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_GAME_H
#define PROJET_GAME_H


#include "Option.h"

class Game {
private:
    int gameCount;
    Option option;

public:
    Game();
    void gameLoop();

};


#endif //PROJET_GAME_H
