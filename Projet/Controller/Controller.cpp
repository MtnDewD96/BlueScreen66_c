//
// Created by Marc-André Doyon on 2022-03-23.
//

#include "Controller.h"

Controller::Controller() {

}

int *Controller::getMovement() {
    return nullptr;
}

bool Controller::isButtonPressed() {
    return false;
}

bool Controller::resetButtonPressed() {
    return false;
}

int Controller::updateDirection() {
    return 0;
}

int Controller::updateAcceleration() {
    return 0;
}
