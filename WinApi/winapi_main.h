/*
* Slavnem Tarafından Yapılmış Olup Kar Amacı Gütmez!
* Açık Kaynak Kod
* Tecrübe Seviyesi = Acemi
* 2021
*/

#ifndef winapi_main_h
#define winapi_main_h

#include "winapi_includes.h"
#include "winapi_language.h"
#include "resource.h"

const TCHAR BTN[] = _T("BUTTON");
const TCHAR STT[] = _T("STATIC");
const TCHAR EDT[] = _T("EDIT");
const TCHAR COMBOX[] = _T("COMBOBOX");

HWND hEkranButton, hEkranStatic, hEkranZmnSure1;
HWND hComboBox1, hComboBox2, hComboBox3, hComboBox4, hComboBox5, hBilgisayarBtn_1;
HWND hEkranBilgisayarTextBox1, hEkranZmnTextBox1, hEkranZmnTextBox2, hEkranZmnTextBox3;
HWND hWnd = FindWindow(NULL, _T("WinApi"));

const TCHAR* ComboBox_1[] = { _T(""), _T("Paylaşılan Klasör"), _T("Execution Oluşturma"), _T("Senkronizasyon"), _T("Büyüteç")};
const TCHAR* ComboBox_2[] = { _T(""), _T("Kontrol Paneli"), _T("İnternet Özellikleri"), _T("Oyun Kontrolleri"), _T("Fare Özellikleri")
, _T("Ses Ayarları"), _T("Program Kaldır"), _T("Güç Özellikleri"), _T("Bölge ve Dil"), _T("Kayıt Defteri"), _T("Hizmetler"), _T("Yerel Grup Ekranı")
, _T("Sertifikalar"), _T("Ipv4 & Ipv6 Adresi")};
const TCHAR* ComboBox_3[] = { _T(""), _T("Disk Yönetimi"), _T("Aygıt Yönetimi"), _T("Olay Görüntüleyici"), _T("DirectX"), _T("Performans İzleyici")
, _T("Erişim Defteri"), _T("Görev Yöneticisi"), _T("Bilgisayar Yönetimi"), _T("Disk Temizleyici"), _T("Karakter Ayarı")};
const TCHAR* ComboBox_4[] = { _T(""), _T("Zamanlı Kapat"), _T("Oturumu Kapat"), _T("Yeniden Başlat"), _T("Uyku Modu"), _T("Bilgisayarı Kitle"), _T("İptal")};
const TCHAR* ComboBox_5[] = { _T(""), _T("Bilgisayar Bilgisi"), _T("Hizmetler"), _T("Not Defteri"), _T("Kayıt Defteri"), _T("Hesap Makinesi"), _T("Microsoft Paint")};

// Genel Static
#define IDC_STT 20

// APPWM Notify Icon
// #define APPWM_ICONNOTIFY (WM_APP + 1)

// Bilgisayar Btn
#define IDC_BTN_BILGISAYAR_1 10
#define IDC_BTN_BILGISAYAR_2 11
#define IDC_BTN_BILGISAYAR_3 12
#define IDC_BTN_BILGISAYAR_4 13
#define IDC_BTN_BILGISAYAR_5 14
#define IDC_BTN_BILGISAYAR_6 15
#define IDC_BTN_BILGISAYAR_7 16
#define IDC_BTN_BILGISAYAR_8 17
#define IDC_BTN_BILGISAYAR_9 18
#define IDC_BTN_BILGISAYAR_10 19
#define IDC_BTN_BILGISAYAR_11 20
// Bilgisayar TextBox
#define IDC_EDT_BILGISAYAR_TXTBOX_1 30

// Kontrol Button
#define IDC_BTN_KONTROL_1 50
#define IDC_BTN_KONTROL_2 51
#define IDC_BTN_KONTROL_3 52
#define IDC_BTN_KONTROL_4 53
#define IDC_BTN_KONTROL_5 54

