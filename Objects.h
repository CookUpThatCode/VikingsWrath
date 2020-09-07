// --- Objects.h ---

#ifndef OBJECTS_H
#define OBJECTS_H

#include "structs_enums.h"

class Engine;

class Objects {
public:
    Objects() {}
    ~Objects() {}
};

class Player : public Objects {
public:
    Player(Engine* engine);
    ~Player() {}
    
};



#endif