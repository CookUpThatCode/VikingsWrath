#ifndef FILES_H
#define FILES_H

#include "structs_enums.h"

class Engine;

class Files {
public:
    Files() {}
    ~Files() {}
    void init(Engine* engine);


    Level L1;
    Level L2;
    Level L3;
    Level L4;
    Level L5;
};



#endif