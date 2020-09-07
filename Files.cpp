#include <iostream>
#include <fstream>

#include "Files.h"
#include "Engine.h"

void Files::init(Engine* engine) {
    L1.dynamicObjects.push_back("./Sprites/enSmallDragon/dragAttack.png");
    L1.level = "L1_level.txt";
    engine->level = &(this->L1);
}