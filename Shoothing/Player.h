#pragma once
class Player
{
private:

	int score;

	int weapon;

public:

	void Update() override;

	void Draw() override;

	void Hit()override;

};