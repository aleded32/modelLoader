#include "app.h"

app::app()
{
	if (!glewInit()) 
	{
		std::cout << glewGetErrorString(glewInit());
		exit(1);
	}

	if (!glfwInit()) 
	{
		std::cout << "failed to init glfw";
		exit(1);

	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	win = new window;


}

app::~app()
{
	delete win;
}

void app::onUpdate()
{
	while (win->winInit) 
	{
		onRender();

		glfwSwapBuffers(win->glWindow);
		glfwPollEvents();
	}
}

void app::onRender()
{
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}