// Zamanlayıcı Button
#define IDC_BTN_ZAMANLAYICI_1 70
#define IDC_BTN_ZAMANLAYICI_2 71
#define IDC_BTN_ZAMANLAYICI_3 72
#define IDC_BTN_ZAMANLAYICI_4 73
#define IDC_BTN_ZAMANLAYICI_5 74
#define IDC_BTN_ZAMANLAYICI_6 75
#define IDC_BTN_ZAMANLAYICI_7 76
#define IDC_BTN_ZAMANLAYICI_8 77
// Zamanmlayıcı Static
#define IDC_STT_ZAMANLAYICI_1 90
#define IDC_STT_ZAMANLAYICI_2 91
// Zamanlayıcı TextBox
#define IDC_EDT_ZMN_TXTBOX_1 105
#define IDC_EDT_ZMN_TXTBOX_2 106
#define IDC_EDT_ZMN_TXTBOX_3 107

// Windows Button
#define IDC_BTN_WINDOWS_1 145
#define IDC_BTN_WINDOWS_2 146
#define IDC_BTN_WINDOWS_3 147
#define IDC_BTN_WINDOWS_4 148
#define IDC_BTN_WINDOWS_5 149

// Language Button
#define IDC_BTN_LANG_1 170
#define IDC_BTN_LANG_2 171
#define IDC_BTN_LANG_3 172

// ComboBox
#define IDC_CMBOX_KONTROL_1 60
#define IDC_CMBOX_KONTROL_2 61
#define IDC_CMBOX_KONTROL_3 62
#define IDC_CMBOX_ZMN_1 63
#define IDC_CMBOX_BILGISAYAR_1 64

/*
void ShellTrayNotifyIcon()
{
	// Notification
	NOTIFYICONDATA snid = {};

	HICON hShellNotify = static_cast<HICON>(LoadImage(NULL, MAKEINTRESOURCE(IDI_ICON_C),
		IMAGE_ICON, 0, 0, LR_DEFAULTCOLOR));

	snid.cbSize = sizeof(NOTIFYICONDATA);
	snid.hWnd = hWnd;
	snid.uID = 100;
	snid.uVersion = NOTIFYICON_VERSION;
	snid.uFlags = NIF_ICON | NIF_TIP | NIF_MESSAGE;
	snid.uCallbackMessage = APPWM_ICONNOTIFY;
	snid.hIcon = hShellNotify;

	SendMessage(hWnd, WM_SETICON, ICON_BIG, (LPARAM)hShellNotify);
	SendMessage(hWnd, WM_SETICON, ICON_SMALL, (LPARAM)hShellNotify);


	// ShellNotifyIcon Göster
	Shell_NotifyIcon(NIM_ADD, &snid);
}
*/

void CalistirProgram()
{
	wchar_t baslat[255];
	wchar_t calistir[255];
	GetWindowTextW(hEkranBilgisayarTextBox1, calistir, 255);
	GetWindowTextW(hEkranBilgisayarTextBox1, baslat, 255);
	wstring str_calistir = calistir;
	wstring str_baslat = _T("rundll32.exe shell32.dll Control_RunDLL ");
	str_baslat = str_baslat + baslat;
	const wchar_t* ch_calistir = str_calistir.c_str();
	const wchar_t* ch_baslat = str_baslat.c_str();

	ShellExecuteW(NULL, _T("runas"), ch_calistir, NULL, NULL, SW_SHOWNORMAL);
	if (GetLastError() == ERROR_FILE_NOT_FOUND) {
		MessageBox(hWnd, Dosya_Bulunamadi_1, DBB_1, MB_ICONERROR | MB_OK);
	}
	else if (GetLastError() == ERROR_ACCESS_DENIED) {
		MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
	}
	else { ShellExecute(NULL, _T("open"), ch_baslat, NULL, NULL, SW_SHOWNORMAL); }
}

void AlternatifCalistirProgram()
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	wchar_t c_program[255];
	GetWindowTextW(hEkranBilgisayarTextBox1, c_program, 255);

	BOOL bCreateProcess = NULL;
	bCreateProcess = CreateProcess(c_program, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	WaitForSingleObject(pi.hProcess, INFINITE);

	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	if (!bCreateProcess)
	{
		MessageBox(hWnd, Dosya_Konum_Hatasi_1, DKHB_1, MB_ICONERROR | MB_OK);
	}
	return;
}

