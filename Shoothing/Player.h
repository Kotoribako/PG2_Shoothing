#pragma once
#include "CharaBase.h"

class Player: public CharaBase
{
private:

	int score;

	int weapon;

public:

	void Update() override;

	void Draw() override;

	void Hit()override;
};