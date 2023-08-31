#include "SphereCollider.h"

bool SphereCollider::HitCollider(SphereCollider* b_col)
{
	int re = false;

	//プレイヤーと敵
	float px1 = b_col->GetLocation().x + 15;
	float py1 = b_col->GetLocation().y + 15;
	float px2 = px1 + b_col->GetErea().Width;
	float py2 = py1 + b_col->GetErea().Height;

	//ステージ
	float sx1 = location.x;
	float sx2 = location.x + erea.Width;
	float sy1 = location.y;
	float sy2 = location.y + erea.Height;

	//当たり判定
	if ((sx1 < px2) && (px1 < sx2) && (sy1 < py2) && (sy2 > py1))
	{
		re = true;
	}

	//ステージ
	stage_x1 = sx1;
	box_x1 = px1;

	stage_x2 = sx2;
	box_x2 = px2;

	stage_y = sy1;
	box_y = py2;

	return re;
}

void SphereCollider::CheckCollision()
{

}

Location SphereCollider::GetLocation()
{
	return location;
}

Erea SphereCollider::GetErea()
{
	return erea;
}

void SphereCollider::SetLocation(Location location)
{
	this->location = location;
}