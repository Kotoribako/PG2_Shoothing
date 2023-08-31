#include "DxLib.h"
#include "FPS.h"
#include "GameMainScene.h"
#include "PadInput.h"
#include "Title.h"
#include "SceneManager.h"

#define FRAMERATE 60.0 //�t���[�����[�g

#define HEIGHT 1280
#define WIDTH 720
#define REFRESHRATE 32

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//�^�C�g����
	SetMainWindowText("SHOOTING GAME");

	//�E�C���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//��ʃT�C�Y�w��
	if (SetGraphMode(HEIGHT, WIDTH, REFRESHRATE) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// DX���C�u��������������
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager sceneMng(dynamic_cast<SceneBase*>(new GameMainScene()));;
	Fps fps;

	while ((ProcessMessage() == 0) && (sceneMng.Update() != nullptr))
	{

		ClearDrawScreen();		// ��ʂ̏�����
		//PAD_INPUT::UpdateKey();

		sceneMng.Draw();

		//�����I��
		/*if (PAD_INPUT::OnButton(XINPUT_BUTTON_BACK))
		{
			break;
		}*/

		// ESC�ł��I��
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}

		//fps
		fps.Update();	//�X�V

		fps.Draw();
		ScreenFlip();	// ����ʂ̓��e��\��ʂɔ��f

		fps.Wait();		//�ҋ@
	}

	// DX���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}