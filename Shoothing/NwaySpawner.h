#pragma once
#include "BulletsSpawner.h"

class NwaySpawner: public BulletsSpawner
{
private:
	int numBullet;
	int caseAngle;
	int angleDiff;

public:
	void Shoot() override;

};