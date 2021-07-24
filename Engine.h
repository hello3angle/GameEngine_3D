#pragma once
class Engine
{
public:
	Engine(const char* game_name);
	~Engine();

	void simulate(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene);

	struct GLFWwindow* window() const;

private:
	void render(const double& seconds_to_simulate, const class Assets* assets, const class Scene* scene);

	struct GLFWwindow* _window;
};

