#pragma once
#include "Game_Object.h"

class Rectangle : public Game_Object
{
public:
	Rectangle(const char* id, const int& key);
	~Rectangle();

	// Inherited via Game_Object
	virtual void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene) override;
};

