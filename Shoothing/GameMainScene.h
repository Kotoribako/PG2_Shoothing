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

	void HitCheck();     //�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��

	void SpawnBullet();  //�e�̔z��ɐV�����f�[�^���쐬����

	void Update() override;
	void Draw() override;
};