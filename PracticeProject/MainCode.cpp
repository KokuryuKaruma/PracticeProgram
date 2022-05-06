#include "DxLib.h"
#include "MainCode.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	int ScreenSizeWidth = ScreenSizeX;
	int ScreenSizeHeight = ScreenSizeY;

	ChangeWindowMode(TRUE); //ウィンドウモードで実行
	SetGraphMode(ScreenSizeWidth, ScreenSizeHeight, 32); //解像度を1280*720に設定
	SetWindowText("作ってみたよ");

	if (DxLib_Init() == -1) {
		return -1; //エラー処理
	}

	DrawPixel(320, 240, GetColor(255, 255, 255));

	WaitKey();

	DxLib_End(); //動作終了処理

	return 0;

}