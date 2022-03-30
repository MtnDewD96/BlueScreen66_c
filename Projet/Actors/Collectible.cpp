//
// Created by Marc-André Doyon on 2022-03-23.
//

#include "Collectible.h"

bool Collectible::isCollected() {
    return this->collected;
}

Collectible::Collectible() {
    this->collected = false;
}

void Collectible::collect() {
    this->collected = true;
    // Todo call GameAPI pour despawner le collectible
}
