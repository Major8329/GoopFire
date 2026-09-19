#include "window.h"

int main()
{
    Goopfire::Window window;

    if (!window.Create(800, 600, "Goopfire"))
    {
        return 1;
    }

    while (window.IsOpen())
    {
        window.Update();
    }

    return 0;
}