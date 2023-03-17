/*
* Slavnem Tarafýndan Yapýlmýþ Olup Kar Amacý Gütmez!
* Açýk Kaynak Kod
* 2021
*/

// ComboBox Boyut
#define _CMBOX_1_BOYUT 5
#define _CMBOX_2_BOYUT 15
#define _CMBOX_3_BOYUT 11
#define _CMBOX_4_BOYUT 7
#define _CMBOX_5_BOYUT 7

// GENEL STATIC
const TCHAR* ComboBox_1[] = { _T(""), _T("Paylaþýlan Klasör"), _T("Execution Oluþturma"), _T("Senkronizasyon"), _T("Büyüteç") };
const TCHAR* ComboBox_2[] = { _T(""), _T("Kontrol Paneli"), _T("Ýnternet Özellikleri"), _T("Oyun Kontrolleri"), _T("Fare Özellikleri")
, _T("Ses Ayarlarý"), _T("Program Kaldýr"), _T("Güç Özellikleri"), _T("Bölge Ve Dil"), _T("Kayýt Defteri"), _T("Hizmetler"), _T("Yerel Grup Ekraný")
, _T("Sertifikalar"), _T("Ipv4 & Ipv6 Adresi"), _T("Kullanýcýlar")};
const TCHAR* ComboBox_3[] = { _T(""), _T("Disk Yönetimi"), _T("Aygýt Yönetimi"), _T("Olay Görüntüleyici"), _T("DirectX"), _T("Performans Ýzleyici")
, _T("Eriþim Defteri"), _T("Görev Yöneticisi"), _T("Bilgisayar Yönetimi"), _T("Disk Temizleyici"), _T("Karakter Ayarý") };
const TCHAR* ComboBox_4[] = { _T(""), _T("Zamanlý Kapat"), _T("Oturumu Kapat"), _T("Yeniden Baþlat"), _T("Uyku Modu"), _T("Bilgisayarý Kilitle"), _T("Ýptal") };
const TCHAR* ComboBox_5[] = { _T(""), _T("Bilgisayar Bilgisi"), _T("Hizmetler"), _T("Not Defteri"), _T("Kayýt Defteri"), _T("Hesap Makinesi"), _T("Microsoft Paint") };

// Hatalar
const TCHAR Yetkisiz_Hata_1[] = _T("Yetkisiz Deneme!, Yetkili Kullanýcý Ýle Deneyiniz!");
const TCHAR YHB_1[] = _T("Yetki Hatasý");
const TCHAR Dosya_Bulunamadi_1[] = _T("Malesef Böyle Bir Dosya Veya Program Yok!");
const TCHAR DBB_1[] = _T("Dosya Hatasý");
const TCHAR Dosya_Acilamadi_1[] = _T("Programý Þuanda Çalýþtýramýyoruz, Lütfen Daha Sonra Tekrar Deneyiniz!");
const TCHAR DAB_1[] = _T("Çalýþmama Hatasý");
const TCHAR Dosya_Konum_Hatasi_1[] = _T("Ýþlem Oluþturulamadý! Dosya Konumunu Doðru Seçtiðinizden Emin Olunuz!");
const TCHAR DKHB_1[] = _T("Konum Hatasý");


// Sorular
const TCHAR Bilgisayar_Zamanli_Ayarla_1[] = _T("Bilgisayarýnýzý zamanlý þekilde ayarlamak istiyor musunuz?");
const TCHAR BZKB_1[] = _T("Zamanlý Kapatma");

const TCHAR AtikDosya_Temizleme_1[] = _T("Atýk Dosyalarý Silmek Ýster misiniz?");
const TCHAR ADT_1[] = _T("Atýk Dosyalar");

const TCHAR InternetBellegi_Temizleme_1[] = _T("Ýnternet Belleðini Temizlemek Ýster misiniz?");
const TCHAR IBT_1[] = _T("Ýnternet Belleði");

const TCHAR WinApi_Program_Kapat_1[] = _T("Programý Kapatmak Ýstediðinize Emin misiniz?");


// DiskTamir Hata
const TCHAR Disk_Tamir_Bulunamadi_1[] = _T("DiskTamir.bat bulunamadý! Oluþturmak ister misiniz?");
const TCHAR DTBB_1[] = _T("DiskTamir.bat Hatasý");

