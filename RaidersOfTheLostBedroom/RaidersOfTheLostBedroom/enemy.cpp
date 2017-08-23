#include <iostream>
#include <time.h>
#include "enemy.h"


void DamageTaken(int damage)
{
	// Takes the damage away from the health
	health -= damage;

	// Checks to see if health is less than or equal to 0
	if (health <= 0)
		// If it is the enemy dies
		Death();
}

int DamageGiven(int damage)
{
	// checks to see if damage is less than the mindamagegiven
	if (damage < minDamageGiv)
	{
		// If it is then the enemy missed
		damage = 0;
		printf("Enemy missed!\n");
	}
	// Checks to see if the damage is more than the maxDamageGiven
	else if (damage > maxDamageGiv)
	{
		// If it is Critical Hit is calculated
		int critHit = CriticalHit(maxDamageGiv, minDamageGiv);

		// If critHit is greater than 0
		if (critHit > 0)
		{
			// Max damage plus the critical hit amount is given
			damage += (maxDamageGiv + critHit);
			printf("Enemy Scored A Critical Hit!\n");
		}
		else
		{
			// Otherwise, only the max damage is given
			damage = maxDamageGiv;
			printf("Hit!");
		}
	}
	else
		// Prints 'Enemy Hit' to the console.
		printf("Enemy Hit!\n");

	// Returns the damage amount
	return damage;
}

int CriticalHit(int maxDamGiv, int minDamGiv)
{
	// seed the random number w/ time(nullptr) so that it's a truly random number every time
	srand(time(nullptr));
	// create the random number between 1 and 2
	critHitChance = rand() % 2 + 1;
	// the critical hit is a percentage of max and min damage given
	int critHit = (maxDamGiv + minDamGiv) / critHitChance;
	
	// if the critHit number is greater than or equal to half half of the damage range...
	if (critHit >= (maxDamGiv + minDamGiv) / 2)
	{
		// return critHit
		return critHit;
	}
	else
		// if it isn't, return 0;
		return 0;
}

void DodgeChance(int damage, int playerSpeed)
{
	// Seeds the random function with time(nullptr) to get a random number everytime
	srand(time(nullptr));
	// Create the random number between 1 and 10 inclusive
	int chance = rand() % 10 + 1;

	// if the player's speed is less than the dodge chance...
	if (playerSpeed < chance)
	{
		// ... then the enemy dodged the attack
		printf("Enemy Dodged Your Attack!\n");
	}
	else if (playerSpeed > chance)
	{
		//... if the players speed is grater than the chance the enemy takes damage
		DamageTaken(damage);
	}
	else
	{
		// ... if the players speed and chance are the same both take damage
		printf("No one dodged and you collided!\n");
		DamageTaken(damage);
		// player.DamageTaken(damage);
	}
}

void Death()
{
	// The Enemy is 'killed'
	printf("The enemy has died!\n");
}
