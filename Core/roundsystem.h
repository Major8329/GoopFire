#pragma once
#include <string>

namespace GoopRoundSystem
{
	class Round
	{
	public:
		Round();

		void GetCurrentRound();
		void StartNextRound();
		void EndRound();
		void PauseRound();
		void ResumeRound();

	private:
		int CurrentRoundCount; // Current amount of zombies or enemy's in the round used for mulitplier
		int RoundTime; // Time for current round in seconds
		int RoundMultiplier; // Multiplies the amount of zombies or enemy's in the round

		bool RoundActive; // for the pause and resume functions
		bool RoundPaused; // for  the pause and resume functions
	};
}