const TCHAR Disk_Tamir_Baslat_1[] = _T("Disk Tamir iþlemini baþlatýrsanýz eðer, bir daha durdurmamanýz lazým yoksa diske zarar verebilir!, Bilgisayar Yeniden baþlatýldýðýnda HDD veya SSD hýzýna göre saatler sürebilir!Kabul Ediyor musunuz ?");
const TCHAR DTBB_2[] = _T("Tamir Uyarý");

const TCHAR Disk_Tamir_Baslamama_1[] = _T("Malesef Fix.bat'ý çalýþtýramýyoruz! Tekrar Deneyiniz");
const TCHAR DTBB_3[] = _T("Tamir Baþlatmama");

const TCHAR Disk_Tamir_Bulunamiyor_1[] = _T("Malesef DiskTamir.bat bulunmaýyor! Silmediðinizden ve Adýný deðiþtirmediðinizden emin olunuz!");
const TCHAR DTBB_4[] = _T("DiskTamir.bat Bulunamýyor");


// Button, Static, Edit
const TCHAR Bos[] = _T("");

const TCHAR Uyari[] = _T("Uyarý!");
const TCHAR Hata[] = _T("Hata!");

// Bilgisayar Static //
const TCHAR Bilgisayar_Static_1[] = _T("Bilgisayar");
const TCHAR Bilgisayar_Static_2[] = _T("| Program Adý Veya Yeri |");
// Bilgisayar Button //
const TCHAR Bilgisayar_Button_1[] = _T("Basit Programlar");
const TCHAR Bilgisayar_Button_2[] = _T("Hizmetler");
const TCHAR Bilgisayar_Button_3[] = _T("Not Defteri");
const TCHAR Bilgisayar_Button_4[] = _T("Kayýt Defteri");
const TCHAR Bilgisayar_Button_5[] = _T("Hesap Makinesi");
const TCHAR Bilgisayar_Button_6[] = _T("Çalýþtýr");
const TCHAR Bilgisayar_Button_7[] = _T("Kapat");
const TCHAR Bilgisayar_Button_8[] = _T("Bul");
const TCHAR Bilgisayar_Button_9[] = _T("Alternatif Çalýþtýr");
const TCHAR Bilgisayar_Button_10[] = _T("Alternatif Kapat");
const TCHAR Bilgisayar_Button_11[] = _T("Çalýþan Uygulamalar");

// Kontrol Static //
const TCHAR Kontrol_Static_1[] = _T("Kontrol");
// Kontrol Button //
const TCHAR Kontrol_Button_1[] = _T("Atýk Dosyalar");
const TCHAR Kontrol_Button_2[] = _T("Ýnternet Belleði");
const TCHAR Kontrol_Button_3[] = _T("Win32 Uygulama");
const TCHAR Kontrol_Button_4[] = _T("Kontrol");
const TCHAR Kontrol_Button_5[] = _T("Özellikler");

// Zamanlayýcý Static //
const TCHAR Zamanlayici_Static_1[] = _T("Zamanlayýcý");
const TCHAR Zamanlayici_Static_2[] = _T("Süre");
const TCHAR Zamanlayici_Static_3[] = _T("Dikkat! 1Saat = 60Dakika = 3600Saniye");
const TCHAR Zamanlayici_Static_4[] = _T("Program Adý");
const TCHAR Zamanlayici_Static_5[] = _T("Süre");
const TCHAR Zamanlayici_Static_6[] = _T("Tam Kapatmasý Ýçin Yetkili Kullanýcý Olunuz\n Zamanlama Çalýþtýktan Sonra Ekraný Küçültünüz");
// Zamanlayýcý Button //
const TCHAR Zamanlayici_Button_1[] = _T("Oturumu Kapat");
const TCHAR Zamanlayici_Button_2[] = _T("Yeniden Baþlat");
const TCHAR Zamanlayici_Button_3[] = _T("Uyku Modu");
const TCHAR Zamanlayici_Button_4[] = _T("Bilgisayarý Kapat");
const TCHAR Zamanlayici_Button_5[] = _T("Bilgisayarý Kitle");
const TCHAR Zamanlayici_Button_6[] = _T("Ýptal");
const TCHAR Zamanlayici_Button_7[] = _T("Zamanlý Kapat");
const TCHAR Zamanlayici_Button_8[] = _T("Uygulama Zamanlayýcýyý Baþlat");
// Zamanlayýcý TextBox //
const TCHAR Zamanlayici_Textbox_1[] = _T("Örnek: ProgramAdý.exe");

