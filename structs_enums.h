// --- structs_enums.h ---

#ifndef STRUCTS_ENUMS_H
#define STRUCTS_ENUMS_H

#include <iostream>
#include "olcPixelGameEngine.h"


// ------------------- Structs ------------------

struct Gfx    // Graphics: convenient way to load an image as both a sprite and a decal at the same time
{
	Gfx() { }
	~Gfx()
	{
		delete sprite;
		delete decal;
	}
	void load(std::string filename)
	{
		sprite = new olc::Sprite(filename);
		decal = new olc::Decal(sprite);
	}
	olc::Sprite* sprite = nullptr;
	olc::Decal* decal = nullptr;
};

struct Vec3Df    // points and vectors in 3-dimensional space
{
	float x, y, z;
};

struct Vec3Di
{
	int x, y, z;
};

struct Quad     // collections of 4 points. each has a tile with sprite info
{
	Vec3Df points[4];
	olc::vi2d tileSpr;    // location on sprite sheet
	olc::vi2d tileDims;   // dimensions of tile on sprite sheet
};

struct Cell    // collection of 6 faces, each with tile coordinates on sprite sheet
{
	bool placed = false;
	olc::vi2d tiles[6]{ };   // sprite sheet coordinates for 6 faces
};

struct Level {
	std::vector<std::string> dynamicObjects;
	std::string level;
};


// ------------------- Enums --------------

enum Face
{
	Floor = 0,
	East = 1,
	North = 2,
	West = 3,
	South = 4,
	Top = 5
};



#endif
