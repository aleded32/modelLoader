#pragma once
#include "global.h"

class app
{
private:

	window* win;
	void onRender();

public:

	app();
	~app();

	void onUpdate();
	
};

