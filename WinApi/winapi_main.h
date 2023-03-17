/*
* Slavnem Tarafýndan Yapýlmýþ Olup Kar Amacý Gütmez!
* Açýk Kaynak Kod
* 2021
*/

#ifndef winapi_main_h
#define winapi_main_h

#include "winapi_includes.h"
#include "winapi_language.h"
#include "resource.h"

// Ön iþlemciye program daha çalýþmadan tanýmlýyoruz
#define IDC_STT 20

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

// Zamanlayýcý Button
#define IDC_BTN_ZAMANLAYICI_1 70
#define IDC_BTN_ZAMANLAYICI_2 71
#define IDC_BTN_ZAMANLAYICI_3 72
#define IDC_BTN_ZAMANLAYICI_4 73
#define IDC_BTN_ZAMANLAYICI_5 74
#define IDC_BTN_ZAMANLAYICI_6 75
#define IDC_BTN_ZAMANLAYICI_7 76
#define IDC_BTN_ZAMANLAYICI_8 77
// Zamanmlayýcý Static
#define IDC_STT_ZAMANLAYICI_1 90
#define IDC_STT_ZAMANLAYICI_2 91
// Zamanlayýcý TextBox
#define IDC_EDT_ZMN_TXTBOX_1 105
#define IDC_EDT_ZMN_TXTBOX_2 106
#define IDC_EDT_ZMN_TXTBOX_3 107

// Windows Button
#define IDC_BTN_WINDOWS_1 145
#define IDC_BTN_WINDOWS_2 146
#define IDC_BTN_WINDOWS_3 147
#define IDC_BTN_WINDOWS_4 148
#define IDC_BTN_WINDOWS_5 149

// ComboBox
#define IDC_CMBOX_KONTROL_1 60
#define IDC_CMBOX_KONTROL_2 61
#define IDC_CMBOX_KONTROL_3 62
#define IDC_CMBOX_ZMN_1 63
#define IDC_CMBOX_BILGISAYAR_1 64

// Pencere
HWND hWnd = FindWindow(NULL, _T("WinApi"));
HWND hEkranButton, hEkranStatic, hEkranZmnSure1;
HWND hComboBox1, hComboBox2, hComboBox3, hComboBox4, hComboBox5, hBilgisayarBtn_1;
HWND hEkranBilgisayarTextBox1, hEkranZmnTextBox1, hEkranZmnTextBox2, hEkranZmnTextBox3;

// Gerekli þeyleri (buton, sabit metin, yazý metni, combo kutusu) oluþturuyoruz
const TCHAR BTN[] = _T("BUTTON");
const TCHAR STT[] = _T("STATIC");
const TCHAR EDT[] = _T("EDIT");
const TCHAR COMBOX[] = _T("COMBOBOX");

// Combobox döngü
size_t _listeDongu;

// Programý çalýþtýrma fonksiyonu baþlangýcý
int CalistirProgram(void)
{
	// dizilere baþlangýç olarak 0 veriyoruz
	wchar_t baslat[255];;
	wchar_t calistir[255];;
	// kullanýcýnýn yazdýðý metini alýp diziye aktarýyoruz
	GetWindowTextW(hEkranBilgisayarTextBox1, baslat, 255);
	GetWindowTextW(hEkranBilgisayarTextBox1, calistir, 255);
	// bu yazýlanlarý stirng e çeviriyoruz ve birleþtiriyoruz
	wstring str_calistir = calistir;
	wstring str_baslat = _T("rundll32.exe shell32.dll Control_RunDLL ");
	str_baslat = str_baslat + baslat;
	const wchar_t* ch_calistir = str_calistir.c_str();
	const wchar_t* ch_baslat = str_baslat.c_str();

	// kabuktan çalýþtýrýyoruz
	ShellExecuteW(NULL, _T("runas"), ch_calistir, NULL, NULL, SW_SHOWNORMAL);

	// hata aldýðýnda yapýcaklarý, eðer hala hatalý ise -1 deðeri döndürcek
	if (GetLastError() == ERROR_FILE_NOT_FOUND) {
		MessageBox(hWnd, Dosya_Bulunamadi_1, DBB_1, MB_ICONERROR | MB_OK);
		return -1;
	}
	else if (GetLastError() == ERROR_ACCESS_DENIED) {
		MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
		return -1;
	}
	else { ShellExecute(NULL, _T("open"), ch_baslat, NULL, NULL, SW_SHOWNORMAL); }

	// eðer hata olmassa, 0 yani baþarý döndürecektir
	return 0;
} // Programý çalýþtýrma fonksiyonu sonu

