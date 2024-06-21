#pragma once
#include <iostream>

class SceneManager
{
public:
	void switch_scenes(int current_scene);
private:
	enum game_scenes { MENU, GAMEPLAY, ENDSCREEN };
};

