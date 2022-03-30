//
// Created by Marc-André Doyon on 2022-03-23.
//

#include "TTLObject.h"

TTLObject::TTLObject() {

}

int TTLObject::getTTL() {
    return this->ttl;
}

void TTLObject::setTTL(int ttl) {
    this->ttl = ttl;
}
