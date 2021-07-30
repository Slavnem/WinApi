/*
* Slavnem Taraf�ndan Yap�lm�� Olup Kar Amac� G�tmez!
* A��k Kaynak Kod
* Tecr�be Seviyesi = Acemi
* 2021
*/
#include "winapi.h"
#include "winapi_2.h"

// Hatalar
const TCHAR Yetkisiz_Hata_1[] = "Yetkisiz Deneme!, Yetkili Kullan�c� �le Deneyiniz!";
const TCHAR YHB_1[] = "Yetki Hatas�";
const TCHAR Dosya_Bulunamadi_1[] = "Malesef B�yle Bir Dosya Veya Program Yok!";
const TCHAR DBB_1[] = "Dosya Hatas�";
const TCHAR Dosya_Acilamadi_1[] = "Program� �uanda �al��t�ram�yoruz, L�tfen Daha Sonra Tekrar Deneyiniz!";
const TCHAR DAB_1[] = "�al��mama Hatas�";
const TCHAR Dosya_Konum_Hatasi_1[] = "��lem Olu�turulamad�! Dosya Konumunu Do�ru Se�ti�inizden Emin Olunuz!";
const TCHAR DKHB_1[] = "Konum Hatas�";


// Sorular
const TCHAR Bilgisayar_Zamanli_Ayarla_1[] = "Bilgisayar�n�z� zamanl� �ekilde ayarlamak istiyor musunuz?";
const TCHAR BZKB_1[] = "Zamanl� Kapatma";

const TCHAR AtikDosya_Temizleme_1[] = "At�k Dosyalar� Silmek �ster misiniz?";
const TCHAR ADT_1[] = "At�k Dosyalar";

const TCHAR InternetBellegi_Temizleme_1[] = "�nternet Belle�ini Temizlemek �ster misiniz?";
const TCHAR IBT_1[] = "�nternet Belle�i";

const TCHAR WinApi_Program_Kapat_1[] = "Program� Kapatmak �stedi�inize Emin misiniz?";


// DiskTamir Hata
const TCHAR Disk_Tamir_Bulunamadi_1[] = "DiskTamir.bat bulunamad�! Olu�turmak ister misiniz?";
const TCHAR DTBB_1[] = "DiskTamir.bat Hatas�";

const TCHAR Disk_Tamir_Baslat_1[] = "Disk Tamir i�lemini ba�lat�rsan�z e�er, bir daha durdurmaman�z laz�m yoksa diske zarar verebilir!, Bilgisayar Yeniden ba�lat�ld���nda HDD veya SSD h�z�na g�re saatler s�rebilir!Kabul Ediyor musunuz ?";
const TCHAR DTBB_2[] = "Tamir Uyar�";

const TCHAR Disk_Tamir_Baslamama_1[] = "Malesef Fix.bat'� �al��t�ram�yoruz! Tekrar Deneyiniz";
const TCHAR DTBB_3[] = "Tamir Ba�latmama";

const TCHAR Disk_Tamir_Bulunamiyor_1[] = "Malesef DiskTamir.bat bulunma�yor! Silmedi�inizden ve Ad�n� de�i�tirmedi�inizden emin olunuz!";
const TCHAR DTBB_4[] = "DiskTamir.bat Bulunam�yor";


// Button, Static, Edit
const TCHAR Bos[] = "";

const TCHAR Uyari[] = "Uyar�!";
const TCHAR Hata[] = "Hata!";

// Bilgisayar Static //
const TCHAR Bilgisayar_Static_1[] = "Bilgisayar";
const TCHAR Bilgisayar_Static_2[] = "| Program Ad� Veya Yeri |";
// Bilgisayar Button //
const TCHAR Bilgisayar_Button_1[] = "Basit Programlar";
const TCHAR Bilgisayar_Button_2[] = "Hizmetler";
const TCHAR Bilgisayar_Button_3[] = "Not Defteri";
const TCHAR Bilgisayar_Button_4[] = "Kay�t Defteri";
const TCHAR Bilgisayar_Button_5[] = "Hesap Makinesi";
const TCHAR Bilgisayar_Button_6[] = "�al��t�r";
const TCHAR Bilgisayar_Button_7[] = "Kapat";
const TCHAR Bilgisayar_Button_8[] = "Bul";
const TCHAR Bilgisayar_Button_9[] = "Alternatif �al��t�r";
const TCHAR Bilgisayar_Button_10[] = "Alternatif Kapat";
const TCHAR Bilgisayar_Button_11[] = "�al��an Uygulamalar";

// Kontrol Static //
const TCHAR Kontrol_Static_1[] = "Kontrol";
// Kontrol Button //
const TCHAR Kontrol_Button_1[] = "At�k Dosyalar";
const TCHAR Kontrol_Button_2[] = "�nternet Belle�i";
const TCHAR Kontrol_Button_3[] = "Win32 Uygulama";
const TCHAR Kontrol_Button_4[] = "Kontrol";
const TCHAR Kontrol_Button_5[] = "�zellikler";

