//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_PLAYER_H
#define PROJET_PLAYER_H

#include "Actor.h"

#define playerStartingHealth 3
#define playerStartingScore 0

class Player : public Actor {
private:
    int score;
    int health;

public:
    Player();
    void increaseScore();
    void resetScore();
    void decreaseHealth();
    void resetHealth();
    int getHealth();
    int getScore();

};

#endif //PROJET_PLAYER_H
