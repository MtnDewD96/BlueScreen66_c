//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_CONTROLLER_H
#define PROJET_CONTROLLER_H


#include "EventManager.h"

class Controller {
private:
    EventManager eventManager;

public:
    Controller();
    int* getMovement();
    bool isButtonPressed();
    bool resetButtonPressed();

private:
    int updateDirection();
    int updateAcceleration();

};


#endif //PROJET_CONTROLLER_H