// Zamanlay�c� Static //
const TCHAR Zamanlayici_Static_1[] = "Zamanlay�c�";
const TCHAR Zamanlayici_Static_2[] = "S�re";
const TCHAR Zamanlayici_Static_3[] = "Dikkat! 1Saat = 60Dakika = 3600Saniye";
const TCHAR Zamanlayici_Static_4[] = "Program Ad�";
const TCHAR Zamanlayici_Static_5[] = "S�re";
const TCHAR Zamanlayici_Static_6[] = "    Tam Kapatmas� ��in Yetkili Kullan�c� Olunuz\n Zamanlama �al��t�ktan Sonra Ekran� K���lt�n�z";
// Zamanlay�c� Button //
const TCHAR Zamanlayici_Button_1[] = "Oturumu Kapat";
const TCHAR Zamanlayici_Button_2[] = "Yeniden Ba�lat";
const TCHAR Zamanlayici_Button_3[] = "Uyku Modu";
const TCHAR Zamanlayici_Button_4[] = "Bilgisayar� Kapat";
const TCHAR Zamanlayici_Button_5[] = "Bilgisayar� Kitle";
const TCHAR Zamanlayici_Button_6[] = "�ptal";
const TCHAR Zamanlayici_Button_7[] = "Zamanl� Kapat";
const TCHAR Zamanlayici_Button_8[] = "Uygulama Zamanlay�c�y� Ba�lat";
// Zamanlay�c� TextBox //
const TCHAR Zamanlayici_Textbox_1[] = "�rnek: ProgramAd�.exe";

// ��letim Sistemi Static //
const TCHAR IsletimSistemi_Static_1[] = "��letim Sistemi";
// ��letim Sistemi Button //
const TCHAR IsletimSistemi_Button_1[] = "Windows S�r�m�";
const TCHAR IsletimSistemi_Button_2[] = "Powershell / Cmd";
const TCHAR IsletimSistemi_Button_3[] = "Ayg�t Y�neticisi";
const TCHAR IsletimSistemi_Button_4[] = "C: Disk Tamir";
const TCHAR IsletimSistemi_Button_5[] = "S�r�c� Liste";


// �zel
// Bilgisayar Hata //
const TCHAR Bilgisayar_Error_1[] = "Malesef Sistem Bilgisini G�steremiyoruz, msinfo32.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_2[] = "Malesef Hizmetleri A�am�yoruz, msconfig.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_3[] = "Malesef Not Defterini A�am�yoruz, notepad.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_4[] = "Malesef Kay�t Defterini A�am�yoruz, regedit.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_5[] = "Malesef Hesap Makinesini A�am�yoruz, calc.exe'nin olup olmad���n� kontrol ediniz ve tekrar deneyiniz";

const TCHAR Bilgisayar_OpenError_1[] = "Malesef Sistem Bilgisini A�am�yoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_2[] = "Malesef Hizmetleri A�am�yoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_3[] = "Malesef Not Defterini A�am�yoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_4[] = "Malesef Kay�t Defterini A�am�yoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_5[] = "Malesef Hesap Makinesini A�am�yoruz, Sonra tekrar deneyiniz!";

// Kontrol Soru //
const TCHAR Kontrol_Question_1[] = "Oturumu Kapatmak �stiyor musunuz?";
const TCHAR Kontrol_Question_2[] = "Bilgisayar� 3 Saniye ��inde Yeniden Ba�latmak �stiyor musunuz?";
const TCHAR Kontrol_Question_3[] = "Bilgisayar� Uyku Moduna Almak �stiyor musunuz?";
const TCHAR Kontrol_Question_4[] = "Bilgisayar� 3 Saniye ��inde Kapatmak �stiyor musunuz?";
const TCHAR Kontrol_Question_5[] = "Bilgisayar� Kitlemek �stiyor musunuz?";

// ��letim Sistemi Hata //
const TCHAR IsletimSistemi_Error_1[] = "Winver.exe bulunam�yor! Windows Versiyonunu g�steremiyoruz!";
const TCHAR IsletimSistemi_Error_2[] = "PowerShell ve Cmd'nin oldu�undan emin olunuz ve yetkili kullan�c� ile �al��t�rmay� deneyiniz!";
const TCHAR IsletimSistemi_Error_3[] = "Ayg�t Y�neticisi Bulunamad�!";
const TCHAR IsletimSistemi_Error_4[] = "S�r�c� Listesini g�r�nt�l�yemiyoruz!";

const TCHAR IsletimSistemi_OpenError_1[] = "Windows Versiyonunu g�steremiyoruz, Sonra tekrar deneyiniz!";
const TCHAR IsletimSistemi_OpenError_2[] = "PowerShell ve Cmd'yi �al��t�ram�yoruz. Sonra tekrar deneyiniz!";
const TCHAR IsletimSistemi_OpenError_3[] = "Malesef Ayg�t Y�neticisini �al��t�ram�yoruz, Sonra Tekrar deneyiniz!";