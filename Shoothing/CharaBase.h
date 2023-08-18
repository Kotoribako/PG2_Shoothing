#pragma once

class CharaBase
{
private:

	int speed;
	int image;

public:
	CharaBase();
	~CharaBase();

	void Update();
	void Draw();
	void Hit();

};

