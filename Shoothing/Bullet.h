#pragma once

class Bullet
{
private:

	int damage;
	int speed;
	int angle;
	int angulVelocity;

public:
	void Update()override;
	void Draw() override;
	void GetDamage()override;

};