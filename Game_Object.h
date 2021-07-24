#pragma once
#include <glm/mat4x4.hpp>
#include <glm/vec3.hpp>
#include <glm/gtx/transform.hpp>

class Game_Object
{
public:
	Game_Object(const char* id, const int& key);
	~Game_Object();

	void setIsVisible(bool isVisible);
	const bool& getIsVisible() const;
	const int& getKey() const;

	const char* const& id() const;
	virtual void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene) = 0;
	glm::mat4x4 transformation(const Scene* scene);

protected:
	const char* _id;
	const int _key;
	bool _isVisible = false;

	glm::vec3 _translation = glm::vec3(0.f, 0.f, 0.f);
	glm::vec3 _rotation = glm::vec3(0.f, 0.f, 0.f);
	glm::vec3 _scale = glm::vec3(1.f, 1.f, 1.f);
};

