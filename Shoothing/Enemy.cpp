#include "DxLib.h"
#include "Enemy.h"
#include "GameMainScene.h"

void Enemy::Update()
{

}

void Enemy::Hit()
{

}

void Enemy::Draw()const
{
	//DrawString(200, 200, "エネミー", GetColor(255, 0, 0), TRUE);

	DrawCircle(600, 100, 50, GetColor(255, 0, 0), TRUE);
}