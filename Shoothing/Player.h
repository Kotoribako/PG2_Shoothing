#pragma once
#include "CharaBase.h"

//�X�e�B�b�N�̌X�������v���C���[�̏�Ԃ��擾
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000

class Player: public CharaBase
{
private:

	int		P_L_Stick;			//���X�e�B�b�N
	int		P_Right_Btn;		//�f�W�^�������{�^���E
	int		P_Left_Btn;			//�f�W�^�������{�^����
	int		P_A_Btn;			//A�{�^�� �P����
	int		P_B_Btn;			//B�{�^�� ������

	float	P_XSpeed;			//�v���C���[�̒n��X�s�[�h X���W
	float	P_YSpeed;			//�v���C���[�̒n��X�s�[�h Y���W

	int		P_MoveR_Flg;		//�v���C���[�E�ړ��t���O �ړ�����:0 �E�ړ�:1
	int		P_MoveL_Flg;		//�v���C���[���ړ��t���O �ړ�����:0 ���ړ�:1

	int player;

	int life;

	int score;

	int weapon;

public:

	static float	P_Move_X;		//Player  X���W�p�ϐ�
	static float	P_Move_Y;		//Player  Y���W�p�ϐ�

	static	int		PlayerLife;		//Player�̎c�@�p

	

	Player();

	~Player();

	void Update();

	void Draw() const;

	void Hit()override;

	void Player_Move();				//Player�n��ړ��֐�
	//void Player_Gravity();			//Player�d�͊֐�
	void Player_Init();				//Player��������
};