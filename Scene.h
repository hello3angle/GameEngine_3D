#pragma once

#include <iostream>
#include <map>
#include <vector>

class Scene
{
public:
	Scene(const char* id);
	~Scene();

	virtual void update(const double& seconds_to_simulate, struct GLFWwindow* window) = 0;

	class Game_Object* get_game_object(const char* id) const;
	std::vector<class Game_Object*> get_game_objects() const;
	
	const char* const& id() const;

protected:
	std::map<const char*, class Game_Object*> _game_objects;
	const char* _id;
};

