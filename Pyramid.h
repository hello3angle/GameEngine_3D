#pragma once
#include "Game_Object.h"

class Pyramid : public Game_Object
{
public:
	Pyramid(const char* id, const int& key);
	~Pyramid();

	// Inherited via Game_Object
	virtual void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene) override;
};

