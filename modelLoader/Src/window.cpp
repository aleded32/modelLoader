#include "window.h"

window::window()
{
	glWindow = glfwCreateWindow(wd.width, wd.height, wd.title, nullptr, nullptr);

	if (!glWindow)
	{
		std::cout << "glfw window is null";
		exit(1);
	}

	winInit = !glfwWindowShouldClose(glWindow);
}

window::~window()
{
	delete glWindow;
}