// Programý alternatif çalýþtýrma fonksiyonu baþlangýcý
int AlternatifCalistirProgram(void)
{
	// baþlama bilgisis ve iþlem bilgisi oluþturuyoruz
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	// zeromemory ile bellekte yer açýyoruz
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	// yazýlan metini alýyoruz
	wchar_t c_program[255];;
	GetWindowTextW(hEkranBilgisayarTextBox1, c_program, 255);

	// iþlem oluþturma kodu
	BOOL bCreateProcess = NULL;
	bCreateProcess = CreateProcess(c_program, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	// iþlemi bekliyor
	WaitForSingleObject(pi.hProcess, INFINITE);

	// iþlemi sonlandýrýyor
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	// eðer iþlem oluþmamýþsa
	if (!bCreateProcess)
	{
		MessageBox(hWnd, Dosya_Konum_Hatasi_1, DKHB_1, MB_ICONERROR | MB_OK);
		return -1; // hatalý
	}
	else
	{
		return 0; // baþarýlý
	}
} // Programý alternatif çalýþtýrma fonksiyonu sonu

// Program bulma fonksiyonu baþlangýcý
void BulProgram(void)
{
	// dosya konumu için karakter tutacak dizi ve dosya açma için deðiþken oluþturuyoruz
	OPENFILENAME bulfn;
	TCHAR bulFile[260]{};

	// bellekte yer açýyoruz
	ZeroMemory(&bulfn, sizeof(bulfn));

	// dosya açmak için bazý özellikleri belirtiyoruz
	bulfn.lStructSize = sizeof(OPENFILENAME);
	bulfn.hwndOwner = hWnd;
	bulfn.lpstrFile = bulFile;
	bulfn.nMaxFile = sizeof(bulFile);
	bulfn.lpstrFilter = _T("All Files\0*.*\0Exe Files\0*.EXE\0Setup Files\0*.MSI\0C++ Source Files\0*.CPP\0C++ Header Files\0*.H\0");
	bulfn.nFilterIndex = 1;
	bulfn.lpstrFileTitle = NULL;
	bulfn.nMaxFileTitle = 0;
	bulfn.lpstrInitialDir = NULL;
	bulfn.Flags = OFN_HIDEREADONLY | OFN_FILEMUSTEXIST;

	// dosyayý açýyoruz ve ekrandaki yazýya dosya konumunu yazdýrýyoruz
	GetOpenFileName(&bulfn);
	SetWindowText(hEkranBilgisayarTextBox1, bulFile);
} // Program bulma fonksiyonu sonu

// Alternatif program kapatma baþlangýcý
int AlternatifKapatProgram(void)
{
	wchar_t kapat[255];;
	GetWindowText(hEkranBilgisayarTextBox1, kapat, 255);
	wstring str_kapat = _T("taskkill / f / t / im ");
	str_kapat += kapat;
	const wchar_t* ch_kapat = str_kapat.c_str();

	// programý kapatýyoruz
	_wsystem(ch_kapat);

	if (GetLastError() == ERROR_FILE_NOT_FOUND)
	{
		MessageBox(hWnd, Dosya_Bulunamadi_1, DBB_1, MB_ICONERROR | MB_OK); // hata mesajý
		return -1; // baþarýsýz
	}
	else if (GetLastError() == ERROR_ACCESS_DENIED)
	{
		MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
		return -1;
	}
	else
	{
		return 0; // baþarýlý
	}
} // Alternatif program kapatma sonu

// Çalýþan uygulamalar gösterme fonksiyonu baþlangýcý
void CalisanUygulamalar(void)
{
	// renk deðiþtirip, cmd ekranýnda uygulama listesinin gösteriyoruz
	system("color 0a && tasklist && pause");
} // Çalýþan uygulamalar gösterme fonksiyonu sonu

// Bilgisayar tamamen kapatma zamanlama fonksiyonu baþlangýcý
void setZamanlamaBilgisayarKapat(void)
{
	char sure[255];
	string str_bilgisayarkapat = "shutdown -s -t ";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_bilgisayarkapat += sure;
	const char* ch_str_zamanlama = str_bilgisayarkapat.c_str();

	system(ch_str_zamanlama);
} // Bilgisayar tamamen kapatma zamanlama fonksiyonu sonu

// Bilgisayar oturum kapatma zamanlama fonksiyonu baþlangýcý
void setZamanlamaOturumKapat(void)
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_oturumkapat = " && shutdown -l";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_oturumkapat;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
}// Bilgisayar oturum kapatma zamanlama fonksiyonu sonu

