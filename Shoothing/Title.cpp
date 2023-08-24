#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"
#include "GameMainScene.h"

Title::Title()
{

}

Title::~Title()
{

}

void Title::Update()
{
	/*if (CheckHitKey(KEY_INPUT_0) || PAD_INPUT::OnButton(XINPUT_BUTTON_START) == 1) 
	{
		return  GameMainScene();
	}*/
}

void Title::Draw()
{
	DrawFormatString(100, 100, 0xffffff, "ƒ^ƒCƒgƒ‹‰æ–Ê");
}
