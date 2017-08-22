#pragma once
#ifndef PLAYERCHARACTERS_H
#define PLAYERCHARACTERS_H

class Player
{
public:
	Player();
	void DamageTaken(int damage);
	int DamageGiven(int damage);
	int CriticalHit(int maxDamGiv, int minDamGiv);
	void DodgeChance(int damage, int enemySpeed);
	void Death();
	~Player();


	int health;
	int critHitChance;
	int minDamageGiv;
	int maxDamageGiv;
	int speed;
};
#endif PLAYERCHARACTERS_H