void BulProgram()
{
	OPENFILENAME bulfn;
	TCHAR bulFile[260] = { 0 };

	ZeroMemory(&bulfn, sizeof(bulfn));

	bulfn.lStructSize = sizeof(OPENFILENAME);
	bulfn.hwndOwner = hWnd;
	bulfn.lpstrFile = bulFile;
	bulfn.nMaxFile = sizeof(bulFile);
	bulfn.lpstrFilter = _T("Tüm Dosyalar\0*.*\0Exe Dosyaları\0*.EXE\0Kurulum Dosyaları\0*.MSI\0C++ Kaynak Dosyaları\0*.CPP\0C++ Üst Bilgi Dosyaları\0*.H\0");
	bulfn.nFilterIndex = 1;
	bulfn.lpstrFileTitle = NULL;
	bulfn.nMaxFileTitle = 0;
	bulfn.lpstrInitialDir = NULL;
	bulfn.Flags = OFN_HIDEREADONLY | OFN_FILEMUSTEXIST;

	GetOpenFileName(&bulfn);
	SetWindowText(hEkranBilgisayarTextBox1, bulFile);
}

void AlternatifKapatProgram()
{
	wchar_t kapat[255];
	GetWindowText(hEkranBilgisayarTextBox1, kapat, 255);
	wstring str_kapat = _T("taskkill / f / t / im ");
	str_kapat += kapat;
	const wchar_t* ch_kapat = str_kapat.c_str();

	_wsystem(ch_kapat);
	if (GetLastError() == ERROR_FILE_NOT_FOUND)
	{
		MessageBox(hWnd, Dosya_Bulunamadi_1, DBB_1, MB_ICONERROR | MB_OK);
	}
	else if (GetLastError() == ERROR_ACCESS_DENIED)
	{
		MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
	}
}

void CalisanUygulamalar()
{
	system("color 0a && tasklist && pause");
}

void Zamanlama()
{
	char sure[255];
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	string str = "shutdown -s -t ";
	str += sure;
	const char* ch_str_zamanlama = str.c_str();

	system(ch_str_zamanlama);
}

void setZamanlamaBilgisayarKapat()
{
	char sure[255];
	string str_bilgisayarkapat = "shutdown -s -t ";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_bilgisayarkapat += sure;
	const char* ch_str_zamanlama = str_bilgisayarkapat.c_str();

	system(ch_str_zamanlama);
}
void setZamanlamaOturumKapat()
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_oturumkapat = " && shutdown -l";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_oturumkapat;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
}
void setZamanlamaYenidenBaslat()
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_yenidenbaslat = " && shutdown -r";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_yenidenbaslat;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
}
void setZamanlamaUykuModu()
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_uykumodu = " && shutdown -h";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_uykumodu;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
}
void setZamanlamaBilgisayarKitle()
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_bilgisayarkitle = " && rundll32.exe user32.dll,LockWorkStation";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_bilgisayarkitle;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
}
void setZamanlamaİptal()
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_iptal = " && shutdown -a";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_iptal;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
}

void killProcessByName(const wchar_t* filename)
{
	HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
	PROCESSENTRY32W pEntry;
	pEntry.dwSize = sizeof(pEntry);
	BOOL hRes = Process32First(hSnapShot, &pEntry);
	while (hRes)
	{
		if (wcscmp(pEntry.szExeFile, filename) == 0)
		{
			HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0,
				(DWORD)pEntry.th32ProcessID);
			if (hProcess != NULL)
			{
				TerminateProcess(hProcess, 9);
				CloseHandle(hProcess);
			}
		}
		hRes = Process32Next(hSnapShot, &pEntry);
	}
	CloseHandle(hSnapShot);
}

