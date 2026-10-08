int __cdecl _stat64i32(unsigned __int8 *lpFileName, int a2)
{
  unsigned __int8 *dwHighDateTime; // esi
  int v3; // eax
  char *v4; // eax
  char *v5; // esi
  unsigned int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  DWORD LastError; // eax
  size_t v13; // [esp-4h] [ebp-90h]
  size_t v14; // [esp-4h] [ebp-90h]
  int v15; // [esp+Ch] [ebp-80h]
  struct _FILETIME LocalFileTime; // [esp+10h] [ebp-7Ch] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+18h] [ebp-74h] BYREF
  void *Memory; // [esp+28h] [ebp-64h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+2Ch] [ebp-60h] BYREF
  char FullPath[260]; // [esp+16Ch] [ebp+E0h] BYREF

  dwHighDateTime = lpFileName; /*0x983771*/
  LocalFileTime.dwHighDateTime = (DWORD)lpFileName; /*0x983782*/
  if ( lpFileName && a2 ) /*0x9837ad*/
  {
    if ( (unsigned int)_mbscspn(lpFileName, &byte_AA3ECC) ) /*0x9837b5*/
    {
LABEL_5:
      *_errno() = 2; /*0x9837c0*/
      *__doserrno() = 2; /*0x9837cf*/
      return 0xFFFFFFFF; /*0x9837d1*/
    }
    if ( lpFileName[1] == 0x3A ) /*0x9837da*/
    {
      if ( *lpFileName && !lpFileName[2] ) /*0x9837e5*/
        goto LABEL_5; /*0x9837e5*/
      v3 = _mbctolower((char)*lpFileName) - 0x60; /*0x9837f1*/
    }
    else
    {
      v3 = _getdrive(); /*0x9837f6*/
    }
    v15 = v3; /*0x9837fb*/
    Memory = FindFirstFileA((LPCSTR)lpFileName, &FindFileData); /*0x98380c*/
    if ( Memory == (void *)0xFFFFFFFF ) /*0x98380f*/
    {
      Memory = 0; /*0x98381b*/
      if ( !(unsigned int)_mbscspn(lpFileName, &off_AA3EC8) ) /*0x983827*/
        goto LABEL_5; /*0x983827*/
      LODWORD(v13) = 0x104; /*0x983829*/
      v4 = _fullpath(FullPath, (const char *)lpFileName, v13); /*0x983836*/
      if ( !v4 ) /*0x983840*/
      {
        if ( *_errno() != 0x22 ) /*0x98384a*/
          goto LABEL_5; /*0x98384a*/
        LODWORD(v14) = 0; /*0x983850*/
        v4 = _fullpath(0, (const char *)lpFileName, v14); /*0x983853*/
        Memory = v4; /*0x98385b*/
      }
      v5 = v4; /*0x98385e*/
      if ( !v4 || (unsigned int)strlen(v4) != 3 && !IsRootUNCName(v5) || GetDriveTypeA(v5) <= 1 ) /*0x983883*/
      {
        if ( Memory ) /*0x9838d8*/
          free(Memory); /*0x9838e1*/
        goto LABEL_5; /*0x9838e7*/
      }
      if ( Memory ) /*0x983888*/
        free(Memory); /*0x98388d*/
      FindFileData.dwFileAttributes = 0x10; /*0x9838a1*/
      FindFileData.nFileSizeHigh = 0; /*0x9838a8*/
      FindFileData.nFileSizeLow = 0; /*0x9838ab*/
      FindFileData.cFileName[0] = 0; /*0x9838ae*/
      v6 = __loctotime64_t(0, a2, 0x7BC, 1, 1, 0, 0, 0, 0xFFFFFFFF); /*0x9838b1*/
      dwHighDateTime = (unsigned __int8 *)LocalFileTime.dwHighDateTime; /*0x9838b6*/
      *(_DWORD *)(a2 + 0x20) = v6; /*0x9838be*/
      *(_DWORD *)(a2 + 0x24) = v7; /*0x9838c1*/
      *(_DWORD *)(a2 + 0x18) = v6; /*0x9838c4*/
      *(_DWORD *)(a2 + 0x1C) = v7; /*0x9838c7*/
      *(_DWORD *)(a2 + 0x28) = v6; /*0x9838ca*/
      *(_DWORD *)(a2 + 0x2C) = v7; /*0x9838cd*/
LABEL_44:
      *(_WORD *)(a2 + 6) = __dtoxmode(FindFileData.dwFileAttributes, dwHighDateTime); /*0x983a3d*/
      *(_DWORD *)(a2 + 0x14) = FindFileData.nFileSizeLow; /*0x983a4d*/
      *(_DWORD *)a2 = v15 - 1; /*0x983a55*/
      *(_DWORD *)(a2 + 0x10) = v15 - 1; /*0x983a57*/
      *(_WORD *)(a2 + 8) = 1; /*0x983a5b*/
      *(_WORD *)(a2 + 4) = 0; /*0x983a61*/
      *(_WORD *)(a2 + 0xC) = 0; /*0x983a65*/
      *(_WORD *)(a2 + 0xA) = 0; /*0x983a69*/
      return 0; /*0x983a6f*/
    }
    if ( FindFileData.ftLastWriteTime.dwLowDateTime || FindFileData.ftLastWriteTime.dwHighDateTime ) /*0x9838f4*/
    {
      if ( !FileTimeToLocalFileTime(&FindFileData.ftLastWriteTime, &LocalFileTime) /*0x98391c*/
        || !FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
      {
        goto LABEL_45; /*0x983924*/
      }
      *(_DWORD *)(a2 + 0x20) = __loctotime64_t( /*0x983952*/
                                 0,
                                 a2,
                                 SystemTime.wYear,
                                 SystemTime.wMonth,
                                 SystemTime.wDay,
                                 SystemTime.wHour,
                                 SystemTime.wMinute,
                                 SystemTime.wSecond,
                                 0xFFFFFFFF);
      *(_DWORD *)(a2 + 0x24) = v8; /*0x983955*/
    }
    else
    {
      *(_DWORD *)(a2 + 0x20) = 0; /*0x9838f6*/
      *(_DWORD *)(a2 + 0x24) = 0; /*0x9838f9*/
    }
    if ( FindFileData.ftLastAccessTime.dwLowDateTime || FindFileData.ftLastAccessTime.dwHighDateTime ) /*0x983960*/
    {
      if ( !FileTimeToLocalFileTime(&FindFileData.ftLastAccessTime, &LocalFileTime) /*0x98398e*/
        || !FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
      {
        goto LABEL_45; /*0x983996*/
      }
      *(_DWORD *)(a2 + 0x18) = __loctotime64_t( /*0x9839c4*/
                                 0,
                                 a2,
                                 SystemTime.wYear,
                                 SystemTime.wMonth,
                                 SystemTime.wDay,
                                 SystemTime.wHour,
                                 SystemTime.wMinute,
                                 SystemTime.wSecond,
                                 0xFFFFFFFF);
      *(_DWORD *)(a2 + 0x1C) = v9; /*0x9839c7*/
    }
    else
    {
      *(_DWORD *)(a2 + 0x18) = *(_DWORD *)(a2 + 0x20); /*0x983965*/
      *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(a2 + 0x24); /*0x98396b*/
    }
    if ( !FindFileData.ftCreationTime.dwLowDateTime && !FindFileData.ftCreationTime.dwHighDateTime ) /*0x9839d2*/
    {
      *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(a2 + 0x20); /*0x9839d7*/
      *(_DWORD *)(a2 + 0x2C) = *(_DWORD *)(a2 + 0x24); /*0x9839dd*/
LABEL_43:
      FindClose(Memory); /*0x983a34*/
      goto LABEL_44; /*0x983a37*/
    }
    if ( FileTimeToLocalFileTime(&FindFileData.ftCreationTime, &LocalFileTime) /*0x9839fc*/
      && FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
    {
      *(_DWORD *)(a2 + 0x28) = __loctotime64_t( /*0x983a2e*/
                                 0,
                                 a2,
                                 SystemTime.wYear,
                                 SystemTime.wMonth,
                                 SystemTime.wDay,
                                 SystemTime.wHour,
                                 SystemTime.wMinute,
                                 SystemTime.wSecond,
                                 0xFFFFFFFF);
      *(_DWORD *)(a2 + 0x2C) = v10; /*0x983a31*/
      goto LABEL_43; /*0x983a31*/
    }
LABEL_45:
    LastError = GetLastError(); /*0x983a71*/
    _dosmaperr(LastError); /*0x983a78*/
    FindClose(Memory); /*0x983a81*/
    return 0xFFFFFFFF; /*0x983a81*/
  }
  *__doserrno() = 0; /*0x98378c*/
  *_errno() = 0x16; /*0x983798*/
  _invalid_parameter(0, a2, (int)lpFileName); /*0x98379e*/
  return 0xFFFFFFFF; /*0x983a8a*/
}
