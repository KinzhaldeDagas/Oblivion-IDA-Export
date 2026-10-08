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

  ms_exc.registration.TryLevel = 0; /*0x9876a8*/
  GetStartupInfoA(&StartupInfo); /*0x9876b0*/
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x9876b6*/
  v0 = GetProcessHeap; /*0x9876c5*/
  ProcessHeap = GetProcessHeap(); /*0x9876cb*/
  v2 = (struct _OSVERSIONINFOA *)HeapAlloc(ProcessHeap, 0, 0x94); /*0x9876ce*/
  v3 = v2; /*0x9876d4*/
  if ( !v2 ) /*0x9876d8*/
    fast_error_exit(0x12); /*0x9876dc*/
  v2->dwOSVersionInfoSize = 0x94; /*0x9876e7*/
  if ( GetVersionExA(v2) ) /*0x9876ea*/
  {
    dwPlatformId = v3->dwPlatformId; /*0x987708*/
    dwMajorVersion = v3->dwMajorVersion; /*0x98770e*/
    dwMinorVersion = v3->dwMinorVersion; /*0x987714*/
    v5 = v3->dwBuildNumber & 0x7FFF; /*0x98771a*/
    v6 = v0(); /*0x987720*/
    HeapFree(v6, 0, v3); /*0x987723*/
    if ( dwPlatformId != 2 ) /*0x98772f*/
      v5 |= 0x8000u; /*0x987731*/
    v7 = dwMajorVersion; /*0x987737*/
    v8 = dwMinorVersion; /*0x98773f*/
    v9 = dwMinorVersion + (dwMajorVersion << 8); /*0x987742*/
    unk_BA9D94 = dwPlatformId; /*0x987744*/
    unk_BA9D9C = v9; /*0x98774a*/
    unk_BA9DA0 = v7; /*0x98774f*/
    unk_BA9DA4 = v8; /*0x987755*/
    unk_BA9D98 = v5; /*0x98775b*/
    dwPlatformId = check_managed_app(); /*0x987766*/
    if ( !_heap_init(1) ) /*0x98776d*/
      fast_error_exit(0x1C); /*0x987779*/
    if ( !_mtinit() ) /*0x98777f*/
      fast_error_exit(0x10); /*0x98778a*/
    sub_98D7BD(); /*0x987790*/
    ms_exc.registration.TryLevel = 1; /*0x987795*/
    if ( (int)_ioinit() < 0 ) /*0x98779f*/
      _amsg_exit(0x1B); /*0x9877a3*/
    unk_BABC04 = (int)GetCommandLineA(); /*0x9877af*/
    unk_BA9DF8 = __crtGetEnvironmentStringsA(); /*0x9877b9*/
    if ( (int)_setargv() < 0 ) /*0x9877c5*/
      _amsg_exit(8); /*0x9877c9*/
    if ( (int)_setenvp() < 0 ) /*0x9877d6*/
      _amsg_exit(9); /*0x9877da*/
    v10 = CRT_InitializeGlobals(1);             // Verified startup call: __tmainCRTStartup calls CRT_InitializeGlobals(1) before WinMain, which executes the C++ global-initializer pointer range. /*0x9877e1*/
    if ( v10 ) /*0x9877e9*/
      _amsg_exit(v10); /*0x9877ec*/
    v11 = _wincmdln(); /*0x9877f2*/
    if ( (StartupInfo.dwFlags & 1) != 0 ) /*0x9877fa*/
      wShowWindow = StartupInfo.wShowWindow; /*0x9877fc*/
    else
      wShowWindow = 0xA; /*0x987804*/
    v13 = WinMain((HINSTANCE)0x400000, 0, v11, wShowWindow); /*0x98780e*/
    v18 = v13; /*0x987813*/
    if ( !dwPlatformId ) /*0x98781a*/
      _LN26(v13); /*0x98781d*/
    __tmainCRTStartup_::_LN44(); /*0x98781a*/
  }
  else
  {
    v4 = v0(); /*0x9876f7*/
    HeapFree(v4, 0, v3); /*0x9876fa*/
  }
}
