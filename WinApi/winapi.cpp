/*
* Slavnem Tarafýndan Yapýlmýþ Olup Kar Amacý Gütmez!
* Açýk Kaynak Kod
* 2021
*/

#include "winapi_includes.h"
#include "winapi_main.h"
#include "resource.h"

const TCHAR className[] = _T("WinClass");

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
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON_WINAPI));
	wc.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON_WINAPI));
	wc.style = 0;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;

	if (!RegisterClassEx(&wc)) {
		MessageBox(NULL, _T("Kayýt Ýþlemi Baþarýsýz!"), _T("Kayýt"), MB_ICONERROR | MB_OK);
		return 1;
	}
	int screenX = GetSystemMetrics(SM_CXSCREEN);
	int screenY = GetSystemMetrics(SM_CYSCREEN);
	int winW = 800;
	int winH = 650;

	HWND hWnd = CreateWindowEx(NULL, className, _T("WinApi"), WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX, (screenX - winW) / 2, (screenY - winH) / 2, winW, winH, NULL, NULL, hInstance, NULL);

	if (!hWnd) {
		MessageBox(NULL, _T("Pencere Oluþturulamadý!"), _T("Pencere"), MB_ICONERROR | MB_OK);
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