//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_COLLECTIBLE_H
#define PROJET_COLLECTIBLE_H


class Collectible {
private:
    bool collected;

public:
    Collectible();
    bool isCollected();
    void collect();

};


#endif //PROJET_COLLECTIBLE_H
