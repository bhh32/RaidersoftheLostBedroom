#pragma once
#ifndef ENEMY_H
#define ENEMY_H

struct Enemy
{
public:
	// Variables
	int health;
	int critHitChance;
	int minDamageGiv;
	int maxDamageGiv;
	int speed;
};

// Functions
void DamageTaken(int damage);
int DamageGiven(int damage);
int CriticalHit(int maxDamGiv, int minDamGiv);
void DodgeChance(int damage, int playerSpeed);
void Death();
#endif ENEMY_H
