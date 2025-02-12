// --- Engine.h ---

#ifndef ENGINE_H
#define ENGINE_H

#include "olcPixelGameEngine.h"
#include "World.h"
#include "structs_enums.h"
#include "Objects.h"
#include "Assets.h"
#include <fstream>
#include "Files.h"

#include <unordered_map>

class Engine : public olc::PixelGameEngine
{
public:
	Engine()
	{
		sAppName = "Viking's Wrath";
	}

	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;

	void saveLevel();
	void loadLevel();
	void loadAssets();

	void testUpdateMethod();

	std::array<Vec3Df, 8> createCube(const Vec3Di location, const float angle, const float pitch, const float scale,
			const Vec3Df& camera);
	void calculateVisibleFaces(std::array<Vec3Df, 8>& cube);
	void addQuadFaces(const Vec3Di location, const float angle, const float pitch, const float scale,
			const Vec3Df camera, std::vector<Quad>& drawList);
	
	Assets a;
	Files f;
	Level* level;
	

	World world;
	std::ofstream fout;
	std::ifstream fin;

	std::ofstream testout;
	

	std::ofstream angleOut;
	std::ifstream angleIn;

	float time = 0.0f;

	float test_time = 0.0f;
	float test_time_end = 0.0f;

	
	Gfx walls;
	Gfx roofFloor;
	Gfx character;
	Gfx testCells;
	Gfx newTiles;

	Vec3Df cameraPos = { 0.0f, 0.0f, -10.0f };
	Vec3Df cameraPosTarget = { 0.0f, 0.0f, 0.0f };
	float cameraAngle = 0.0f;
	float cameraAngleTarget = 0.0f;
	float cameraPitch = 5.5f;
	float cameraZoom = 1.5;

	float angleVel = 0.0f;
	float pitchVel = 0.0f;
	float zoomVel = 0.0f;

	bool visible[6];

	Vec3Di cursor = { 0, 0, 0 };
	olc::vi2d tileCursor = { 0,0 };
	olc::vi2d wallDims = { 54, 40 };
	olc::vi2d floorDims = { 54, 54 };



	Vec3Di cDims = { 54, 40, 54 };
	Vec3Di pDims = { 24, 32, 24 };
};


#endif
