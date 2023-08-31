#pragma once

struct Location
{
	float x;
	float y;
};

struct Erea
{
	float Height;
	float Width;
};

class  SphereCollider
{
protected:
	Location location;
	Erea erea;

public:

	int radius;

	float stage_y;
	float box_y;

	float stage_x1;
	float stage_x2;

	float box_x1;
	float box_x2;

	//Box‚É“–‚½‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©”»’è‚·‚é
	bool HitCollider(SphereCollider* b_col);

	Location GetLocation();
	Erea GetErea();

	void SetLocation(Location location);

	void CheckCollision();

};