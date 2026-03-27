void __tmainCRTStartup()
{
  HANDLE (__stdcall *v0)(); // ebx
  HANDLE ProcessHeap; // eax
  struct _OSVERSIONINFOA *v2; // eax
  struct _OSVERSIONINFOA *v3; // esi
  HANDLE v4; // eax
  int v5; // edi
  HANDLE v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  CHAR *v11; // eax
  int wShowWindow; // ecx
  int v13; // eax
  struct _STARTUPINFOA StartupInfo; // [esp+10h] [ebp-70h] BYREF
  int dwMinorVersion; // [esp+58h] [ebp-28h]
  int dwMajorVersion; // [esp+5Ch] [ebp-24h]
  int dwPlatformId; // [esp+60h] [ebp-20h]
  int v18; // [esp+64h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  GetStartupInfoA(&StartupInfo);
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  v0 = GetProcessHeap;
  ProcessHeap = GetProcessHeap();
  v2 = (struct _OSVERSIONINFOA *)HeapAlloc(ProcessHeap, 0, 0x94);
  v3 = v2;
  if ( !v2 )
    fast_error_exit(0x12);
  v2->dwOSVersionInfoSize = 0x94;
  if ( GetVersionExA(v2) )
  {
    dwPlatformId = v3->dwPlatformId;
    dwMajorVersion = v3->dwMajorVersion;
    dwMinorVersion = v3->dwMinorVersion;
    v5 = v3->dwBuildNumber & 0x7FFF;
    v6 = v0();
    HeapFree(v6, 0, v3);
    if ( dwPlatformId != 2 )
      v5 |= 0x8000u;
    v7 = dwMajorVersion;
    v8 = dwMinorVersion;
    v9 = dwMinorVersion + (dwMajorVersion << 8);
    dword_BA9D94 = dwPlatformId;
    dword_BA9D9C = v9;
    dword_BA9DA0 = v7;
    dword_BA9DA4 = v8;
    dword_BA9D98 = v5;
    dwPlatformId = check_managed_app();
    if ( !_heap_init(1) )
      fast_error_exit(0x1C);
    if ( !_mtinit() )
      fast_error_exit(0x10);
    sub_98D7BD();
    ms_exc.registration.TryLevel = 1;
    if ( _ioinit() < 0 )
      _amsg_exit(0x1B);
    dword_BABC04 = (int)GetCommandLineA();
    dword_BA9DF8 = (char *)__crtGetEnvironmentStringsA();
    if ( _setargv() < 0 )
      _amsg_exit(8);
    if ( _setenvp() < 0 )
      _amsg_exit(9);
    v10 = _InitializeGlobals_(1);
    if ( v10 )
      _amsg_exit(v10);
    v11 = (CHAR *)_wincmdln();
    if ( (StartupInfo.dwFlags & 1) != 0 )
      wShowWindow = StartupInfo.wShowWindow;
    else
      wShowWindow = 0xA;
    v13 = WinMain((HINSTANCE)0x400000, 0, v11, wShowWindow);
    v18 = v13;
    if ( !dwPlatformId )
      _LN26(v13);
    __tmainCRTStartup_::_LN44();
  }
  else
  {
    v4 = v0();
    HeapFree(v4, 0, v3);
  }
}
