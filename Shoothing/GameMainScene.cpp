#include "DxLib.h"
#include"GameMainScene.h"

GameMainScene::GameMainScene()
{
	PLAYER = new Player();

}

GameMainScene::~GameMainScene()
{
	delete PLAYER;
}

void GameMainScene::HitCheck()
{

}

void GameMainScene::SpawnBullet()
{

}

SceneBase* GameMainScene::Update()
{
	return this;
}

void GameMainScene::Draw()const
{
	PLAYER->Draw();

	DrawFormatString(0, 0, 0xffffff, "ƒQ[ƒ€ƒƒCƒ“‰æ–Ê");
}
