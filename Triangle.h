#pragma once
#include "Game_Object.h"

class Triangle : public Game_Object
{
public:
	Triangle(const char* id, const int& key);
	~Triangle();

	// Inherited via Game_Object
	virtual void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene) override;

};

