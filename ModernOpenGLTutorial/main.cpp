

#include <iostream>
#include "Display.h"
#include "GL/glew.h"

int main()
{
	Display display(800,600,"ModernOpenGL");

	while(!display.isClosed())
	{
		display.Clear(0.0f,0.15f,0.3f,1.0f);

		display.Update();
	}
	return 0;
}
