#pragma once
#include "CharaBase.h"

//スティックの傾き具合からプレイヤーの状態を取得
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000

class Player: public CharaBase
{
private:

	int		P_L_Stick;			//左スティック
	int		P_Right_Btn;		//デジタル方向ボタン右
	int		P_Left_Btn;			//デジタル方向ボタン左
	int		P_A_Btn;			//Aボタン 単押し
	int		P_B_Btn;			//Bボタン 長押し

	float	P_XSpeed;			//プレイヤーの地上スピード X座標
	float	P_YSpeed;			//プレイヤーの地上スピード Y座標

	int		P_MoveR_Flg;		//プレイヤー右移動フラグ 移動無し:0 右移動:1
	int		P_MoveL_Flg;		//プレイヤー左移動フラグ 移動無し:0 左移動:1

	int player;

	int life;

	int score;

	int weapon;

public:

	static float	P_Move_X;		//Player  X座標用変数
	static float	P_Move_Y;		//Player  Y座標用変数

	static	int		PlayerLife;		//Playerの残機用

	

	Player();

	~Player();

	void Update();

	void Draw() const;

	void Hit()override;

	void Player_Move();				//Player地上移動関数
	//void Player_Gravity();			//Player重力関数
	void Player_Init();				//Player初期処理
};