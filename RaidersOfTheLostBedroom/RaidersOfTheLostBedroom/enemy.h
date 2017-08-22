#pragma once
#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:
	Enemy();
	void DamageTaken(int damage);
	int DamageGiven(int damage);
	int CriticalHit(int maxDamGiv, int minDamGiv);
	void DodgeChance(int damage, int playerSpeed);
	void Death();
	~Enemy();

	
	int health;
	int critHitChance;
	int minDamageGiv;
	int maxDamageGiv;
	int speed;
};
#endif ENEMY_H
