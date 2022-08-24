#pragma once
#include "global.h"

class window 
{
private:

	struct windowData 
	{
		const unsigned int width = 1280;
		const unsigned int height = 720;
		const char* title = "Model Loader";
	};

	
	windowData wd;

public:

	window();
	~window();

	inline const unsigned int getwidth() inline const { return wd.width; }
	inline const unsigned int getHeight() inline const { return wd.height; }
	inline const char* getTitle() inline const { return wd.title; }

	bool winInit = false;
	GLFWwindow* glWindow;
};