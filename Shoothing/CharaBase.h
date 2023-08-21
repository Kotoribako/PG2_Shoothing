#pragma once
#include "SphereCollider.h"

class CharaBase: public SphereCollider
{
private:

	int speed;
	int image;

public:
	CharaBase();
	~CharaBase();

	virtual void Update();
	virtual void Draw();
	virtual void Hit();

};

