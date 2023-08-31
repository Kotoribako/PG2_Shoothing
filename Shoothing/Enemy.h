#pragma once
#include "CharaBase.h"

class Enemy : public CharaBase
{
private:

	int enemy;
	int hp;
	int point;
	int weapon;

public:

	void Update();

	void Draw() const;

	void Hit()override;

};