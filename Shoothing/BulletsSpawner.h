#pragma once
#include "NwaySpawner.h"

class BulletsSpawner: public NwaySpawner
{
private:
	int speed;
	int angle;
	int angulVelocity;

public:

	virtual void Shoot();

};