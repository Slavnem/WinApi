/*
* Slavnem Tarafýndan Yapýlmýþ Olup Kar Amacý Gütmez!
* Açýk Kaynak Kod
* Tecrübe Seviyesi = Acemi
* 2021
*/

#ifndef winapi_includes_h
#define winapi_includes_h

#define WIN32_LEAN_AND_MEAN // MFC Kütüphanesi Kullanmadýðýmýzdan Dolayý Hýzlý Derlenmesi Ýçin

#pragma comment( lib, "psapi.lib" )

#include <windows.h>
#include <tchar.h>
#include <winuser.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <shellapi.h>
#include <psapi.h>
#include <processthreadsapi.h>
#include <string.h>
#include <process.h>
#include <winbase.h>
#include <TlHelp32.h>
#include <fstream>
#include <commdlg.h>
#include <sstream>
#include <synchapi.h>

using namespace std;

#endif // winapi_includes_h