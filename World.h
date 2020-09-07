// --- World.h ---

#ifndef WORLD_H
#define WORLD_H

#include "olcPixelGameEngine.h"
#include "structs_enums.h"

class World
{
public:
	World() { }
	~World();
	void Create(int width, int height, int depth);
	Cell& getCell(const Vec3Di& location);
	
	

	Vec3Di size;
	Cell*** cells = nullptr;
	Cell nullCell;
};




#endif
