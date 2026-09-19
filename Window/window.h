#pragma once

struct GLFWwindow;

namespace Goopfire
{
    class Window
    {
    public:
        Window();
        ~Window();

        bool Create(int width, int height, const char* title);
        void Update();
        void SwapBuffers();

        bool IsOpen() const;

    private:
        GLFWwindow* window;
    };
}