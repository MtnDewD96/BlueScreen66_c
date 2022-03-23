//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_PLAYER_H
#define PROJET_PLAYER_H


class Player {
private:
    int score;
    int health;

public:
    Player();
    void increaseScore();
    void resetScore();
    void decreaseHealth();
    void resetHealth();

};

#endif //PROJET_PLAYER_H
