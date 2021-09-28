/*
* Slavnem Tarafından Yapılmış Olup Kar Amacı Gütmez!
* Açık Kaynak Kod
* Tecrübe Seviyesi = Acemi
* 2021
*/

#include "winapi_includes.h"
#include "winapi_main.h"

	// Hatalar
     const TCHAR Yetkisiz_Hata_1[] = _T("Yetkisiz Deneme!, Yetkili Kullanıcı İle Deneyiniz!");
	 const TCHAR YHB_1[] = _T("Yetki Hatası");
	 const TCHAR Dosya_Bulunamadi_1[] = _T("Malesef Böyle Bir Dosya Veya Program Yok!");
	 const TCHAR DBB_1[] = _T("Dosya Hatası");
	 const TCHAR Dosya_Acilamadi_1[] = _T("Programı Şuanda Çalıştıramıyoruz, Lütfen Daha Sonra Tekrar Deneyiniz!");
	 const TCHAR DAB_1[] = _T("Çalışmama Hatası");
	 const TCHAR Dosya_Konum_Hatasi_1[] = _T("İşlem Oluşturulamadı! Dosya Konumunu Doğru Seçtiğinizden Emin Olunuz!");
	 const TCHAR DKHB_1[] = _T("Konum Hatası");


	// Sorular
	 const TCHAR Bilgisayar_Zamanli_Ayarla_1[] = _T("Bilgisayarınızı zamanlı şekilde ayarlamak istiyor musunuz?");
	 const TCHAR BZKB_1[] = _T("Zamanlı Kapatma");

	 const TCHAR AtikDosya_Temizleme_1[] = _T("Atık Dosyaları Silmek İster misiniz?");
	 const TCHAR ADT_1[] = _T("Atık Dosyalar");

	 const TCHAR InternetBellegi_Temizleme_1[] = _T("İnternet Belleğini Temizlemek İster misiniz?");
	 const TCHAR IBT_1[] = _T("İnternet Belleği");

	 const TCHAR WinApi_Program_Kapat_1[] = _T("Programı Kapatmak İstediğinize Emin misiniz?");


	// DiskTamir Hata
	 const TCHAR Disk_Tamir_Bulunamadi_1[] = _T("DiskTamir.bat bulunamadı! Oluşturmak ister misiniz?");
	 const TCHAR DTBB_1[] = _T("DiskTamir.bat Hatası");

	 const TCHAR Disk_Tamir_Baslat_1[] = _T("Disk Tamir işlemini başlatırsanız eğer, bir daha durdurmamanız lazım yoksa diske zarar verebilir!, Bilgisayar Yeniden başlatıldığında HDD veya SSD hızına göre saatler sürebilir!Kabul Ediyor musunuz ?");
	 const TCHAR DTBB_2[] = _T("Tamir Uyarı");

	 const TCHAR Disk_Tamir_Baslamama_1[] = _T("Malesef Fix.bat'ı çalıştıramıyoruz! Tekrar Deneyiniz");
	 const TCHAR DTBB_3[] = _T("Tamir Başlatmama");

	 const TCHAR Disk_Tamir_Bulunamiyor_1[] = _T("Malesef DiskTamir.bat bulunmaıyor! Silmediğinizden ve Adını değiştirmediğinizden emin olunuz!");
	 const TCHAR DTBB_4[] = _T("DiskTamir.bat Bulunamıyor");


	// Button, Static, Edit
	 const TCHAR Bos[] = _T("");

	 const TCHAR Uyari[] = _T("Uyarı!");
	 const TCHAR Hata[] = _T("Hata!");

	// Bilgisayar Static //
	 const TCHAR Bilgisayar_Static_1[] = _T("Bilgisayar");
	 const TCHAR Bilgisayar_Static_2[] = _T("| Program Adı Veya Yeri |");
	// Bilgisayar Button //
	 const TCHAR Bilgisayar_Button_1[] = _T("Basit Programlar");
	 const TCHAR Bilgisayar_Button_2[] = _T("Hizmetler");
	 const TCHAR Bilgisayar_Button_3[] = _T("Not Defteri");
	 const TCHAR Bilgisayar_Button_4[] = _T("Kayıt Defteri");
	 const TCHAR Bilgisayar_Button_5[] = _T("Hesap Makinesi");
	 const TCHAR Bilgisayar_Button_6[] = _T("Çalıştır");
	 const TCHAR Bilgisayar_Button_7[] = _T("Kapat");
	 const TCHAR Bilgisayar_Button_8[] = _T("Bul");
	 const TCHAR Bilgisayar_Button_9[] = _T("Alternatif Çalıştır");
	 const TCHAR Bilgisayar_Button_10[] = _T("Alternatif Kapat");
	 const TCHAR Bilgisayar_Button_11[] = _T("Çalışan Uygulamalar");

	// Kontrol Static //
	 const TCHAR Kontrol_Static_1[] = _T("Kontrol");
	// Kontrol Button //
	 const TCHAR Kontrol_Button_1[] = _T("Atık Dosyalar");
	 const TCHAR Kontrol_Button_2[] = _T("İnternet Belleği");
	 const TCHAR Kontrol_Button_3[] = _T("Win32 Uygulama");
	 const TCHAR Kontrol_Button_4[] = _T("Kontrol");
	 const TCHAR Kontrol_Button_5[] = _T("Özellikler");

	// Zamanlayıcı Static //
	 const TCHAR Zamanlayici_Static_1[] = _T("Zamanlayıcı");
	 const TCHAR Zamanlayici_Static_2[] = _T("Süre");
	 const TCHAR Zamanlayici_Static_3[] = _T("Dikkat! 1Saat = 60Dakika = 3600Saniye");
	 const TCHAR Zamanlayici_Static_4[] = _T("Program Adı");
	 const TCHAR Zamanlayici_Static_5[] = _T("Süre");
	 const TCHAR Zamanlayici_Static_6[] = _T("Tam Kapatması İçin Yetkili Kullanıcı Olunuz\n Zamanlama Çalıştıktan Sonra Ekranı Küçültünüz");
	// Zamanlayıcı Button //
	 const TCHAR Zamanlayici_Button_1[] = _T("Oturumu Kapat");
	 const TCHAR Zamanlayici_Button_2[] = _T("Yeniden Başlat");
	 const TCHAR Zamanlayici_Button_3[] = _T("Uyku Modu");
	 const TCHAR Zamanlayici_Button_4[] = _T("Bilgisayarı Kapat");
	 const TCHAR Zamanlayici_Button_5[] = _T("Bilgisayarı Kitle");
	 const TCHAR Zamanlayici_Button_6[] = _T("İptal");
	 const TCHAR Zamanlayici_Button_7[] = _T("Zamanlı Kapat");
	 const TCHAR Zamanlayici_Button_8[] = _T("Uygulama Zamanlayıcıyı Başlat");
	// Zamanlayıcı TextBox //
	 const TCHAR Zamanlayici_Textbox_1[] = _T("Örnek: ProgramAdı.exe");

	// İşletim Sistemi Static //
	 const TCHAR IsletimSistemi_Static_1[] = _T("İşletim Sistemi");
	// İşletim Sistemi Button //
	 const TCHAR IsletimSistemi_Button_1[] = _T("Windows Sürümü");
	 const TCHAR IsletimSistemi_Button_2[] = _T("Powershell / Cmd");
	 const TCHAR IsletimSistemi_Button_3[] = _T("Aygıt Yöneticisi");
	 const TCHAR IsletimSistemi_Button_4[] = _T("C: Disk Tamir");
	 const TCHAR IsletimSistemi_Button_5[] = _T("Sürücü Liste");

	// Sürüm Static
	 const TCHAR Sürüm_Static_1[] = _T("Winapi - Sürüm 1.2.1");

	// Slavnem
	 const TCHAR Slavnem[] = _T("Slavnem");
	 const TCHAR Slavnem_Website[] = _T("https://www.slavnem.com");


	// Özel
	// Bilgisayar Hata //
	 const TCHAR Bilgisayar_Error_1[] = _T("Malesef Sistem Bilgisini Gösteremiyoruz, msinfo32.exe'nin olup olmadığını kontrol ediniz ve tekrar deneyiniz");
	 const TCHAR Bilgisayar_Error_2[] = _T("Malesef Hizmetleri Açamıyoruz, msconfig.exe'nin olup olmadığını kontrol ediniz ve tekrar deneyiniz");
	 const TCHAR Bilgisayar_Error_3[] = _T("Malesef Not Defterini Açamıyoruz, notepad.exe'nin olup olmadığını kontrol ediniz ve tekrar deneyiniz");
	 const TCHAR Bilgisayar_Error_4[] = _T("Malesef Kayıt Defterini Açamıyoruz, regedit.exe'nin olup olmadığını kontrol ediniz ve tekrar deneyiniz");
	 const TCHAR Bilgisayar_Error_5[] = _T("Malesef Hesap Makinesini Açamıyoruz, calc.exe'nin olup olmadığını kontrol ediniz ve tekrar deneyiniz");

	 const TCHAR Bilgisayar_OpenError_1[] = _T("Malesef Sistem Bilgisini Açamıyoruz, Sonra tekrar deneyiniz!");
	 const TCHAR Bilgisayar_OpenError_2[] = _T("Malesef Hizmetleri Açamıyoruz, Sonra tekrar deneyiniz!");
	 const TCHAR Bilgisayar_OpenError_3[] = _T("Malesef Not Defterini Açamıyoruz, Sonra tekrar deneyiniz!");
	 const TCHAR Bilgisayar_OpenError_4[] = _T("Malesef Kayıt Defterini Açamıyoruz, Sonra tekrar deneyiniz!");
	 const TCHAR Bilgisayar_OpenError_5[] = _T("Malesef Hesap Makinesini Açamıyoruz, Sonra tekrar deneyiniz!");

	// Kontrol Soru //
	 const TCHAR Kontrol_Question_1[] = _T("Oturumu Kapatmak İstiyor musunuz?");
	 const TCHAR Kontrol_Question_2[] = _T("Bilgisayarı 3 Saniye İçinde Yeniden Başlatmak İstiyor musunuz?");
	 const TCHAR Kontrol_Question_3[] = _T("Bilgisayarı Uyku Moduna Almak İstiyor musunuz?");
	 const TCHAR Kontrol_Question_4[] = _T("Bilgisayarı 3 Saniye İçinde Kapatmak İstiyor musunuz?");
	 const TCHAR Kontrol_Question_5[] = _T("Bilgisayarı Kitlemek İstiyor musunuz?");

	// İşletim Sistemi Hata //
	 const TCHAR IsletimSistemi_Error_1[] = _T("Winver.exe bulunamıyor! Windows Versiyonunu gösteremiyoruz!");
	 const TCHAR IsletimSistemi_Error_2[] = _T("PowerShell ve Cmd'nin olduğundan emin olunuz ve yetkili kullanıcı ile çalıştırmayı deneyiniz!");
	 const TCHAR IsletimSistemi_Error_3[] = _T("Aygıt Yöneticisi Bulunamadı!");
	 const TCHAR IsletimSistemi_Error_4[] = _T("Sürücü Listesini görüntülüyemiyoruz!");

	 const TCHAR IsletimSistemi_OpenError_1[] = _T("Windows Versiyonunu gösteremiyoruz, Sonra tekrar deneyiniz!");
	 const TCHAR IsletimSistemi_OpenError_2[] = _T("PowerShell ve Cmd'yi çalıştıramıyoruz. Sonra tekrar deneyiniz!");
	 const TCHAR IsletimSistemi_OpenError_3[] = _T("Malesef Aygıt Yöneticisini çalıştıramıyoruz, Sonra Tekrar deneyiniz!");