// Ýþletim Sistemi Static //
const TCHAR IsletimSistemi_Static_1[] = _T("Ýþletim Sistemi");
// Ýþletim Sistemi Button //
const TCHAR IsletimSistemi_Button_1[] = _T("Windows Sürümü");
const TCHAR IsletimSistemi_Button_2[] = _T("Powershell / Cmd");
const TCHAR IsletimSistemi_Button_3[] = _T("Aygýt Yöneticisi");
const TCHAR IsletimSistemi_Button_4[] = _T("C: Disk Tamir");
const TCHAR IsletimSistemi_Button_5[] = _T("Sürücü Liste");

// Sürüm Static
const TCHAR WinApi_Static_1[] = _T("Winapi - Kararlý Sürüm 1.2.3");

// Slavnem
const TCHAR Slavnem[] = _T("Slavnem");
const TCHAR Slavnem_Website[] = _T("https://www.slavnem.com");

// Özel
// Bilgisayar Hata //
const TCHAR Bilgisayar_Error_1[] = _T("Malesef Sistem Bilgisini Gösteremiyoruz, msinfo32.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_2[] = _T("Malesef Hizmetleri Açamýyoruz, msconfig.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_3[] = _T("Malesef Not Defterini Açamýyoruz, notepad.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_4[] = _T("Malesef Kayýt Defterini Açamýyoruz, regedit.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz");
const TCHAR Bilgisayar_Error_5[] = _T("Malesef Hesap Makinesini Açamýyoruz, calc.exe'nin olup olmadýðýný kontrol ediniz ve tekrar deneyiniz");

const TCHAR Bilgisayar_OpenError_1[] = _T("Malesef Sistem Bilgisini Açamýyoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_2[] = _T("Malesef Hizmetleri Açamýyoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_3[] = _T("Malesef Not Defterini Açamýyoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_4[] = _T("Malesef Kayýt Defterini Açamýyoruz, Sonra tekrar deneyiniz!");
const TCHAR Bilgisayar_OpenError_5[] = _T("Malesef Hesap Makinesini Açamýyoruz, Sonra tekrar deneyiniz!");

// Kontrol Soru //
const TCHAR Kontrol_Question_1[] = _T("Oturumu Kapatmak Ýstiyor musunuz?");
const TCHAR Kontrol_Question_2[] = _T("Bilgisayarý 3 Saniye Ýçinde Yeniden Baþlatmak Ýstiyor musunuz?");
const TCHAR Kontrol_Question_3[] = _T("Bilgisayarý Uyku Moduna Almak Ýstiyor musunuz?");
const TCHAR Kontrol_Question_4[] = _T("Bilgisayarý 3 Saniye Ýçinde Kapatmak Ýstiyor musunuz?");
const TCHAR Kontrol_Question_5[] = _T("Bilgisayarý Kitlemek Ýstiyor musunuz?");

// Ýþletim Sistemi Hata //
const TCHAR IsletimSistemi_Error_1[] = _T("Winver.exe bulunamýyor! Windows Versiyonunu gösteremiyoruz!");
const TCHAR IsletimSistemi_Error_2[] = _T("PowerShell ve Cmd'nin olduðundan emin olunuz ve yetkili kullanýcý ile çalýþtýrmayý deneyiniz!");
const TCHAR IsletimSistemi_Error_3[] = _T("Aygýt Yöneticisi Bulunamadý!");
const TCHAR IsletimSistemi_Error_4[] = _T("Sürücü Listesini görüntülüyemiyoruz!");

const TCHAR IsletimSistemi_OpenError_1[] = _T("Windows Versiyonunu gösteremiyoruz, Sonra tekrar deneyiniz!");
const TCHAR IsletimSistemi_OpenError_2[] = _T("PowerShell ve Cmd'yi çalýþtýramýyoruz. Sonra tekrar deneyiniz!");
const TCHAR IsletimSistemi_OpenError_3[] = _T("Malesef Aygýt Yöneticisini çalýþtýramýyoruz, Sonra Tekrar deneyiniz!");