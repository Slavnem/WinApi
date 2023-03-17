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
const TCHAR* ComboBox_1[] = { _T(""), _T("Shared Folder"), _T("Creating Execution"), _T("Synchronization"), _T("Magnifying Glass") };
const TCHAR* ComboBox_2[] = { _T(""), _T("Control Board"), _T("Internet Features"), _T("Game Controls"), _T("Mouse Features")
, _T("Sound settings"), _T("Remove Programs"), _T("Power Features"), _T("Region And Language"), _T("Registry"), _T("Services"), _T("Local Group Screen")
, _T("Certificates"), _T("Ipv4 & Ipv6 Address"), _T("Users") };
const TCHAR* ComboBox_3[] = { _T(""), _T("Disk Management"), _T("Device Management"), _T("Event Viewer"), _T("DirectX"), _T("Performance Monitor")
, _T("Access Book"), _T("Task Manager"), _T("Computer Management"), _T("Disk Cleaner"), _T("Character Setting") };
const TCHAR* ComboBox_4[] = { _T(""), _T("Timed Shutdown"), _T("Sign Out"), _T("Restart"), _T("Sleep Mode"), _T("Lock Computer"), _T("Cancel") };
const TCHAR* ComboBox_5[] = { _T(""), _T("Computer Informations"), _T("Services"), _T("Notepad"), _T("Registry"), _T("Calculator"), _T("Microsoft Paint") };

// Errors
const TCHAR Yetkisiz_Hata_1[] = _T("Unauthorized Trial!, Try with an authorized user!");
const TCHAR YHB_1[] = _T("Authority Error");
const TCHAR Dosya_Bulunamadi_1[] = _T("Unfortunately, there is no such file or program!");
const TCHAR DBB_1[] = _T("File Error");
const TCHAR Dosya_Acilamadi_1[] = _T("We can't run the program right now, please try again later!");
const TCHAR DAB_1[] = _T("Opening Error");
const TCHAR Dosya_Konum_Hatasi_1[] = _T("The Operation Could Not Be Created! Be Sure To Select The File Location Correctly!");
const TCHAR DKHB_1[] = _T("Location Error");

// Questions
const TCHAR Bilgisayar_Zamanli_Ayarla_1[] = _T("Do you want to shut down your computer in time?");
const TCHAR BZKB_1[] = _T("Timed Shutdown");

const TCHAR AtikDosya_Temizleme_1[] = _T("Do You Want to Delete Temp Files?");
const TCHAR ADT_1[] = _T("Temp Files");

const TCHAR InternetBellegi_Temizleme_1[] = _T("Do You Want To Clear Internet Memory?");
const TCHAR IBT_1[] = _T("Internet Memory");

const TCHAR WinApi_Program_Kapat_1[] = _T("Are you sure you want to close the program?");

// DiskFix Error
const TCHAR Disk_Tamir_Bulunamadi_1[] = _T("DiskFix.bat was not found! Do you want to create?");
const TCHAR DTBB_1[] = _T("DiskFix.bat Error");

const TCHAR Disk_Tamir_Baslat_1[] = _T("If you start the disk repair process, you must not stop it again, or it may damage the disk! It can take hours according to the speed of HDD or SSD when the computer restarts! Do you accept?");
const TCHAR DTBB_2[] = _T("Repair Warning");

const TCHAR Disk_Tamir_Baslamama_1[] = _T("Unfortunately, We cannot start DiskFix.bat!");
const TCHAR DTBB_3[] = _T("Repair Does Not Begin");

const TCHAR Disk_Tamir_Bulunamiyor_1[] = _T("Unfortunately, DiskFix.bat is not found! Be sure not to delete it or change its name!");
const TCHAR DTBB_4[] = _T("DiskFix.bat Cannot Be Found");

// Button, Static, Edit
const TCHAR Bos[] = _T("");

const TCHAR Uyari[] = _T("Warning!");
const TCHAR Hata[] = _T("Error!");

// Computer Static //
const TCHAR Bilgisayar_Static_1[] = _T("Computer");
const TCHAR Bilgisayar_Static_2[] = _T("| Program Name Or Location |");
// Computer Button //
const TCHAR Bilgisayar_Button_1[] = _T("Computer Info");
const TCHAR Bilgisayar_Button_2[] = _T("Services");
const TCHAR Bilgisayar_Button_3[] = _T("Notepad");
const TCHAR Bilgisayar_Button_4[] = _T("Registry");
const TCHAR Bilgisayar_Button_5[] = _T("Calculator");
const TCHAR Bilgisayar_Button_6[] = _T("Run");
const TCHAR Bilgisayar_Button_7[] = _T("Close");
const TCHAR Bilgisayar_Button_8[] = _T("Find");
const TCHAR Bilgisayar_Button_9[] = _T("Run Alternative");
const TCHAR Bilgisayar_Button_10[] = _T("Alternative Close");
const TCHAR Bilgisayar_Button_11[] = _T("Running Applications");

