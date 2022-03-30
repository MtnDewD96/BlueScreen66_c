//
// Created by Marc-André Doyon on 2022-03-23.
//

#include "Player.h"

Player::Player() {
    this->health = playerStartingHealth;
    this->score = playerStartingScore;
}

void Player::increaseScore() {
    this->score++;
}

void Player::resetScore() {
    this->score = playerStartingScore;
}

void Player::decreaseHealth() {
    if(health == 0)
    {
        //Death ?
        this->resetHealth();
        this->resetScore();
    }
    else
    {
        this->health--;
    }
}

void Player::resetHealth() {
    this->health = playerStartingHealth;
}

int Player::getHealth(){
    return health;
}

int Player::getScore() {
    return score;
}