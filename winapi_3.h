/*
* Slavnem Tarafýndan Yapýlmýþ Olup Kar Amacý Gütmez!
* Açýk Kaynak Kod
* Tecrübe Seviyesi = Acemi
* 2021
*/
#include "winapi.h"
#include "winapi_2.h"

// Hatalar
const TCHAR Yetkisiz_Hata_1[] = "Yetkisiz Deneme!, Yetkili Kullanýcý Ýle Deneyiniz!";
const TCHAR YHB_1[] = "Yetki Hatasý";
const TCHAR Dosya_Bulunamadi_1[] = "Malesef Böyle Bir Dosya Veya Program Yok!";
const TCHAR DBB_1[] = "Dosya Hatasý";
const TCHAR Dosya_Acilamadi_1[] = "Programý Þuanda Çalýþtýramýyoruz, Lütfen Daha Sonra Tekrar Deneyiniz!";
const TCHAR DAB_1[] = "Çalýþmama Hatasý";
const TCHAR Dosya_Konum_Hatasi_1[] = "Ýþlem Oluþturulamadý! Dosya Konumunu Doðru Seçtiðinizden Emin Olunuz!";
const TCHAR DKHB_1[] = "Konum Hatasý";


// Sorular
const TCHAR Bilgisayar_Zamanli_Ayarla_1[] = "Bilgisayarýnýzý zamanlý þekilde ayarlamak istiyor musunuz?";
const TCHAR BZKB_1[] = "Zamanlý Kapatma";

const TCHAR AtikDosya_Temizleme_1[] = "Atýk Dosyalarý Silmek Ýster misiniz?";
const TCHAR ADT_1[] = "Atýk Dosyalar";

const TCHAR InternetBellegi_Temizleme_1[] = "Ýnternet Belleðini Temizlemek Ýster misiniz?";
const TCHAR IBT_1[] = "Ýnternet Belleði";

const TCHAR WinApi_Program_Kapat_1[] = "Programý Kapatmak Ýstediðinize Emin misiniz?";


// DiskTamir Hata
const TCHAR Disk_Tamir_Bulunamadi_1[] = "DiskTamir.bat bulunamadý! Oluþturmak ister misiniz?";
const TCHAR DTBB_1[] = "DiskTamir.bat Hatasý";

const TCHAR Disk_Tamir_Baslat_1[] = "Disk Tamir iþlemini baþlatýrsanýz eðer, bir daha durdurmamanýz lazým yoksa diske zarar verebilir!, Bilgisayar Yeniden baþlatýldýðýnda HDD veya SSD hýzýna göre saatler sürebilir!Kabul Ediyor musunuz ?";
const TCHAR DTBB_2[] = "Tamir Uyarý";

const TCHAR Disk_Tamir_Baslamama_1[] = "Malesef Fix.bat'ý çalýþtýramýyoruz! Tekrar Deneyiniz";
const TCHAR DTBB_3[] = "Tamir Baþlatmama";

const TCHAR Disk_Tamir_Bulunamiyor_1[] = "Malesef DiskTamir.bat bulunmaýyor! Silmediðinizden ve Adýný deðiþtirmediðinizden emin olunuz!";
const TCHAR DTBB_4[] = "DiskTamir.bat Bulunamýyor";


// Button, Static, Edit
const TCHAR Bos[] = "";

const TCHAR Uyari[] = "Uyarý!";
const TCHAR Hata[] = "Hata!";

// Bilgisayar Static //
const TCHAR Bilgisayar_Static_1[] = "Bilgisayar";
const TCHAR Bilgisayar_Static_2[] = "| Program Adý Veya Yeri |";
// Bilgisayar Button //
const TCHAR Bilgisayar_Button_1[] = "Basit Programlar";
const TCHAR Bilgisayar_Button_2[] = "Hizmetler";
const TCHAR Bilgisayar_Button_3[] = "Not Defteri";
const TCHAR Bilgisayar_Button_4[] = "Kayýt Defteri";
const TCHAR Bilgisayar_Button_5[] = "Hesap Makinesi";
const TCHAR Bilgisayar_Button_6[] = "Çalýþtýr";
const TCHAR Bilgisayar_Button_7[] = "Kapat";
const TCHAR Bilgisayar_Button_8[] = "Bul";
const TCHAR Bilgisayar_Button_9[] = "Alternatif Çalýþtýr";
const TCHAR Bilgisayar_Button_10[] = "Alternatif Kapat";
const TCHAR Bilgisayar_Button_11[] = "Çalýþan Uygulamalar";

// Kontrol Static //
const TCHAR Kontrol_Static_1[] = "Kontrol";
// Kontrol Button //
const TCHAR Kontrol_Button_1[] = "Atýk Dosyalar";
const TCHAR Kontrol_Button_2[] = "Ýnternet Belleði";
const TCHAR Kontrol_Button_3[] = "Win32 Uygulama";
const TCHAR Kontrol_Button_4[] = "Kontrol";
const TCHAR Kontrol_Button_5[] = "Özellikler";

