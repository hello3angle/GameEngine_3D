#pragma once
#include "Game_Object.h"

class Pentagon : public Game_Object
{
public:
	Pentagon(const char* id, const int& key);
	~Pentagon();

	// Inherited via Game_Object
	virtual void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene) override;
};

