#pragma once
#include "SceneBase.h"

class GameMainScene
{
private:
	int player;

	int life;

	int enemy;

	int bullet;

public:

	void HitCheck();     //弾/プレイヤー/敵の当たり判定のチェックを行う

	void SpawnBullet();  //弾の配列に新しくデータを作成する

	void Update() override;
	void Draw() override;
};