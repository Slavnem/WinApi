/*
* Slavnem Taraf�ndan Yap�lm�� Olup Kar Amac� G�tmez!
* A��k Kaynak Kod
* 2021
*/

// ComboBox Boyut
#define _CMBOX_1_BOYUT 5
#define _CMBOX_2_BOYUT 15
#define _CMBOX_3_BOYUT 11
#define _CMBOX_4_BOYUT 7
#define _CMBOX_5_BOYUT 7

// GENEL STATIC
const TCHAR* ComboBox_1[] = { _T(""), _T("Payla��lan Klas�r"), _T("Execution Olu�turma"), _T("Senkronizasyon"), _T("B�y�te�") };
const TCHAR* ComboBox_2[] = { _T(""), _T("Kontrol Paneli"), _T("�nternet �zellikleri"), _T("Oyun Kontrolleri"), _T("Fare �zellikleri")
, _T("Ses Ayarlar�"), _T("Program Kald�r"), _T("G�� �zellikleri"), _T("B�lge Ve Dil"), _T("Kay�t Defteri"), _T("Hizmetler"), _T("Yerel Grup Ekran�")
, _T("Sertifikalar"), _T("Ipv4 & Ipv6 Adresi"), _T("Kullan�c�lar")};
const TCHAR* ComboBox_3[] = { _T(""), _T("Disk Y�netimi"), _T("Ayg�t Y�netimi"), _T("Olay G�r�nt�leyici"), _T("DirectX"), _T("Performans �zleyici")
, _T("Eri�im Defteri"), _T("G�rev Y�neticisi"), _T("Bilgisayar Y�netimi"), _T("Disk Temizleyici"), _T("Karakter Ayar�") };
const TCHAR* ComboBox_4[] = { _T(""), _T("Zamanl� Kapat"), _T("Oturumu Kapat"), _T("Yeniden Ba�lat"), _T("Uyku Modu"), _T("Bilgisayar� Kilitle"), _T("�ptal") };
const TCHAR* ComboBox_5[] = { _T(""), _T("Bilgisayar Bilgisi"), _T("Hizmetler"), _T("Not Defteri"), _T("Kay�t Defteri"), _T("Hesap Makinesi"), _T("Microsoft Paint") };

// Hatalar
const TCHAR Yetkisiz_Hata_1[] = _T("Yetkisiz Deneme!, Yetkili Kullan�c� �le Deneyiniz!");
const TCHAR YHB_1[] = _T("Yetki Hatas�");
const TCHAR Dosya_Bulunamadi_1[] = _T("Malesef B�yle Bir Dosya Veya Program Yok!");
const TCHAR DBB_1[] = _T("Dosya Hatas�");
const TCHAR Dosya_Acilamadi_1[] = _T("Program� �uanda �al��t�ram�yoruz, L�tfen Daha Sonra Tekrar Deneyiniz!");
const TCHAR DAB_1[] = _T("�al��mama Hatas�");
const TCHAR Dosya_Konum_Hatasi_1[] = _T("��lem Olu�turulamad�! Dosya Konumunu Do�ru Se�ti�inizden Emin Olunuz!");
const TCHAR DKHB_1[] = _T("Konum Hatas�");


// Sorular
const TCHAR Bilgisayar_Zamanli_Ayarla_1[] = _T("Bilgisayar�n�z� zamanl� �ekilde ayarlamak istiyor musunuz?");
const TCHAR BZKB_1[] = _T("Zamanl� Kapatma");

const TCHAR AtikDosya_Temizleme_1[] = _T("At�k Dosyalar� Silmek �ster misiniz?");
const TCHAR ADT_1[] = _T("At�k Dosyalar");

const TCHAR InternetBellegi_Temizleme_1[] = _T("�nternet Belle�ini Temizlemek �ster misiniz?");
const TCHAR IBT_1[] = _T("�nternet Belle�i");

const TCHAR WinApi_Program_Kapat_1[] = _T("Program� Kapatmak �stedi�inize Emin misiniz?");


// DiskTamir Hata
const TCHAR Disk_Tamir_Bulunamadi_1[] = _T("DiskTamir.bat bulunamad�! Olu�turmak ister misiniz?");
const TCHAR DTBB_1[] = _T("DiskTamir.bat Hatas�");

