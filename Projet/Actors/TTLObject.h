//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_TTLOBJECT_H
#define PROJET_TTLOBJECT_H


#include "Actor.h"

class TTLObject: public Actor {
private:
    int ttl;

public:
    TTLObject();
};


#endif //PROJET_TTLOBJECT_H
