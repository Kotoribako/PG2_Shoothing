#include "DxLib.h"
#include"GameMainScene.h"
#include "Title.h"
#include "Player.h"

GameMainScene::GameMainScene()
{
	player = new Player();
	enemy = new Enemy();

}

GameMainScene::~GameMainScene()
{
	delete player;
	delete enemy;
}

void GameMainScene::HitCheck()
{

}

void GameMainScene::SpawnBullet()
{

}

SceneBase* GameMainScene::Update()
{
	/*if (CheckHitKey(KEY_INPUT_0)) 
	{
		return new Title();
	}*/

	return this;
}

void GameMainScene::Draw()const
{
	player-> Draw();
	enemy-> Draw();

	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“‰æ–Ê");
}
