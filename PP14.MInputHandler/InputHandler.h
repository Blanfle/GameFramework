#pragma once
#include "SDL.h"
#include "Vector2D.h"
#include <vector>


class InputHandler
{

public:
	static InputHandler* Instance()
	{
		if (s_pInstance == 0) {
			s_pInstance = new InputHandler();
		}
		return s_pInstance;
	}
	bool getMouseButtonState(int buttonNumber);
	Vector2D* getMousePosition();
	void update();
	void clean();  // 디바이스 관련 초기화된 부분을 clear 
	
	enum mouse_buttons
	{
		LEFT = 0,
		MIDDLE = 1,
		RIGHT = 2
	};

	// mouse buttion events								
	std::vector<bool> m_mouseButtonStates;

	// mouse motion event					
	Vector2D* m_mousePosition;

private:
	InputHandler();
	~InputHandler() {}
	static InputHandler* s_pInstance;
	
};
typedef InputHandler TheInputHandler;