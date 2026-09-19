#include "weapons.h"

namespace GoopGunSystem
{
	Weapon::Pistol() // Pistol State Configuration
	{
		ammo = 12;
		magazineSize = 45;
		reserveAmmo = 60;

		fireRate = 0.5;
		fireTimer = 0.0f;

		automatic = false;
		reloading = false;
	}

	Weapon::AssultRife() // Rifle Stat Configuration
	{
		ammo = 30;
		magazineSize = 60;
		reserveAmmo = 130;

		fireRate = 0.5;
		fireTimer = 0.0f;

		automatic = true;
		reloading = false;
	}

	Weapon::Shotgun() // Shotgun Stat Configuration
	{
		ammo = 10;
		magazineSize = 25;
		reserveAmmo = 60;

		fireRate = 0.2;
		fireTimer = 0.0f;

		automatic = false;
		reloading = false;
	}

	Weapon::SniperRifle() // Sniper Rifle Stat Configuration
	{
		ammo = 15;
		magazineSize = 30;
		reserveAmmo = 40;

		fireRate = 0.1;
		fireTimer = 0.0f;

		automatic = false;
		reloading = false;
	}

	Weapon::Smg() // Smg Stat Configuration
	{
		ammo = 30;
		magazineSize = 70;
		reserveAmmo = 145;

		fireRate = 0.7;
		fireTimer = 0.0f;

		automatic = true;
		reloading = false;
	}

	Weapon::MarksmanRifle() // Marksman Rifle Stat Configuration
	{
		ammo = 20;
		magazineSize = 35;
		reserveAmmo = 60;

		fireRate = 0.3;
		fireTimer = 0.0f;

		automatic = false;
		reloading = false;
	}

	Weapom::MachineGun() // Machine Gun Stat Configuration
	{
		ammo = 100;
		magazineSize = 200;
		reserveAmmo = 500;

		fireRate = 0.1;
		fireTimer = 0.0f;

		automatic = true;
		reloading = false;
	}

	Weapon::Rifle() // Rifle Stat Configuration
	{
		ammo = 25;
		magazineSize = 50;
		reserveAmmo = 100;

		fireRate = 0.4;
		fireTimer = 0.0f;

		automatic = false;
		reloading = false;
	}
}
