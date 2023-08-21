#pragma once
#include "SphereCollider.h"

class Bullet : public SphereCollider
{
private:

	int damage;
	int speed;
	int angle;
	int angulVelocity;

public:
	void Update();
	void Draw();
	void GetDamage();

};