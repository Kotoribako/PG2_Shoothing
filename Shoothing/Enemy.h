#pragma once
#include "CharaBase.h"

class Enemy : public CharaBase
{
private:

	int hp;
	int point;
	int weapon;

public:

	void Update()override;
	void Draw()override;
	void Hit()override;
};