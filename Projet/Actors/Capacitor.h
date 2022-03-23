//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_CAPACITOR_H
#define PROJET_CAPACITOR_H


#include "../Coordinate.h"
#include "TTLObject.h"

class Capacitor : public TTLObject {
private:
    int lagFactor;
    Coordinate target;

public:
    Capacitor();
    void updateTarget(Coordinate target);
};


#endif //PROJET_CAPACITOR_H
