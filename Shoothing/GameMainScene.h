#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "Enemy.h"

class GameMainScene:public SceneBase
{
private:
	int PauseFlg;

	int bullet;

public:

	GameMainScene();
	~GameMainScene();

	Player* player;
	Enemy* enemy;
	
	void HitCheck();     //�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��

	void SpawnBullet();  //�e�̔z��ɐV�����f�[�^���쐬����

    SceneBase* Update() override;
	void Draw()const override;
};