// Bilgisayar yeniden baþlatma zamanlama fonksiyonu baþlangýcý
void setZamanlamaYenidenBaslat(void)
{
	char sure[255];;
	string str_t = "timeout /t ";
	string str_yenidenbaslat = " && shutdown -r";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_yenidenbaslat;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
} // Bilgisayar yeniden baþlatma zamanlama fonksiyonu sonu

// Bilgisayar uyku zamanlama fonksiyonu baþlangýcý
void setZamanlamaUykuModu(void)
{
	char sure[255];;
	string str_t = "timeout /t ";
	string str_uykumodu = " && shutdown -h";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_uykumodu;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
} // Bilgisayar uyku zamanlama fonksiyonu sonu

// Bilgisayar kitleme zamanlama fonksiyonu baþlangýcý
void setZamanlamaBilgisayarKitle(void)
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_bilgisayarkitle = " && rundll32.exe user32.dll,LockWorkStation";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_bilgisayarkitle;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
} // Bilgisayar kitleme zamanlama fonksiyonu sonu

// Bilgisayar zamanlama iptal fonksiyonu baþlangýcý
void setZamanlamaÝptal(void)
{
	char sure[255];
	string str_t = "timeout /t ";
	string str_iptal = " && shutdown -a";
	GetWindowTextA(hEkranZmnTextBox1, sure, 255);
	str_t += sure;
	str_t += str_iptal;
	const char* ch_str_suresecim = str_t.c_str();

	system(ch_str_suresecim);
} // Bilgisayar zamanlama iptal fonksiyonu sonu

// Ýþlem öldürme fonksiyonu baþlangýcý
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
} // Ýþlem öldürme fonksiyonu sonu


// Disk tamir fonksiyonu baþlangýcý
void DiskTamir(void)
{
	ifstream disk_tamir;
	disk_tamir >> noskipws;
	ShellExecuteA(NULL, "runas", "DiskTamir.bat", NULL, NULL, SW_SHOWNORMAL);
	// Hata! Dosya Oluþtur
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
} // Disk tamir fonksiyonu sonu

// Alternatif uygulama zamanlama fonksiyonu baþlangýcý
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
} // Alternatif uygulama zamanlama fonksiyonu sonu