const TCHAR Disk_Tamir_Baslat_1[] = _T("Disk Tamir i�lemini ba�lat�rsan�z e�er, bir daha durdurmaman�z laz�m yoksa diske zarar verebilir!, Bilgisayar Yeniden ba�lat�ld���nda HDD veya SSD h�z�na g�re saatler s�rebilir!Kabul Ediyor musunuz ?");
const TCHAR DTBB_2[] = _T("Tamir Uyar�");

const TCHAR Disk_Tamir_Baslamama_1[] = _T("Malesef Fix.bat'� �al��t�ram�yoruz! Tekrar Deneyiniz");
const TCHAR DTBB_3[] = _T("Tamir Ba�latmama");

const TCHAR Disk_Tamir_Bulunamiyor_1[] = _T("Malesef DiskTamir.bat bulunma�yor! Silmedi�inizden ve Ad�n� de�i�tirmedi�inizden emin olunuz!");
const TCHAR DTBB_4[] = _T("DiskTamir.bat Bulunam�yor");


// Button, Static, Edit
const TCHAR Bos[] = _T("");

const TCHAR Uyari[] = _T("Uyar�!");
const TCHAR Hata[] = _T("Hata!");

// Bilgisayar Static //
const TCHAR Bilgisayar_Static_1[] = _T("Bilgisayar");
const TCHAR Bilgisayar_Static_2[] = _T("| Program Ad� Veya Yeri |");
// Bilgisayar Button //
const TCHAR Bilgisayar_Button_1[] = _T("Basit Programlar");
const TCHAR Bilgisayar_Button_2[] = _T("Hizmetler");
const TCHAR Bilgisayar_Button_3[] = _T("Not Defteri");
const TCHAR Bilgisayar_Button_4[] = _T("Kay�t Defteri");
const TCHAR Bilgisayar_Button_5[] = _T("Hesap Makinesi");
const TCHAR Bilgisayar_Button_6[] = _T("�al��t�r");
const TCHAR Bilgisayar_Button_7[] = _T("Kapat");
const TCHAR Bilgisayar_Button_8[] = _T("Bul");
const TCHAR Bilgisayar_Button_9[] = _T("Alternatif �al��t�r");
const TCHAR Bilgisayar_Button_10[] = _T("Alternatif Kapat");
const TCHAR Bilgisayar_Button_11[] = _T("�al��an Uygulamalar");

// Kontrol Static //
const TCHAR Kontrol_Static_1[] = _T("Kontrol");
// Kontrol Button //
const TCHAR Kontrol_Button_1[] = _T("At�k Dosyalar");
const TCHAR Kontrol_Button_2[] = _T("�nternet Belle�i");
const TCHAR Kontrol_Button_3[] = _T("Win32 Uygulama");
const TCHAR Kontrol_Button_4[] = _T("Kontrol");
const TCHAR Kontrol_Button_5[] = _T("�zellikler");

// Zamanlay�c� Static //
const TCHAR Zamanlayici_Static_1[] = _T("Zamanlay�c�");
const TCHAR Zamanlayici_Static_2[] = _T("S�re");
const TCHAR Zamanlayici_Static_3[] = _T("Dikkat! 1Saat = 60Dakika = 3600Saniye");
const TCHAR Zamanlayici_Static_4[] = _T("Program Ad�");
const TCHAR Zamanlayici_Static_5[] = _T("S�re");
const TCHAR Zamanlayici_Static_6[] = _T("Tam Kapatmas� ��in Yetkili Kullan�c� Olunuz\n Zamanlama �al��t�ktan Sonra Ekran� K���lt�n�z");
// Zamanlay�c� Button //
const TCHAR Zamanlayici_Button_1[] = _T("Oturumu Kapat");
const TCHAR Zamanlayici_Button_2[] = _T("Yeniden Ba�lat");
const TCHAR Zamanlayici_Button_3[] = _T("Uyku Modu");
const TCHAR Zamanlayici_Button_4[] = _T("Bilgisayar� Kapat");
const TCHAR Zamanlayici_Button_5[] = _T("Bilgisayar� Kitle");
const TCHAR Zamanlayici_Button_6[] = _T("�ptal");
const TCHAR Zamanlayici_Button_7[] = _T("Zamanl� Kapat");
const TCHAR Zamanlayici_Button_8[] = _T("Uygulama Zamanlay�c�y� Ba�lat");
// Zamanlay�c� TextBox //
const TCHAR Zamanlayici_Textbox_1[] = _T("�rnek: ProgramAd�.exe");

