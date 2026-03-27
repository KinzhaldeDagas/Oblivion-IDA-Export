int __cdecl _findfirst64i32(LPCSTR lpFileName, int a2)
{
  HANDLE FirstFileA; // ebx
  DWORD LastError; // eax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-144h] BYREF

  if ( !a2 || !lpFileName )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0xFFFFFFFF;
  }
  FirstFileA = FindFirstFileA(lpFileName, &FindFileData);
  if ( FirstFileA == (HANDLE)0xFFFFFFFF )
  {
    LastError = GetLastError();
    if ( LastError >= 2 )
    {
      if ( LastError <= 3 )
        goto LABEL_12;
      if ( LastError == 8 )
      {
        *_errno() = 0xC;
        return 0xFFFFFFFF;
      }
      if ( LastError == 0x12 )
      {
LABEL_12:
        *_errno() = 2;
        return 0xFFFFFFFF;
      }
    }
    *_errno() = 0x16;
    return 0xFFFFFFFF;
  }
  *(_DWORD *)a2 = FindFileData.dwFileAttributes != 0x80 ? FindFileData.dwFileAttributes : 0;
  *(_DWORD *)(a2 + 8) = __time64_t_from_ft(&FindFileData.ftCreationTime);
  *(_DWORD *)(a2 + 0xC) = v5;
  *(_DWORD *)(a2 + 0x10) = __time64_t_from_ft(&FindFileData.ftLastAccessTime);
  *(_DWORD *)(a2 + 0x14) = v6;
  *(_DWORD *)(a2 + 0x18) = __time64_t_from_ft(&FindFileData.ftLastWriteTime);
  *(_DWORD *)(a2 + 0x20) = FindFileData.nFileSizeLow;
  *(_DWORD *)(a2 + 0x1C) = v7;
  if ( strcpy_s((char *)(a2 + 0x24), 0x104u, FindFileData.cFileName) )
    _invoke_watson(0, 0, 0, 0, 0);
  return (int)FirstFileA;
}
