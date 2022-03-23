//
// Created by Marc-André Doyon on 2022-03-23.
//

#ifndef PROJET_EVENTMANAGER_H
#define PROJET_EVENTMANAGER_H

#include "vector"
#include "EventListener.h"

using namespace std;

class EventManager {
private:
    vector<EventListener> listeners;

public:
    EventManager();
    void subscribe();
    void notify();
    void unsubscribe();
};


#endif //PROJET_EVENTMANAGER_H
