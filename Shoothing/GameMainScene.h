#pragma once
#include "SceneBase.h"
#include "Player.h"

class GameMainScene:public SceneBase
{
private:
	int PauseFlg;

	int player;

	int life;

	int enemy;

	int bullet;

public:

	GameMainScene();
	~GameMainScene();

	Player* PLAYER;
	
	void HitCheck();     //弾/プレイヤー/敵の当たり判定のチェックを行う

	void SpawnBullet();  //弾の配列に新しくデータを作成する

    SceneBase* Update() override;
	void Draw()const override;
};