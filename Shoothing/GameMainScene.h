#pragma once
#include "SceneBase.h"

class GameMainScene: SceneBase
{
private:
	int player;

	int life;

	int enemy;

	int bullet;

public:

	void HitCheck();     //弾/プレイヤー/敵の当たり判定のチェックを行う

	void SpawnBullet();  //弾の配列に新しくデータを作成する

    SceneBase* Update() override;
	void Draw()const override;
};