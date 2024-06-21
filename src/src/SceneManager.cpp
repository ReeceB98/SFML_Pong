#include "SceneManager.h"

void SceneManager::switch_scenes(int scene)
{
	//scene = MENU;
	int current_scene = scene;

	switch (current_scene)
	{
	case MENU:
		std::cout << "Menu\n";
		break;
	case GAMEPLAY:
		std::cout << "Gameplay\n";
		break;
	case ENDSCREEN:
		std::cout << "End Screen\n";
		break;
	default:
		std::cout << "No Scene Selected";
		break;
	}
}
