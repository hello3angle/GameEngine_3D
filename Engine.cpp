#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "Engine.h"
#include "Game_Object.h"
#include "Scene.h"
#include "Assets.h"

Engine::Engine(const char* game_name)
{
    // GLFW
    if (glfwInit() == GLFW_FALSE)
        std::cout << "Failed to initialize GLFW" << std::endl;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    _window = glfwCreateWindow(1280, 800, game_name, nullptr, nullptr);
    if (_window == nullptr)
        std::cout << "Failed to create GLFW window" << std::endl;

    glfwMakeContextCurrent(_window);

    // GLEW
    glewExperimental = GL_TRUE;
    const GLenum init_result = glewInit();
    if (init_result != GLEW_OK)
        std::cout << (char*)glewGetErrorString(init_result) << std::endl;

    // GL
    const auto gl_debug_message_callback = [](
        GLenum,
        GLenum type,
        GLuint,
        GLenum severity,
        GLsizei,
        const GLchar* message,
        const void*)
    {
        if (severity > GL_DEBUG_SEVERITY_NOTIFICATION)
        {
            fprintf(stderr, "GL CALLBACK: %s type = 0x%x, severity = 0x%x, message = %s\n",
                (type == GL_DEBUG_TYPE_ERROR ? "** GL ERROR **" : ""),
                type, severity, message);
        }
    };

    glEnable(GL_DEBUG_OUTPUT);
    glDebugMessageCallback(gl_debug_message_callback, 0);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDepthFunc(GL_LESS);

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glFrontFace(GL_CCW);

}

Engine::~Engine()
{
    glfwDestroyWindow(_window);
}

void Engine::simulate(const double& seconds_to_simulate, const Assets* assets, const Scene* scene)
{
    render(seconds_to_simulate, assets, scene);
}

GLFWwindow* Engine::window() const
{
    return _window;
}

void Engine::render(const double& seconds_to_simulate, const Assets* assets, const Scene* scene)
{
    glfwSwapBuffers(_window);
    glClearColor(0.5f, 0.5f, 0.5f, 1.f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    for (auto game_object : scene->get_game_objects())
    {
        game_object->render(seconds_to_simulate, assets, scene);
    }

    glBindVertexArray(0);
    glUseProgram(0);
}