// GENEL BAÞLANGICI
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg)
	{
	// Buton, Metin... Oluþturma
	case WM_CREATE:
		// Bilgisayar Static
		hEkranStatic = CreateWindow(STT, Bilgisayar_Static_1, WS_VISIBLE | WS_CHILD, 20, 10, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 36, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bilgisayar_Static_2, WS_VISIBLE | WS_CHILD, 310, 50, 200, 25, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Bilgisayar Button
		hEkranButton = CreateWindow(STT, Bilgisayar_Button_1, WS_VISIBLE | WS_CHILD, 20, 50, 150, 30, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_6, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 230, 110, 100, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_6, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_7, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 340, 110, 100, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_7, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_8, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 450, 110, 100, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_8, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_9, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 600, 50, 150, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_9, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_10, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 600, 80, 150, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_10, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Bilgisayar_Button_11, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 600, 120, 150, 25, hWnd, (HMENU)IDC_BTN_BILGISAYAR_11, NULL, NULL);
		// Bilgisayar TextBox
		hEkranBilgisayarTextBox1 = CreateWindow(EDT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT | ES_AUTOHSCROLL, 230, 80, 320, 20, hWnd, (HMENU)IDC_EDT_BILGISAYAR_TXTBOX_1, NULL, NULL);
		// Bilgisayar ComboBox
		hComboBox5 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 20, 80, 150, 300, hWnd, (HMENU)IDC_CMBOX_BILGISAYAR_1, NULL, NULL);

		// Kontrol Static
		hEkranStatic = CreateWindow(STT, Kontrol_Static_1, WS_VISIBLE | WS_CHILD, 20, 140, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 170, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Kontrol Button
		hEkranButton = CreateWindow(BTN, Kontrol_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_1, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Kontrol_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 170, 190, 125, 40, hWnd, (HMENU)IDC_BTN_KONTROL_2, NULL, NULL);
		hEkranButton = CreateWindow(STT, Kontrol_Button_3, WS_VISIBLE | WS_CHILD, 320, 180, 125, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranButton = CreateWindow(STT, Kontrol_Button_4, WS_VISIBLE | WS_CHILD, 470, 180, 125, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranButton = CreateWindow(STT, Kontrol_Button_5, WS_VISIBLE | WS_CHILD, 620, 180, 125, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Kontrol ComboBox
		hComboBox1 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 320, 205, 125, 300, hWnd, (HMENU)IDC_CMBOX_KONTROL_1, NULL, NULL);
		hComboBox2 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 470, 205, 125, 320, hWnd, (HMENU)IDC_CMBOX_KONTROL_2, NULL, NULL);
		hComboBox3 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 620, 205, 125, 300, hWnd, (HMENU)IDC_CMBOX_KONTROL_3, NULL, NULL);

		// Zamanlayýcý Static
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_1, WS_VISIBLE | WS_CHILD, 20, 250, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 280, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_2, WS_VISIBLE | WS_CHILD, 30, 370, 50, 25, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_3, WS_VISIBLE | WS_CHILD, 30, 400, 400, 25, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_4, WS_VISIBLE | WS_CHILD, 320, 370, 500, 20, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_5, WS_VISIBLE | WS_CHILD, 385, 395, 400, 20, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Zamanlayici_Static_6, WS_VISIBLE | WS_CHILD, 420, 425, 400, 60, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Zamanlayýcý Button
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 300, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_1, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 140, 300, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_2, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_3, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 260, 300, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_3, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_4, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 380, 300, 120, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_4, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_5, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 510, 300, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_5, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_6, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 630, 300, 110, 40, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_6, NULL, NULL);
		hEkranButton = CreateWindow(BTN, Zamanlayici_Button_8, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 490, 395, 250, 20, hWnd, (HMENU)IDC_BTN_ZAMANLAYICI_8, NULL, NULL);
		// Zamanlayýcý TextBox
		hEkranZmnTextBox1 = CreateWindow(EDT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_NUMBER, 70, 370, 75, 20, hWnd, (HMENU)IDC_EDT_ZMN_TXTBOX_1, NULL, NULL);
		hEkranZmnTextBox2 = CreateWindow(EDT, Zamanlayici_Textbox_1, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT | ES_AUTOHSCROLL, 420, 370, 320, 20, hWnd, (HMENU)IDC_EDT_ZMN_TXTBOX_2, NULL, NULL);
		hEkranZmnTextBox3 = CreateWindow(EDT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_NUMBER, 420, 395, 60, 20, hWnd, (HMENU)IDC_EDT_ZMN_TXTBOX_3, NULL, NULL);
		// Zamanlayýcý ComboBox
		hComboBox4 = CreateWindow(COMBOX, NULL, WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST, 150, 370, 125, 300, hWnd, (HMENU)IDC_CMBOX_ZMN_1, NULL, NULL);

		// Ýþletim Sistemi Static
		hEkranStatic = CreateWindow(STT, IsletimSistemi_Static_1, WS_VISIBLE | WS_CHILD, 20, 480, 120, 40, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, Bos, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 510, 800, 2, hWnd, (HMENU)IDC_STT, NULL, NULL);
		hEkranStatic = CreateWindow(STT, WinApi_Static_1, WS_VISIBLE | WS_CHILD, 300, 582, 200, 20, hWnd, (HMENU)IDC_STT, NULL, NULL);
		// Ýþletim Sistemi Button
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_1, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 20, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_1, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_2, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 170, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_2, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_3, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 310, 530, 150, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_3, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_4, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 475, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_4, NULL, NULL);
		hEkranButton = CreateWindow(BTN, IsletimSistemi_Button_5, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | WS_BORDER, 620, 530, 125, 40, hWnd, (HMENU)IDC_BTN_WINDOWS_5, NULL, NULL);

		// ComboBox_1
		for (_listeDongu = 0; _listeDongu < _CMBOX_1_BOYUT; _listeDongu++)
		{
			SendMessage(hComboBox1, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_1[_listeDongu]);
		}
		SendMessage(hComboBox1, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_2
		for (_listeDongu = 0; _listeDongu < _CMBOX_2_BOYUT; _listeDongu++)
		{
			SendMessage(hComboBox2, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_2[_listeDongu]);
		}
		SendMessage(hComboBox2, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_3
		for (_listeDongu = 0; _listeDongu < _CMBOX_3_BOYUT; _listeDongu++)
		{
			SendMessage(hComboBox3, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_3[_listeDongu]);
		}
		SendMessage(hComboBox3, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_4
		for (_listeDongu = 0; _listeDongu < _CMBOX_4_BOYUT; _listeDongu++)
		{
			SendMessage(hComboBox4, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_4[_listeDongu]);
		}
		SendMessage(hComboBox4, CB_SETCURSEL, (WPARAM)0, 0);

		// ComboBox_5
		for (_listeDongu = 0; _listeDongu < _CMBOX_5_BOYUT; _listeDongu++)
		{
			SendMessage(hComboBox5, CB_ADDSTRING, (WPARAM)0, (LPARAM)ComboBox_5[_listeDongu]);
		}
		SendMessage(hComboBox5, CB_SETCURSEL, (WPARAM)0, 0);

		break;

	// Buton Çalýþtýrma
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

				switch (scnk5)
				{
				case 1:
					ShellExecute(hWnd, _T("open"), _T("msinfo32.exe"), NULL, NULL, SW_SHOWNORMAL);
					if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("msinfo32.exe"); }
					break;
				case 2:
					ShellExecute(hWnd, _T("open"), _T("services.msc"), NULL, NULL, SW_SHOWNORMAL);
					if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("services.msc"); }
					break;
				case 3:
					ShellExecute(hWnd, _T("open"), _T("notepad.exe"), NULL, NULL, SW_SHOWNORMAL);
					if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("notepad.exe"); }
					break;
				case 4:
					ShellExecute(hWnd, _T("open"), _T("regedit.exe"), NULL, NULL, SW_SHOWNORMAL);
					if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("regedit.exe"); }
					break;
				case 5:
					ShellExecute(hWnd, _T("open"), _T("calc.exe"), NULL, NULL, SW_SHOWNORMAL);
					if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("calc.exe"); }
					break;
				case 6:
					ShellExecute(hWnd, _T("open"), _T("mspaint.exe"), NULL, NULL, SW_SHOWNORMAL);
					if (GetLastError() == ERROR_APP_INIT_FAILURE) { system("mspaint.exe"); }
					break;
				default:
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
					break;
				}

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
			}
			break;

		case IDC_BTN_BILGISAYAR_6:
			if (GetWindowTextW(hEkranBilgisayarTextBox1, 0, 255) == NULL)
			{ /* Bir þey girmediði için hiçbir þey yapmayacak */ }
			else
			{
				CalistirProgram();
			}
			break;
		case IDC_BTN_BILGISAYAR_7:
			if (GetWindowTextW(hEkranBilgisayarTextBox1, 0, 255) == NULL)
			{ /* Bir þey girmediði için hiçbir þey yapmayacak */ }
			else
			{
				wchar_t programAd[255];
				GetWindowTextW(hEkranBilgisayarTextBox1, programAd, 255);
				killProcessByName(programAd);
			}
			break;
		case IDC_BTN_BILGISAYAR_8:
			BulProgram();
			break;
		case IDC_BTN_BILGISAYAR_9:
			if (GetWindowTextW(hEkranBilgisayarTextBox1, 0, 255) == NULL)
			{ /* Bir þey girmediði için hiçbir þey yapmayacak */ }
			else
			{
				AlternatifCalistirProgram();
			}
			break;
		case IDC_BTN_BILGISAYAR_10:
			if (GetWindowTextW(hEkranBilgisayarTextBox1, 0, 255) == NULL)
			{ /* Bir þey girmediði için hiçbir þey yapmayacak */ }
			else
			{
				AlternatifKapatProgram();
			}
			break;
		case IDC_BTN_BILGISAYAR_11:
			CalisanUygulamalar();
			break;

		case IDC_BTN_KONTROL_1:if (MessageBox(hWnd, AtikDosya_Temizleme_1, ADT_1, MB_ICONQUESTION | MB_OKCANCEL) == IDOK)
		{
			system("del /s /q C:\\Windows\\Temp\\ && del /s /q %temp% && del /s /q C:\\Windows\\Prefetch\\ && timeout /t 3 && rmdir /s /q C:\\Windows\\Temp\\ && rmdir /s /q %temp% && rmdir /s /q C:\\Windows\\Prefetch\\");
		}
			break;
		case IDC_BTN_KONTROL_2: if (MessageBox(hWnd, InternetBellegi_Temizleme_1, IBT_1, MB_ICONQUESTION | MB_OKCANCEL) == IDOK)
		{
			system("ipconfig /release && ipconfig /renew && ipconfig /flushdns && timeout /t 3");
		}
			break;

		case IDC_CMBOX_KONTROL_1:
			// Win32 Uygulamalar
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_1[255];
				int scnk1 = SendMessage(hComboBox1, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox1, CB_GETLBTEXT, scnk1, (LPARAM)str_combobox_1);

				switch (scnk1)
				{
				case 0:
					// boþ kýsmý seçti
					break;
				case 1:
					ShellExecute(hWnd, _T("open"), _T("shrpubw.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 2:
					ShellExecute(hWnd, _T("open"), _T("iexpress.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 3:
					ShellExecute(hWnd, _T("open"), _T("mobsync.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 4:
					ShellExecute(hWnd, _T("open"), _T("magnify.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 5:
					ShellExecute(hWnd, _T("open"), _T("mrt"), NULL, NULL, SW_SHOWNORMAL);
					break;
				default:
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
					break;
				}

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
			}
			break;
		case IDC_CMBOX_KONTROL_2:
			// Kontrol Uygulamalar
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_2[255];
				int scnk2 = SendMessage(hComboBox2, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox2, CB_GETLBTEXT, scnk2, (LPARAM)str_combobox_2);

				switch (scnk2)
				{
				case 0:
					// boþ kýsmý seçti
					break;
				case 1:
					ShellExecute(hWnd, _T("open"), _T("control.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 2:
					system("inetcpl.cpl");
					break;
				case 3:
					system("joy.cpl");
					break;
				case 4:
					system("mmsys.cpl");
					break;
				case 5:
					system("mmsys.cpl");
					break;
				case 6:
					system("appwiz.cpl");
					break;
				case 7:
					system("powercfg.cpl");
					break;
				case 8:
					system("intl.cpl");
					break;
				case 9:
					ShellExecute(hWnd, _T("runas"), _T("regedit.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 10:
					ShellExecute(hWnd, _T("open"), _T("services.msc"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 11:
					ShellExecute(hWnd, _T("open"), _T("gpedit.msc"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 12:
					ShellExecute(hWnd, _T("open"), _T("certmgr.msc"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 13:
					system("ipconfig && pause");
					break;
				case 14:
					system("net user && pause");
					break;
				default:
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
					break;
				}

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
			}
			break;
		case IDC_CMBOX_KONTROL_3:
			// Yenilik Uygulamalar
			if (HIWORD(wParam) == CBN_SELENDOK)
			{
				char str_combobox_3[255];
				int scnk3 = SendMessage(hComboBox3, CB_GETCURSEL, 0, 0);
				SendMessage(hComboBox3, CB_GETLBTEXT, scnk3, (LPARAM)str_combobox_3);

				switch (scnk3)
				{
				case 0:
					// boþ kýsmý seçti
					break;
				case 1:
					ShellExecute(hWnd, _T("open"), _T("diskmgmt.msc"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 2:
					ShellExecute(hWnd, _T("open"), _T("devmgmt.msc"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 3:
					ShellExecute(hWnd, _T("open"), _T("eventvwr.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 4:
					ShellExecute(hWnd, _T("open"), _T("dxdiag.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 5:
					ShellExecute(hWnd, _T("open"), _T("perfmon.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 6:
					ShellExecute(hWnd, _T("open"), _T("rasphone.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 7:
					ShellExecute(hWnd, _T("open"), _T("taskmgr.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 8:
					ShellExecute(hWnd, _T("open"), _T("compmgmt.msc"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 9:
					ShellExecute(hWnd, _T("open"), _T("cleanmgr.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				case 10:
					ShellExecute(hWnd, _T("open"), _T("charmap.exe"), NULL, NULL, SW_SHOWNORMAL);
					break;
				default:
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
					break;
				}

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
			}
			break;

		case IDC_BTN_ZAMANLAYICI_1: if (MessageBox(hWnd, Kontrol_Question_1, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
		{
			system("shutdown -l");
		} break;
		case IDC_BTN_ZAMANLAYICI_2: if (MessageBox(hWnd, Kontrol_Question_2, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
		{
			system("shutdown -r -t 3");
		} break;
		case IDC_BTN_ZAMANLAYICI_3: if (MessageBox(hWnd, Kontrol_Question_3, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
		{
			system("shutdown -h");
		} break;
		case IDC_BTN_ZAMANLAYICI_4: if (MessageBox(hWnd, Kontrol_Question_4, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
		{
			system("shutdown -s -t 3");
		} break;
		case IDC_BTN_ZAMANLAYICI_5: if (MessageBox(hWnd, Kontrol_Question_5, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
		{
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

				switch (scnk4)
				{
				case 1:
					setZamanlamaBilgisayarKapat();
					ShowWindow(hWnd, SW_MINIMIZE);
					break;
				case 2:
					ShowWindow(hWnd, SW_MINIMIZE);
					setZamanlamaOturumKapat();
					break;
				case 3:
					ShowWindow(hWnd, SW_MINIMIZE);
					setZamanlamaYenidenBaslat();
					break;
				case 4:
					ShowWindow(hWnd, SW_MINIMIZE);
					setZamanlamaUykuModu();
					break;
				case 5:
					ShowWindow(hWnd, SW_MINIMIZE);
					setZamanlamaBilgisayarKitle();
					break;
				case 6:
					ShowWindow(hWnd, SW_MINIMIZE);
					setZamanlamaÝptal();
					break;
				default:
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
					break;
				}

				if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, Dosya_Bulunamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, Dosya_Acilamadi_1, Hata, MB_ICONERROR | MB_OK);
				}
			}
			break;

		case IDC_BTN_WINDOWS_1: ShellExecuteA(hWnd, "open", "winver.exe", NULL, NULL, SW_SHOWNORMAL);
			if (GetLastError() == ERROR_FILE_NOT_FOUND)
			{
				MessageBox(hWnd, IsletimSistemi_Error_1, Hata, MB_ICONERROR | MB_OK);
			}
			else if (GetLastError() == ERROR_APP_INIT_FAILURE)
			{
				system("winver.exe");
				if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, IsletimSistemi_OpenError_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, IsletimSistemi_Error_1, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED)
			{
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
			}
			else {}
			break;
		case IDC_BTN_WINDOWS_2: ShellExecuteA(hWnd, "runas", "powershell.exe", NULL, NULL, SW_SHOWNORMAL);
			if (GetLastError() == ERROR_ACCESS_DENIED)
			{
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
			}
			else if (GetLastError() == ERROR_FILE_NOT_FOUND)
			{
				MessageBox(hWnd, IsletimSistemi_Error_2, Hata, MB_ICONERROR | MB_OK);
			}
			else if (GetLastError() == ERROR_APP_INIT_FAILURE)
			{
				system("powershell.exe");
				if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, IsletimSistemi_OpenError_2, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, IsletimSistemi_OpenError_2, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED) {
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
			}
			else {}
			break;

		case IDC_BTN_WINDOWS_3: ShellExecuteA(hWnd, "open", "devmgmt.msc", NULL, NULL, SW_SHOWNORMAL);
			if (GetLastError() == ERROR_FILE_NOT_FOUND)
			{
				MessageBox(hWnd, IsletimSistemi_Error_3, Hata, MB_ICONERROR | MB_OK);
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED)
			{
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
			}
			else if (GetLastError() == ERROR_APP_INIT_FAILURE)
			{
				system("devmgmt.msc");
				if (GetLastError() == ERROR_APP_INIT_FAILURE)
				{
					MessageBox(hWnd, IsletimSistemi_OpenError_3, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_FILE_NOT_FOUND)
				{
					MessageBox(hWnd, IsletimSistemi_OpenError_3, Hata, MB_ICONERROR | MB_OK);
				}
				else if (GetLastError() == ERROR_ACCESS_DENIED)
				{
					MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
				}
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED)
			{
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
			}
			break;

		case IDC_BTN_WINDOWS_4:
			DiskTamir();
			ShowWindow(hWnd, SW_MINIMIZE);
			break;

		case IDC_BTN_WINDOWS_5: system("driverquery && pause");
			if (GetLastError() == ERROR_APP_INIT_FAILURE)
			{
				MessageBox(hWnd, IsletimSistemi_Error_4, Hata, MB_ICONERROR | MB_OK);
			}
			else if (GetLastError() == ERROR_ACCESS_DENIED)
			{
				MessageBox(hWnd, Yetkisiz_Hata_1, YHB_1, MB_ICONERROR | MB_OK);
			}
			break;

		case IDCANCEL:
			EndDialog(hWnd, 0);
			return TRUE;
			break;
		}

	// ekrandaki renkleri ayarlama
	case WM_CTLCOLORSTATIC:
		HDC hdcStatic;
		hdcStatic = (HDC)wParam;
		SetTextColor(hdcStatic, RGB(255, 255, 255));
		SetBkMode(hdcStatic, TRANSPARENT);
		return (LRESULT)GetStockObject(NULL_BRUSH);
		break;

	// ekraný kapama, (kullanýcý isteðine baðlý, evet hayýr)
	case WM_CLOSE:
		if (MessageBox(hWnd, WinApi_Program_Kapat_1, Uyari, MB_ICONEXCLAMATION | MB_OKCANCEL) == IDOK)
		{
			DestroyWindow(hWnd);
		}
		break;

	// ekran yoketme yani kapama
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, msg, wParam, lParam);
		break;
	}

	return 0; // baþarýlý
} // GENEL SONU
#endif // winapi_main_h