// ��letim Sistemi Static //
const TCHAR IsletimSistemi_Static_1[] = _T("��letim Sistemi");
// ��letim Sistemi Button //
const TCHAR IsletimSistemi_Button_1[] = _T("Windows S�r�m�");
const TCHAR IsletimSistemi_Button_2[] = _T("Powershell / Cmd");
const TCHAR IsletimSistemi_Button_3[] = _T("Ayg�t Y�neticisi");
const TCHAR IsletimSistemi_Button_4[] = _T("C: Disk Tamir");
const TCHAR IsletimSistemi_Button_5[] = _T("S�r�c� Liste");

// S�r�m Static
const TCHAR WinApi_Static_1[] = _T("Winapi - Kararl� S�r�m 1.2.3");

// Slavnem
const TCHAR Slavnem[] = _T("Slavnem");
const TCHAR Slavnem_Website[] = _T("https://www.slavnem.com");

// �zel
// Bilgisayar Hata //
const TCHAR Bilgisayar_Error_1[] = _T("Malesef Sistem Bilgisini G�steremiyoruz, msinfo32.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_2[] = _T("Malesef Hizmetleri A�am�yoruz, msconfig.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_3[] = _T("Malesef Not Defterini A�am�yoruz, notepad.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_4[] = _T("Malesef Kay�t Defterini A�am�yoruz, regedit.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_5[] = _T("Malesef Hesap Makinesini A�am�yoruz, calc.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz");

const TCHAR Bilgisayar_OpenError_1[] = _T("Malesef Sistem Bilgisini A�am�yoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_2[] = _T("Malesef Hizmetleri A�am�yoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_3[] = _T("Malesef Not Defterini A�am�yoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_4[] = _T("Malesef Kay�t Defterini A�am�yoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_5[] = _T("Malesef Hesap Makinesini A�am�yoruz, Sonra tekrar deneyiniz!");

// Kontrol Soru //
const TCHAR Kontrol_Question_1[] = _T("Oturumu Kapatmak �stiyor musunuz?");
const TCHAR Kontrol_Question_2[] = _T("Bilgisayar� 3 Saniye ��inde Yeniden Ba�latmak �stiyor musunuz?");
const TCHAR Kontrol_Question_3[] = _T("Bilgisayar� Uyku Moduna Almak �stiyor musunuz?");
const TCHAR Kontrol_Question_4[] = _T("Bilgisayar� 3 Saniye ��inde Kapatmak �stiyor musunuz?");
const TCHAR Kontrol_Question_5[] = _T("Bilgisayar� Kitlemek �stiyor musunuz?");

// ��letim Sistemi Hata //
const TCHAR IsletimSistemi_Error_1[] = _T("Winver.exe bulunam�yor! Windows Versiyonunu g�steremiyoruz!");
const TCHAR IsletimSistemi_Error_2[] = _T("PowerShell ve Cmd'nin oldu�undan emin olunuz ve yetkili kullan�c� ile �al��t�rmay� deneyiniz!");
const TCHAR IsletimSistemi_Error_3[] = _T("Ayg�t Y�neticisi Bulunamad�!");
const TCHAR IsletimSistemi_Error_4[] = _T("S�r�c� Listesini g�r�nt�l�yemiyoruz!");

const TCHAR IsletimSistemi_OpenError_1[] = _T("Windows Versiyonunu g�steremiyoruz, Sonra tekrar deneyiniz!");
const TCHAR IsletimSistemi_OpenError_2[] = _T("PowerShell ve Cmd'yi �al��t�ram�yoruz. Sonra tekrar deneyiniz!");
const TCHAR IsletimSistemi_OpenError_3[] = _T("Malesef Ayg�t Y�neticisini �al��t�ram�yoruz, Sonra Tekrar deneyiniz!");