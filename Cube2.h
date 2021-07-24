#pragma once
#include "Game_Object.h"

class Cube2 : public Game_Object
{
public:
	Cube2(const char* id, const int& key);
	~Cube2();

	// Inherited via Game_Object
	virtual void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene) override;
};

