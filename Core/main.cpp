#include "game.h"

int main()
{
	GoopFire::Game game;

	if (!game.Initialize())
		return 1;

	game.Run();

	return 0;
}