// --- Objects.cpp ---

#include "Objects.h"

#include "olcPixelGameEngine.h"
#include "structs_enums.h"
#include "Engine.h"

using namespace std;

Player::Player(Engine* engine) {
    engine->testout << "This is players constructor\n";
    engine->testout.close();
}