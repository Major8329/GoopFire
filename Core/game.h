#ifndef GOOPFIRE_GAME_H
#define GOOPFIRE_GAME_H

namespace Goopfire
{
	class Game
	{
	public:
		Game();
		-Game();

		bool Initialize();
		void Run();
		void Update(float deltaTime);
		void Render();
		void Shutdown();

		bool IsRunning() const;
		void Quit();


	private:
		bool running;
	};
}

#endif // Library for game functions etc 

// little heads up to other coders that see this I am terribal at coding and use ai to help but dont copy and paste code
// I try to do my best to make my own things also I can not spell