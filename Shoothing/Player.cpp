#include "DxLib.h"
#include "Player.h"
#include "GameMainScene.h"
#include "PadInput.h"

int Player::PlayerLife;

float Player::P_Move_X;
float Player::P_Move_Y;

Player::Player()
{
    //プレイヤー　操作系
    P_L_Stick = 0;

    P_Right_Btn = 0;
    P_Left_Btn = 0;
    P_A_Btn = 0;

}

Player::~Player()
{

}

void Player::Update()
{
    //左スティック
    P_L_Stick = PAD_INPUT::GetLStickX();

    //デジタル方向右ボタン
    P_Right_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_RIGHT);

    //デジタル方向左ボタン
    P_Left_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_LEFT);

    // Aボタン単押し
    P_A_Btn = PAD_INPUT::OnButton(XINPUT_BUTTON_A);

    // Bボタン長押し
    P_B_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_B);
}

void Player::Player_Init()
{
    P_XSpeed = 0;
    P_YSpeed = 0;
    location.x = 20.0f;
    location.y = 353.2f;
}

void Player::Player_Move()
{
    P_YSpeed = 0.0f;

    //右移動
    if (P_L_Stick > RIGHT_MOVE || P_Right_Btn == 1) {
        P_MoveR_Flg = TRUE;

        //加速度
        P_XSpeed = 1.0f;

        location.x = location.x + P_XSpeed;
    }
    else {
        P_MoveR_Flg = FALSE;

    }

    //左移動
    if (P_L_Stick < LEFT_MOVE || P_Left_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //加速度
        P_XSpeed = -1.0f;

        location.x = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }
}

void Player::Draw() const
{
	//DrawString(200, 200, "プレイヤー", GetColor(255, 0, 0), TRUE);

	DrawCircle(600, 650, 20, 0xffffff, TRUE);
}

void Player::Hit()
{

}