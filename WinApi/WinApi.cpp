﻿/*
* Slavnem Tarafından Yapılmış Olup Kar Amacı Gütmez!
* Açık Kaynak Kod
* Tecrübe Seviyesi = Acemi
* 2021
*/

#include "winapi.h"
#include "winapi_2.h"
#include "resource.h"

const TCHAR className[] = "WinClass";

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc;

	HBRUSH hBrush = CreateSolidBrush(RGB(36, 39, 44));
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.hbrBackground = hBrush;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.lpfnWndProc = WndProc;
	wc.lpszClassName = className;
	wc.lpszMenuName = NULL;
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON_CPP));
	wc.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON_CPP));
	wc.style = 0;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;

	if (!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Kayıt İşlemi Başarısız!", "Kayıt", MB_ICONERROR | MB_OK);
		return 1;
	}
	int screenX = GetSystemMetrics(SM_CXSCREEN);
	int screenY = GetSystemMetrics(SM_CYSCREEN);
	int winW = 800;
	int winH = 600;

	HWND hWnd = CreateWindowEx(NULL, className, "WinApi", WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX, (screenX - 800) / 2, (screenY - 600) / 2, winW, winH, NULL, NULL, hInstance, NULL);

	if (!hWnd) {
		MessageBox(NULL, "Pencere Oluşturulamadı!", "Pencere", MB_ICONERROR | MB_OK);
		return 0;
	}

	ShowWindow(hWnd, SW_SHOWNORMAL); // SW_MINIMZE, SW_MAXIMIZE
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0) != 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}