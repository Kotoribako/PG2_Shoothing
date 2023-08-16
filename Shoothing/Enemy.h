#pragma once

class Enemy
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