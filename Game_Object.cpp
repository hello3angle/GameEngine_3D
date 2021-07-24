#include "Game_Object.h"

Game_Object::Game_Object(const char* id, const int& key)
	: _id(id), _key(key)
{
}

Game_Object::~Game_Object()
{
}

const char* const& Game_Object::id() const
{
	return _id;
}

glm::mat4x4 Game_Object::transformation(const Scene* scene)
{
	glm::mat4 translation = glm::translate(glm::mat4(1.f), _translation);
	glm::mat4 scale = glm::scale(glm::mat4(1.f), _scale);

	glm::mat4 rotation_x = glm::rotate(_rotation.x, glm::vec3(1.f, 0.f, 0.f));
	glm::mat4 rotation_y = glm::rotate(_rotation.y, glm::vec3(0.f, 1.f, 0.f));
	glm::mat4 rotation_z = glm::rotate(_rotation.z, glm::vec3(0.f, 0.f, 1.f));
	glm::mat4 rotation = rotation_x * rotation_y * rotation_z;

	glm::mat4 model = translation * rotation * scale;

	const float aspect_ratio = float(1280 / 800);
	const float x_uints = aspect_ratio * 5;
	const float y_units = 5;

	glm::mat4 projection_scale = glm::scale(
		glm::mat4(1.f), glm::vec3(2.f / x_uints, 2.f / y_units, 1));
	glm::mat4 projection_translation = glm::translate(glm::mat4(1.f), glm::vec3(0.f, 0.f, 0.f));
	glm::mat4 projection = projection_translation * projection_scale;

	return projection * model;
}

void Game_Object::setIsVisible(bool isVisible)
{
	_isVisible = isVisible;
}

const bool& Game_Object::getIsVisible() const
{
	return _isVisible;
}

const int& Game_Object::getKey() const
{
	return _key;
}