void DiskTamir()
{
	ifstream disk_tamir;
	disk_tamir >> noskipws;
	ShellExecuteA(NULL, "runas", "DiskTamir.bat", NULL, NULL, SW_SHOWNORMAL);
	// Hata! Dosya Oluştur
	if (GetLastError() == ERROR_FILE_NOT_FOUND)
	{
		if (MessageBox(NULL, Disk_Tamir_Bulunamadi_1, DTBB_1, MB_ICONINFORMATION | MB_OKCANCEL) == IDOK) {
			ofstream disktamir_yap;
			disktamir_yap.open("DiskTamir.bat");
			disktamir_yap << "color 09\n" << "sfc /scannow\n" << "color 0a\n"
				<< "chkdsk C: /x /f\n" << "chkdsk C: /r /f\n" << "chkdsk volume: /r /f\n"
				<< "timeout /t 10\n"
				<< "del /q /f DiskTamir.bat\n"
				<< endl;
			disktamir_yap.close();
			if (MessageBox(NULL, Disk_Tamir_Baslat_1, DTBB_2, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK) {
				ShellExecuteA(NULL, "runas", "DiskTamir.bat", NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_CANTOPEN) {
					MessageBox(NULL, Disk_Tamir_Baslamama_1, DTBB_3, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_FILE_NOT_FOUND) {
					MessageBox(NULL, Disk_Tamir_Bulunamiyor_1, DTBB_4, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED) {
					MessageBox(NULL, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
			}
			else { remove("DiskTamir.bat"); }
		}
	}
}

void AlternatifUygulamaZamanlama()
{
	wchar_t uygulama_adi[255];
	wchar_t sure_miktari[255];
	GetWindowText(hEkranZmnTextBox2, uygulama_adi, 255);
	GetWindowText(hEkranZmnTextBox3, sure_miktari, 255);
	wstring str_sure;
	wstring str_sure_1 = _T("timeout /t ");
	wstring str_sure_2 = _T(" && taskkill /f /t /im ");
	wstring str_sure_3 = _T(" && timeout /t 5");
	str_sure += str_sure_1;
	str_sure += sure_miktari;
	str_sure += str_sure_2;
	str_sure += uygulama_adi;
	str_sure += str_sure_3;
	const wchar_t* ch_str_sure = str_sure.c_str();

	_wsystem(ch_str_sure);
}

//======================== Language ==============================
//================================================================

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg)
	{
	case WM_CREATE:
		// Bilgisayar Static
		hEkranStatic = CreateWindow(STT, Bilgisayar_Static_1, WS_VISIBLE | WS_CHILD, 20, 10, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 36, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bilgisayar_Static_2, WS_VISIBLE | WS_CHILD, 310, 50, 200, 25, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Bilgisayar Button
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 50, 150, 30, hWnd, (HMENU)IDC_BTN_BILGISAYAR_1, NULL, NULL);
		// hEkranButton = CreateWindow(BTN, Bilgisayar_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 170, 50, 125, 40, hWnd, (HMENU)IDC_BTN_BILGISAYAR_2, NULL, NULL);
		// hEkranButton = CreateWindow(BTN, Bilgisayar_Button_3, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 320, 50, 125, 40, hWnd, (HMENU)IDC_BTN_BILGISAYAR_3, NULL, NULL);
		// hEkranButton = CreateWindow(BTN, Bilgisayar_Button_4, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 470, 50, 125, 40, hWnd, (HMENU)IDC_BTN_BILGISAYAR_4, NULL, NULL);
		// hEkranButton = CreateWindow(BTN, Bilgisayar_Button_5, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 620, 50, 125, 40, hWnd, (HMENU)IDC_BTN_BILGISAYAR_5, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_6, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 230, 110, 100, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_6, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_7, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 340, 110, 100, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_7, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_8, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 450, 110, 100, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_8, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_9, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 600, 50, 150, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_9, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_10, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 600, 80, 150, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_10, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_11, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 600, 120, 150, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_11, NULL, NULL);
		// Bilgisayar TextBox
		hEkranBilgisayarTextBox1 = CreateWindow(EDT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT | ES_AUTOHSCROLL, 230, 80, 320, 20, hWnd, (HMENU)IDC_EDT_BILGISAYAR_TXTBOX_1, NULL, NULL);
		// Bilgisayar ComboBox
		hComboBox5 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 20, 85, 150, 300, hWnd, (HMENU)IDC_CMBOX_BILGISAYAR_1, NULL, NULL);

		// Kontrol Static
		hEkranStatic = CreateWindow(STT, Kontrol_Static_1, WS_VISIBLE | WS_CHILD, 20, 140, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 170, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Kontrol Button
		hEkranButton = CreateWindow(BTN, Kontrol_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_1, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Kontrol_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 170, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_2, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Kontrol_Button_3, WS_VISIBLE | WS_CHILD | WS_BORDER, 320, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_3, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Kontrol_Button_4, WS_VISIBLE | WS_CHILD | WS_BORDER, 470, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_4, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Kontrol_Button_5, WS_VISIBLE | WS_CHILD | WS_BORDER, 620, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_5, NULL, NULL);
		// Kontrol ComboBox
		hComboBox1 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 320, 240, 125, 300, hWnd, (HMENU)IDC_CMBOX_KONTROL_1, NULL, NULL);
		hComboBox2 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 470, 240, 125, 300, hWnd, (HMENU)IDC_CMBOX_KONTROL_2, NULL, NULL);
		hComboBox3 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 620, 240, 125, 300, hWnd, (HMENU)IDC_CMBOX_KONTROL_3, NULL, NULL);

		// Zamanlayıcı Static
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_1, WS_VISIBLE | WS_CHILD, 20, 270, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 300, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_2, WS_VISIBLE | WS_CHILD, 30, 390, 50, 25, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_3, WS_VISIBLE | WS_CHILD, 30, 420, 400, 25, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_4, WS_VISIBLE | WS_CHILD, 320, 390, 500, 20, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_5, WS_VISIBLE | WS_CHILD, 385, 415, 400, 20, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_6, WS_VISIBLE | WS_CHILD, 420, 445, 400, 60, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Zamanlayıcı Button
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 320, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_1, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 140, 320, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_2, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_3, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 260, 320, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_3, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_4, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 380, 320, 120, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_4, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_5, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 510, 320, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_5, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_6, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 630, 320, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_6, NULL, NULL);
		// hEkranButton = CreateWindow(BTN, Zamanlayici_Button_7, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 150, 390, 125, 20, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_7, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_8, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 490, 415, 250, 20, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_8, NULL, NULL);
		// Zamanlayıcı TextBox
		hEkranZmnTextBox1 = CreateWindow(EDT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_NUMBER, 70, 390, 75, 20, hWnd, (HMENU)IDC_EDT_ZMN_TXTBOX_1, NULL, NULL);
		hEkranZmnTextBox2 = CreateWindow(EDT, Zamanlayici_Textbox_1, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT | ES_AUTOHSCROLL, 420, 390, 320, 20, hWnd, (HMENU)IDC_EDT_ZMN_TXTBOX_2, NULL, NULL);
		hEkranZmnTextBox3 = CreateWindow(EDT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_NUMBER, 420, 415, 60, 20, hWnd, (HMENU)IDC_EDT_ZMN_TXTBOX_3, NULL, NULL);
		// Zamanlayıcı ComboBox
		hComboBox4 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 150, 390, 125, 300, hWnd, (HMENU)IDC_CMBOX_ZMN_1, NULL, NULL);
		
		// İşletim Sistemi Static
		hEkranStatic = CreateWindow(STT, IsletimSistemi_Static_1, WS_VISIBLE | WS_CHILD, 20, 480, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 510, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Sürüm_Static_1, WS_VISIBLE | WS_CHILD, 320, 582, 160, 20, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// İşletim Sistemi Button
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_1, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 170, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_2, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_3, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 310, 530, 150, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_3, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_4, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 475, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_4, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_5, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 620, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_5, NULL, NULL);

		// ComboBox_1
		SendMessage(hComboBox1, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_1[0]);
		SendMessage(hComboBox1, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_1[1]);
		SendMessage(hComboBox1, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_1[2]);
		SendMessage(hComboBox1, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_1[3]);
		SendMessage(hComboBox1, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_1[4]);
		SendMessage(hComboBox1, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_2
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[0]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[1]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[2]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[3]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[4]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[5]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[6]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[7]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[8]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[9]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[10]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[11]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[12]);
		SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[13]);
		SendMessage(hComboBox2, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_3
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[0]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[1]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[2]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[3]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[4]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[5]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[6]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[7]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[8]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[9]);
		SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[10]);
		SendMessage(hComboBox3, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_4
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[0]);
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[1]);
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[2]);
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[3]);
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[4]);
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[5]);
		SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[6]);
		SendMessage(hComboBox4, CB_SETCURSEL, (WPARAM)0, 0);

        // ComboBox_5
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[0]);
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[1]);
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[2]);
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[3]);
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[4]);
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[5]);
		SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[6]);
		SendMessage(hComboBox5, CB_SETCURSEL, (WPARAM)0, 0);

		break;
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
			// Bilgisayar
		case IDC_CMBOX_BILGISAYAR_1:
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_5[255];
				int scnk5 = SendMessage(hComboBox5, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox5, CB_GETLBTEXT, scnk5, (LPARAM)str_combobox_5);

				if (scnk5 == 1) { ShellExecute(hWnd, _T("open"), _T("msinfo32.exe"), NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("msinfo32.exe"); } }
				//-----------------------------------------------------------------------------------------
				if (scnk5 == 2) { ShellExecute(hWnd, _T("open"), _T("services.msc"), NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("services.msc"); } }
				//-----------------------------------------------------------------------------------------
				if (scnk5 == 3) { ShellExecute(hWnd, _T("open"), _T("notepad.exe"), NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("notepad.exe"); } }
				//-----------------------------------------------------------------------------------------
				if (scnk5 == 4) { ShellExecute(hWnd, _T("open"), _T("regedit.exe"), NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("regedit.exe"); } }
				//-----------------------------------------------------------------------------------------
				if (scnk5 == 5) { ShellExecute(hWnd, _T("open"), _T("calc.exe"), NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("calc.exe"); } }
				//-----------------------------------------------------------------------------------------
				if (scnk5 == 6) { ShellExecute(hWnd, _T("open"), _T("mspaint.exe"), NULL, NULL, SW_SHOWNORMAL);
				if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("mspaint.exe"); } }
				//-----------------------------------------------------------------------------------------

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{ MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{ MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{ MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK); }
			}
			break;

		case IDC_BTN_BILGISAYAR_6:
			CalistirProgram();
			break;
		case IDC_BTN_BILGISAYAR_7:
			wchar_t programAd[255];
			GetWindowTextW(hEkranBilgisayarTextBox1, programAd, 255);
			killProcessByName(programAd);
			break;
		case IDC_BTN_BILGISAYAR_8:
			BulProgram();
			break;
		case IDC_BTN_BILGISAYAR_9:
			AlternatifCalistirProgram();
			break;
		case IDC_BTN_BILGISAYAR_10:
			AlternatifKapatProgram();
			break;
		case IDC_BTN_BILGISAYAR_11:
			CalisanUygulamalar();
			break;

		case IDC_BTN_KONTROL_1:if (MessageBox(hWnd, AtikDosya_Temizleme_1, ADT_1, MB_ICONQUESTION | MB_OKCANCEL) == IDOK) {
			system("del /s /q C:\\Windows\\Temp\\ && del /s /q %temp% && del /s /q C:\\Windows\\Prefetch\\ && timeout /t 3 && rmdir /s /q C:\\Windows\\Temp\\ && rmdir /s /q %temp% && rmdir /s /q C:\\Windows\\Prefetch\\"); }
		break;
		case IDC_BTN_KONTROL_2: if (MessageBox(hWnd, InternetBellegi_Temizleme_1, IBT_1, MB_ICONQUESTION | MB_OKCANCEL) == IDOK) {
			system("ipconfig /release && ipconfig /renew && ipconfig /flushdns && timeout /t 3"); }
		break;

		case IDC_CMBOX_KONTROL_1:
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_1[255];
				int scnk1 = SendMessage(hComboBox1, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox1, CB_GETLBTEXT, scnk1, (LPARAM)str_combobox_1);

				if (scnk1 == 1) { ShellExecute(hWnd, _T("open"), _T("shrpubw.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk1 == 2) { ShellExecute(hWnd, _T("open"), _T("iexpress.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk1 == 3) { ShellExecute(hWnd, _T("open"), _T("mobsync.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk1 == 4) { ShellExecute(hWnd, _T("open"), _T("magnify.exe"), NULL, NULL, SW_SHOWNORMAL); }

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{ MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{ MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{ MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK); }
			}
			break;
		case IDC_CMBOX_KONTROL_2:
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_2[255];
				int scnk2 = SendMessage(hComboBox2, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox2, CB_GETLBTEXT, scnk2, (LPARAM)str_combobox_2);

				if (scnk2 == 1) { ShellExecute(hWnd, _T("open"), _T("control.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk2 == 2) { system("inetcpl.cpl"); }
				if (scnk2 == 3) { system("joy.cpl"); }
				if (scnk2 == 4) { system("main.cpl"); }
				if (scnk2 == 5) { system("mmsys.cpl"); }
				if (scnk2 == 6) { system("appwiz.cpl"); }
				if (scnk2 == 7) { system("powercfg.cpl"); }
				if (scnk2 == 8) { system("intl.cpl"); }
				if (scnk2 == 9) { ShellExecute(hWnd, _T("runas"), _T("regedit.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk2 == 10) { ShellExecute(hWnd, _T("open"), _T("services.msc"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk2 == 11) { ShellExecute(hWnd, _T("open"), _T("gpedit.msc"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk2 == 12) { ShellExecute(hWnd, _T("open"), _T("certmgr.msc"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk2 == 13) { system("ipconfig && pause"); }

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{ MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{ MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{ MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK); }
			}
			break;
		case IDC_CMBOX_KONTROL_3:
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_3[255];
				int scnk3 = SendMessage(hComboBox3, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox3, CB_GETLBTEXT, scnk3, (LPARAM)str_combobox_3);

				if (scnk3 == 1) { ShellExecute(hWnd, _T("open"), _T("diskmgmt.msc"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 2) { ShellExecute(hWnd, _T("open"), _T("devmgmt.msc"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 3) { ShellExecute(hWnd, _T("open"), _T("eventvwr.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 4) { ShellExecute(hWnd, _T("open"), _T("dxdiag.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 5) { ShellExecute(hWnd, _T("open"), _T("perfmon.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 6) { ShellExecute(hWnd, _T("open"), _T("rasphone.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 7) { ShellExecute(hWnd, _T("open"), _T("taskmgr.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 8) { ShellExecute(hWnd, _T("open"), _T("compmgmt.msc"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 9) { ShellExecute(hWnd, _T("open"), _T("cleanmgr.exe"), NULL, NULL, SW_SHOWNORMAL); }
				if (scnk3 == 10) { ShellExecute(hWnd, _T("open"), _T("charmap.exe"), NULL, NULL, SW_SHOWNORMAL); }

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{ MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{ MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{ MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK); }
			}
			break;

		case IDC_BTN_ZAMANLAYICI_1: if (MessageBox(hWnd, Kontrol_Question_1, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK) {
			system("shutdown -l");
		} break;
		case IDC_BTN_ZAMANLAYICI_2: if (MessageBox(hWnd, Kontrol_Question_2, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK) {
			system("shutdown -r -t 3");
		} break;
		case IDC_BTN_ZAMANLAYICI_3: if (MessageBox(hWnd, Kontrol_Question_3, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK) {
			system("shutdown -h");
		} break;
		case IDC_BTN_ZAMANLAYICI_4: if (MessageBox(hWnd, Kontrol_Question_4, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK) {
			system("shutdown -s -t 3");
		} break;
		case IDC_BTN_ZAMANLAYICI_5: if (MessageBox(hWnd, Kontrol_Question_5, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK) {
			system("rundll32.exe user32.dll,LockWorkStation");
		} break;
		case IDC_BTN_ZAMANLAYICI_6: system("shutdown -a"); break;
			break;
		case IDC_BTN_ZAMANLAYICI_8:
			ShowWindow(hWnd, SW_MINIMIZE);
			AlternatifUygulamaZamanlama();
			break;
		case IDC_CMBOX_ZMN_1:
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_4[255];
				int scnk4 = SendMessage(hComboBox4, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox4, CB_GETLBTEXT, scnk4, (LPARAM)str_combobox_4);

				if (scnk4 == 1) {
				setZamanlamaBilgisayarKapat();
				ShowWindow(hWnd, SW_MINIMIZE); }
				if (scnk4 == 2) {
				ShowWindow(hWnd, SW_MINIMIZE);
				setZamanlamaOturumKapat(); }
				if (scnk4 == 3) {
				ShowWindow(hWnd, SW_MINIMIZE); 
				setZamanlamaYenidenBaslat(); }
				if (scnk4 == 4) {
				ShowWindow(hWnd, SW_MINIMIZE); 
				setZamanlamaUykuModu(); }
				if (scnk4 == 5) {
				ShowWindow(hWnd, SW_MINIMIZE); 
				setZamanlamaBilgisayarKitle(); }
				if (scnk4 == 6) {
				ShowWindow(hWnd, SW_MINIMIZE);
				setZamanlamaİptal(); }

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{ MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{ MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{ MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK); }
			}
			break;

		case IDC_BTN_WINDOWS_1: ShellExecuteA(hWnd, "open", "winver.exe", NULL, NULL, SW_SHOWNORMAL);
			if (GetLastError() == ERROR_FILE_NOT_FOUND) {
				MessageBox(hWnd, IsletimSistemi_Error_1, Hata, MB_ICONERROR | MB_OK); }
			else if (GetLastError() == ERROR_APP_INIT_FAILURE) {
				system("winver.exe");
				if (GetLastError() == ERROR_APP_INIT_FAILURE) {
					MessageBox(hWnd, IsletimSistemi_OpenError_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_FILE_NOT_FOUND) {
					MessageBox(hWnd, IsletimSistemi_Error_1, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED) {
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			else {}
			break;
		case IDC_BTN_WINDOWS_2: ShellExecuteA(hWnd, "runas", "powershell.exe", NULL, NULL, SW_SHOWNORMAL);
			if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			else if (GetLastError() == ERROR_FILE_NOT_FOUND) {
				MessageBox(hWnd, IsletimSistemi_Error_2, Hata, MB_ICONERROR | MB_OK); }
			else if (GetLastError() == ERROR_APP_INIT_FAILURE) {
				system("powershell.exe");
				if (GetLastError() == ERROR_APP_INIT_FAILURE) {
					MessageBox(hWnd, IsletimSistemi_OpenError_2, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_FILE_NOT_FOUND) {
					MessageBox(hWnd, IsletimSistemi_OpenError_2, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED) {
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			else {}
			break;

		case IDC_BTN_WINDOWS_3: ShellExecuteA(hWnd, "open", "devmgmt.msc", NULL, NULL, SW_SHOWNORMAL);
			if (GetLastError() == ERROR_FILE_NOT_FOUND) {
				MessageBox(hWnd, IsletimSistemi_Error_3, Hata, MB_ICONERROR | MB_OK); }
			else if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			else if (GetLastError() == ERROR_APP_INIT_FAILURE) {
				system("devmgmt.msc");
				if (GetLastError() == ERROR_APP_INIT_FAILURE) {
					MessageBox(hWnd, IsletimSistemi_OpenError_3, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_FILE_NOT_FOUND) {
					MessageBox(hWnd, IsletimSistemi_OpenError_3, Hata, MB_ICONERROR | MB_OK); }
				else if (GetLastError() == ERROR_ACCESS_DENIED) {
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			else {}
			break;

		case IDC_BTN_WINDOWS_4:
			DiskTamir();
			ShowWindow(hWnd, SW_MINIMIZE);
			break;

		case IDC_BTN_WINDOWS_5: system("driverquery && pause");
			if (GetLastError() == ERROR_APP_INIT_FAILURE) {
				MessageBox(hWnd, IsletimSistemi_Error_4, Hata, MB_ICONERROR | MB_OK); }
			else if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK); }
			else {}
			break;

		case IDCANCEL:
			EndDialog(hWnd, 0);
			return TRUE;
			break;
}
		case WM_CTLCOLORSTATIC:
			HDC hdcStatic;
			hdcStatic = (HDC)wParam;
			SetTextColor(hdcStatic, RGB(255, 255, 255));
			SetBkMode(hdcStatic, TRANSPARENT);
			return (LRESULT)GetStockObject(NULL_BRUSH);
			break;
		case WM_CLOSE:
			if (MessageBox(hWnd, WinApi_Program_Kapat_1, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
			{ DestroyWindow(hWnd); }
			break;

		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hWnd, msg, wParam, lParam);
			break;
	}
	return 0;
}
#endif // winapi_main_h