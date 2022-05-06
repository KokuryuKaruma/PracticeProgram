#include "DxLib.h"
#include "MainCode.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	int ScreenSizeWidth = ScreenSizeX;
	int ScreenSizeHeight = ScreenSizeY;

	ChangeWindowMode(TRUE); //�E�B���h�E���[�h�Ŏ��s
	SetGraphMode(ScreenSizeWidth, ScreenSizeHeight, 32); //�𑜓x��1280*720�ɐݒ�
	SetWindowText("����Ă݂���");

	if (DxLib_Init() == -1) {
		return -1; //�G���[����
	}

	DrawPixel(320, 240, GetColor(255, 255, 255));

	WaitKey();

	DxLib_End(); //����I������

	return 0;

}