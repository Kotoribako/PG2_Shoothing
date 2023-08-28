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
	
	void HitCheck();     //�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��

	void SpawnBullet();  //�e�̔z��ɐV�����f�[�^���쐬����

    SceneBase* Update() override;
	void Draw()const override;
};