//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_ACTOR_H
#define PROJET_ACTOR_H

#include <vector>
#include "../Coordinate.h"
#include "../Dimension.h"

using namespace std;

class Actor {
protected:
    Coordinate coord;
    Dimension dim;
    int spriteIds[0]; // Todo Définir grosseur de l'array
    int indexID;
    int speed;
    vector<Actor> actors;

public:
    Actor();
    void move(int x, int y);
    bool isAlive();
    int currentSpriteID();
    int nextSpriteID();
    vector<Actor> getCollision(); // Todo À revoir
    void update();

private:
    static void addActor(Actor actor);

};


#endif //PROJET_ACTOR_H
