#include <iostream>
#include <roundsystem.h>

namespace GoopRoundSystem
{
	Round::Round()
		: CurrentRoundCount(0)
		, RoundTime(60)
		, RoundMultiplier(0)
		, RoundActive(false)
		, RoundPaused(false)
	{
	}

	void Round::GetCurrentRound()
	{
		std::cout << "Round info -- Multiplier: " << RoundMultiplier
				  << " | Enemies: " << CurrentRoundCount
				  << " | Time(s): " << RoundTime
				  << " | Active: " << (RoundActive ? "yes" : "no")
				  << " | Paused: " << (RoundPaused ? "yes" : "no")
				  << std::endl;
	}

	void Round::StartNextRound()
	{
		const int baseEnemies = 5;
		const int baseTimeSeconds = 60;
		const int timeIncreasePerRound = 15;

		// advance round
		++RoundMultiplier;

		// compute round values
		CurrentRoundCount = baseEnemies * RoundMultiplier;
		RoundTime = baseTimeSeconds + (RoundMultiplier - 1) * timeIncreasePerRound;

		RoundActive = true;
		RoundPaused = false;

		std::cout << "Starting round " << RoundMultiplier
				  << ": " << CurrentRoundCount << " enemies, "
				  << RoundTime << "s duration." << std::endl;
	}

	void Round::EndRound()
	{
		if (!RoundActive)
		{
			std::cout << "No active round to end." << std::endl;
			return;
		}

		RoundActive = false;
		RoundPaused = false;
		CurrentRoundCount = 0;

		std::cout << "Round " << RoundMultiplier << " ended." << std::endl;
	}

	void Round::PauseRound()
	{
		if (!RoundActive)
		{
			std::cout << "Cannot pause: no active round." << std::endl;
			return;
		}

		if (RoundPaused)
		{
			std::cout << "Round already paused." << std::endl;
			return;
		}

		RoundPaused = true;
		std::cout << "Round paused." << std::endl;
	}

	void Round::ResumeRound()
	{
		if (!RoundActive)
		{
			std::cout << "Cannot resume: no active round." << std::endl;
			return;
		}

		if (!RoundPaused)
		{
			std::cout << "Round is not paused." << std::endl;
			return;
		}

		RoundPaused = false;
		std::cout << "Round resumed." << std::endl;
	}
}