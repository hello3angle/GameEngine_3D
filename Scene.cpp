#include "Scene.h"
#include "Game_Object.h"

Scene::Scene(const char* id)
	: _id(id)
{
}

Scene::~Scene()
{
}

Game_Object* Scene::get_game_object(const char* id) const
{
	if (_game_objects.find(id) == _game_objects.end())
	{
		std::cout << "Attempted to find a game object that does not exist. ID: " << id << std::endl;
		exit(1);
	}

	return _game_objects.find(id)->second;
}

std::vector<Game_Object*> Scene::get_game_objects() const
{
	std::vector<Game_Object*> game_objects;
	for (auto key_value : _game_objects)
		game_objects.push_back(key_value.second);

	return game_objects;
}

const char* const& Scene::id() const
{
	return _id;
}
