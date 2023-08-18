#pragma once

class NwaySpawner
{
private:
	int numBullet;
	int caseAngle;
	int angleDiff;

public:
	virtual void Shoot()override;

};