// Zamanlayýcý Static //
const TCHAR Zamanlayici_Static_1[] = "Zamanlayýcý";
const TCHAR Zamanlayici_Static_2[] = "Süre";
const TCHAR Zamanlayici_Static_3[] = "Dikkat! 1Saat = 60Dakika = 3600Saniye";
const TCHAR Zamanlayici_Static_4[] = "Program Adý";
const TCHAR Zamanlayici_Static_5[] = "Süre";
const TCHAR Zamanlayici_Static_6[] = "    Tam Kapatmasý Ýçin Yetkili Kullanýcý Olunuz\n Zamanlama Çalýþtýktan Sonra Ekraný Küçültünüz";
// Zamanlayýcý Button //
const TCHAR Zamanlayici_Button_1[] = "Oturumu Kapat";
const TCHAR Zamanlayici_Button_2[] = "Yeniden Baþlat";
const TCHAR Zamanlayici_Button_3[] = "Uyku Modu";
const TCHAR Zamanlayici_Button_4[] = "Bilgisayarý Kapat";
const TCHAR Zamanlayici_Button_5[] = "Bilgisayarý Kitle";
const TCHAR Zamanlayici_Button_6[] = "Ýptal";
const TCHAR Zamanlayici_Button_7[] = "Zamanlý Kapat";
const TCHAR Zamanlayici_Button_8[] = "Uygulama Zamanlayýcýyý Baþlat";
// Zamanlayýcý TextBox //
const TCHAR Zamanlayici_Textbox_1[] = "Örnek: ProgramAdý.exe";

// Ýþletim Sistemi Static //
const TCHAR IsletimSistemi_Static_1[] = "Ýþletim Sistemi";
// Ýþletim Sistemi Button //
const TCHAR IsletimSistemi_Button_1[] = "Windows Sürümü";
const TCHAR IsletimSistemi_Button_2[] = "Powershell / Cmd";
const TCHAR IsletimSistemi_Button_3[] = "Aygýt Yöneticisi";
const TCHAR IsletimSistemi_Button_4[] = "C: Disk Tamir";
const TCHAR IsletimSistemi_Button_5[] = "Sürücü Liste";


// Özel
// Bilgisayar Hata //
const TCHAR Bilgisayar_Error_1[] = "Malesef Sistem Bilgisini Gösteremiyoruz, msinfo32.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_2[] = "Malesef Hizmetleri Açamýyoruz, msconfig.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_3[] = "Malesef Not Defterini Açamýyoruz, notepad.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_4[] = "Malesef Kayýt Defterini Açamýyoruz, regedit.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz";
const TCHAR Bilgisayar_Error_5[] = "Malesef Hesap Makinesini Açamýyoruz, calc.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz";

const TCHAR Bilgisayar_OpenError_1[] = "Malesef Sistem Bilgisini Açamýyoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_2[] = "Malesef Hizmetleri Açamýyoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_3[] = "Malesef Not Defterini Açamýyoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_4[] = "Malesef Kayýt Defterini Açamýyoruz, Sonra tekrar deneyiniz!";
const TCHAR Bilgisayar_OpenError_5[] = "Malesef Hesap Makinesini Açamýyoruz, Sonra tekrar deneyiniz!";

// Kontrol Soru //
const TCHAR Kontrol_Question_1[] = "Oturumu Kapatmak Ýstiyor musunuz?";
const TCHAR Kontrol_Question_2[] = "Bilgisayarý 3 Saniye Ýçinde Yeniden Baþlatmak Ýstiyor musunuz?";
const TCHAR Kontrol_Question_3[] = "Bilgisayarý Uyku Moduna Almak Ýstiyor musunuz?";
const TCHAR Kontrol_Question_4[] = "Bilgisayarý 3 Saniye Ýçinde Kapatmak Ýstiyor musunuz?";
const TCHAR Kontrol_Question_5[] = "Bilgisayarý Kitlemek Ýstiyor musunuz?";

// Ýþletim Sistemi Hata //
const TCHAR IsletimSistemi_Error_1[] = "Winver.exe bulunamýyor! Windows Versiyonunu gösteremiyoruz!";
const TCHAR IsletimSistemi_Error_2[] = "PowerShell ve Cmd'nin olduðundan emin olunuz ve yetkili kullanýcý ile çalýþtýrmayý deneyiniz!";
const TCHAR IsletimSistemi_Error_3[] = "Aygýt Yöneticisi Bulunamadý!";
const TCHAR IsletimSistemi_Error_4[] = "Sürücü Listesini görüntülüyemiyoruz!";

const TCHAR IsletimSistemi_OpenError_1[] = "Windows Versiyonunu gösteremiyoruz, Sonra tekrar deneyiniz!";
const TCHAR IsletimSistemi_OpenError_2[] = "PowerShell ve Cmd'yi çalýþtýramýyoruz. Sonra tekrar deneyiniz!";
const TCHAR IsletimSistemi_OpenError_3[] = "Malesef Aygýt Yöneticisini çalýþtýramýyoruz, Sonra Tekrar deneyiniz!";