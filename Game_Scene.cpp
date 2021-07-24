#include <GLFW/glfw3.h>

#include "Game_Scene.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Pentagon.h"
#include "Cube1.h"
#include "Cube2.h"
#include "Pyramid.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
	Rectangle* rectangle = new Rectangle("Game_Object.Rectangle", GLFW_KEY_1);
	_game_objects[rectangle->id()] = rectangle;

	Triangle* triangle = new Triangle("Game_Object.Triangle", GLFW_KEY_2);
	_game_objects[triangle->id()] = triangle;

	Pentagon* pentagon = new Pentagon("Game_Object.Pentagon", GLFW_KEY_3);
	_game_objects[pentagon->id()] = pentagon;

	Cube1* cube1 = new Cube1("Game_Object.Cube1", GLFW_KEY_4);
	_game_objects[cube1->id()] = cube1;

	Cube2* cube2 = new Cube2("Game_Object.Cube2", GLFW_KEY_5);
	_game_objects[cube2->id()] = cube2;

	Pyramid* pyramid = new Pyramid("Game_Object.Pyramid", GLFW_KEY_6);
	_game_objects[pyramid->id()] = pyramid;
}

Game_Scene::~Game_Scene()
{
}

void Game_Scene::update(const double& seconds_to_simulate, GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_1))
	{
		for (auto game_object : get_game_objects())
		{
			if (game_object->id() == "Game_Object.Rectangle")
			{
				game_object->setIsVisible(true);
			}
			else
			{
				game_object->setIsVisible(false);
			}
		}
	}
	else if (glfwGetKey(window, GLFW_KEY_2))
	{
		for (auto game_object : get_game_objects())
		{
			if (game_object->id() == "Game_Object.Triangle")
			{
				game_object->setIsVisible(true);
			}
			else
			{
				game_object->setIsVisible(false);
			}
		}
	}
	else if (glfwGetKey(window, GLFW_KEY_3))
	{
		for (auto game_object : get_game_objects())
		{
			if (game_object->id() == "Game_Object.Pentagon")
			{
				game_object->setIsVisible(true);
			}
			else
			{
				game_object->setIsVisible(false);
			}
		}
	}
	else if (glfwGetKey(window, GLFW_KEY_4))
	{
		for (auto game_object : get_game_objects())
		{
			if (game_object->id() == "Game_Object.Cube1")
			{
				game_object->setIsVisible(true);
			}
			else
			{
				game_object->setIsVisible(false);
			}
		}
	}
	else if (glfwGetKey(window, GLFW_KEY_5))
	{
		for (auto game_object : get_game_objects())
		{
			if (game_object->id() == "Game_Object.Cube2")
			{
				game_object->setIsVisible(true);
			}
			else
			{
				game_object->setIsVisible(false);
			}
		}
	}
	else if (glfwGetKey(window, GLFW_KEY_6))
	{
		for (auto game_object : get_game_objects())
		{
			if (game_object->id() == "Game_Object.Pyramid")
			{
				game_object->setIsVisible(true);
			}
			else
			{
				game_object->setIsVisible(false);
			}
		}
	}
}
