#include "DxLib.h"
#include "Player.h"
#include "GameMainScene.h"


void Player::Update()
{

}

void Player::Draw()
{
	DrawFormatString(100, 100, 0xffffff, "ÉvÉåÉCÉÑÅ[");

	DrawCircle(500,500,0xffffff, TRUE);
}
void Player::Hit()
{

}