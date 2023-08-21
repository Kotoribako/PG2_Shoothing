#pragma once
#include"DxLib.h"

#define BUTTONS 16

//スティック
struct Stick
{
	short x;	//横軸値
	short y;	//縦軸値
};

class PAD_INPUT
{
private:

	static char now_key[BUTTONS]; //今回の入力キー
	static char old_key[BUTTONS]; //前回の入力キー
	static XINPUT_STATE input; //パッド
	static Stick r_stick; //右スティック
	static Stick l_stick; //左スティック
private:

	//コンストラクタ
	PAD_INPUT() = default;
public:

	//パッド情報の更新
	static void UpdateKey()
	{
		// 入力キー取得
		GetJoypadXInputState(DX_INPUT_KEY_PAD1, &input);

		//GetJoypadAnalogInput(*XBuf, *YBuf, DX_INPUT_KEY_PAD1);

		for (int i = 0; i < BUTTONS; i++)
		{
			old_key[i] = now_key[i];
			now_key[i] = input.Buttons[i];
		}

		//右スティック
		r_stick.x = input.ThumbRX;
		r_stick.y = input.ThumbRY;

		//左スティック
		l_stick.x = input.ThumbLX;
		l_stick.y = input.ThumbLY;
	}

	//ボタンを押された瞬間
	static bool OnButton(int button)
	{
		bool ret = (now_key[button] == 1 && old_key[button] == 0);
		return ret;
	}

	//ボタンを押してる間
	static bool OnPressed(int button)
	{
		bool ret = (now_key[button] == 1);
		return ret;
	}

	//ボタンを離した瞬間
	static bool OnRelease(int button)
	{
		bool ret = (now_key[button] == 0 && old_key[button] == 1);
		return ret;
	}

	//右スティックの取得 X座標とY座標を同時に取得している
	static Stick GetRStick()
	{
		return r_stick;
	}

	//左スティックの取得 X座標とY座標を同時に取得している
	static Stick GetLStick()
	{
		return l_stick;
	}

	//(仮)スティックが倒されているかの判定を取る
	static short int GetStickOn()
	{
		int ret = 0;
		if (l_stick.x == 128 || l_stick.x > 128 && l_stick.x < 2000 || l_stick.x < 128 && l_stick.x > -2000) {
			ret = FALSE;
		}
		else if (l_stick.x > 2000 && l_stick.x > 128) {
			ret = TRUE;
		}
		else if (-2000 > l_stick.x && l_stick.x < 128) {
			ret = TRUE;
		}

		return ret;
	}

	//左スティックの取得 横軸値
	static short int GetLStickX()
	{
		return l_stick.x;
	}

	//左スティックの取得 縦軸値
	static short int GetLStickY()
	{
		return l_stick.y;
	}

	static char GetOldKey(const int i)
	{
		return old_key[i];
	}

	static char GetNowKey(const int i)
	{
		return now_key[i];
	}
};

