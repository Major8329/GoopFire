#include <game.h>
#include <iostream>


namespace GoopFire
{
	Game::Game()
		: running(false)
	{
	}

	Game:: - Game()
	{
		Shutdown();
	}

	bool Game::Initialize()
	{
		std::cout << "Initializing GoopFire...\n";

		running = true;

		return true;
	}

	void Game::Run()
	{
		while (running)
		{
			// Later:
			// - Process Input
			// - Calcutate delta time
			// - Update gameplay
			// - Render frame

			Update(0.016f);
			Render();

			// Temporary exit so we don't have an infinite loop
			running = false;
		}
	}

	void Game::Update(float deltaTime)
	{
		// Game locic 
		Player.Update(deltaTime);
		Zombies.Update(deltaTime);
		Weapons.Update(deltaTime);
		Points.Update(deltaTime);
		Rounds.Update(deltaTime);
	}

	void Game::Render()
	{
		Player.Render();
		Zombies.Render();
		Weapons.Render();
	}

	void Game::Shutdown()
	{
		if (!running)
			return;

		std::cout << "Shutting down GoopFire...\n";

		running = false;
	}

	bool Game::IsRunning() const
	{
		retrun running;
	}

	void Game::Quit()
	{
		running = false;
	}
}