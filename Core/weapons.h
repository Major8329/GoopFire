#pragma once 

#include <string>

namespace GoopGunSystem
{
	class weapon
	{
	public:
		Weapon();

		void Update(float deltaTime);
		void Fire();
		void Reload();

	private:
		int ammo;
		int magazineSize;
		int reserveAmmo;

		float fireRate;
		float fireTimer;

		bool automatic;
		bool reloading;
	};
}