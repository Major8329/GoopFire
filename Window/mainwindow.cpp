#include "window.h"
#include <GLFW/glfw3.h>

namespace Goopfire
{
    Window::Window()
        : window(nullptr)
    {
    }

    Window::~Window()
    {
        if (window)
        {
            glfwDestroyWindow(window);
            glfwTerminate();
        }
    }

    bool Window::Create(int width, int height, const char* title)
    {
        if (!glfwInit())
        {
            return false;
        }

        window = glfwCreateWindow(
            width,
            height,
            title,
            nullptr,
            nullptr
        );

        if (!window)
        {
            glfwTerminate();
            return false;
        }

        glfwMakeContextCurrent(window);

        return true;
    }

    void Window::Update()
    {
        glfwPollEvents();
    }

    bool Window::IsOpen() const
    {
        return window != nullptr &&
            !glfwWindowShouldClose(window);
    }
}