// Control Static //
const TCHAR Kontrol_Static_1[] = _T("Control");
// Control Button //
const TCHAR Kontrol_Button_1[] = _T("Temp File");
const TCHAR Kontrol_Button_2[] = _T("Internet Memory");
const TCHAR Kontrol_Button_3[] = _T("Win32 App");
const TCHAR Kontrol_Button_4[] = _T("Control");
const TCHAR Kontrol_Button_5[] = _T("Features");

// Timer Static //
const TCHAR Zamanlayici_Static_1[] = _T("Timer");
const TCHAR Zamanlayici_Static_2[] = _T("Time");
const TCHAR Zamanlayici_Static_3[] = _T("Attention! 1Hour = 60Minutes = 3600Seconds");
const TCHAR Zamanlayici_Static_4[] = _T("Program Name");
const TCHAR Zamanlayici_Static_5[] = _T("Time");
const TCHAR Zamanlayici_Static_6[] = _T("Become an Authorized User for Complete Shutdown\n\tMinimize Screen After Timing Runs");
// Timer Button //
const TCHAR Zamanlayici_Button_1[] = _T("Sign Out");
const TCHAR Zamanlayici_Button_2[] = _T("Restart");
const TCHAR Zamanlayici_Button_3[] = _T("Sleep Mode");
const TCHAR Zamanlayici_Button_4[] = _T("Shutdown");
const TCHAR Zamanlayici_Button_5[] = _T("Lock Computer");
const TCHAR Zamanlayici_Button_6[] = _T("Cancel");
const TCHAR Zamanlayici_Button_7[] = _T("Scheduled Closing");
const TCHAR Zamanlayici_Button_8[] = _T("Start App Scheduler");
// Timer TextBox //
const TCHAR Zamanlayici_Textbox_1[] = _T("Example: ProgramName.exe");

// Operating System Static //
const TCHAR IsletimSistemi_Static_1[] = _T("Operating System");
// Operating System Button //
const TCHAR IsletimSistemi_Button_1[] = _T("Windows Version");
const TCHAR IsletimSistemi_Button_2[] = _T("Powershell / Cmd");
const TCHAR IsletimSistemi_Button_3[] = _T("Device Management");
const TCHAR IsletimSistemi_Button_4[] = _T("C: Disk Repair");
const TCHAR IsletimSistemi_Button_5[] = _T("Driver List");

// Version Static
const TCHAR WinApi_Static_1[] = _T("Winapi - Version 1.2.3");

// Slavnem
const TCHAR Slavnem[] = _T("Slavnem");
const TCHAR Slavnem_Website[] = _T("https://www.slavnem.com");

// Custom
// Computer Error //
const TCHAR Bilgisayar_Error_1[] = _T("Unfortunately, we can't Show System Information, check msinfo32.exe and try again");
const TCHAR Bilgisayar_Error_2[] = _T("Unfortunately, we can't Show Services, check services.msc and try again");
const TCHAR Bilgisayar_Error_3[] = _T("Unfortunately, we can't Show Notepad, check notepad.exe and try again");
const TCHAR Bilgisayar_Error_4[] = _T("Unfortunately, we can't Show Registry, check regedit.exe and try again");
const TCHAR Bilgisayar_Error_5[] = _T("Unfortunately, we can't Show Calculator, check calc.exe and try again");

const TCHAR Bilgisayar_OpenError_1[] = _T("Unfortunately, we can't Show System Information, Try Again Later!");
const TCHAR Bilgisayar_OpenError_2[] = _T("Unfortunately, we can't Show Services, Try Again Later!");
const TCHAR Bilgisayar_OpenError_3[] = _T("Unfortunately, we can't Show Notepad, Try Again Later!");
const TCHAR Bilgisayar_OpenError_4[] = _T("Unfortunately, we can't Show Registry, Try Again Later!");
const TCHAR Bilgisayar_OpenError_5[] = _T("Unfortunately, we can't Show Calculator, Try Again Later!");

// Control Question //
const TCHAR Kontrol_Question_1[] = _T("Do You Want To Log Out?");
const TCHAR Kontrol_Question_2[] = _T("Do You Want To Restart The Computer In 3 Seconds?");
const TCHAR Kontrol_Question_3[] = _T("Do You Want To Put The Computer Into Sleep Mode?");
const TCHAR Kontrol_Question_4[] = _T("Do You Want To Shut Down The Computer In 3 Seconds?");
const TCHAR Kontrol_Question_5[] = _T("Do You Want To Lock The Computer?");

// Operating System Error //
const TCHAR IsletimSistemi_Error_1[] = _T("Cannot find winver.exe! We can't show Windows Version!");
const TCHAR IsletimSistemi_Error_2[] = _T("Make sure you have PowerShell and Cmd and try to run it as an authorized user!");
const TCHAR IsletimSistemi_Error_3[] = _T("Cannot find devmgmt.msc! We can't show Device Management!");
const TCHAR IsletimSistemi_Error_4[] = _T("We can't view the Driver List!");

const TCHAR IsletimSistemi_OpenError_1[] = _T("We cannot show Windows Version, Try again later!");
const TCHAR IsletimSistemi_OpenError_2[] = _T("We cannot run PowerShell and Cmd. Try again later!");
const TCHAR IsletimSistemi_OpenError_3[] = _T("We cannot run Device Manager, Try Again Later!");