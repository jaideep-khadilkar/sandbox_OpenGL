/*
 * Display.h
 *
 *  Created on: 08-Jan-2017
 *      Author: user
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <string>
#include <SDL2/SDL.h>

class Display {
public:
	Display(int width, int height, const std::string& title);
	void Clear(float r,float g,float b,float a);
	void Update();
	bool isClosed();
	virtual ~Display();
private:
	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};

#endif /* DISPLAY_H_ */
