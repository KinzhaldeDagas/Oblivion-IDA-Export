int __usercall _findnext64i32@<eax>(int a1@<ebx>, HANDLE hFindFile, int a3)
{
  DWORD LastError; // eax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  errno_t v8; // eax
  int v9; // edx
  int v10; // ecx
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-144h] BYREF

  if ( hFindFile == (HANDLE)0xFFFFFFFF || !a3 ) /*0x984662*/
  {
    *_errno() = 0x16; /*0x984648*/
    _invalid_parameter(a1, 0, a3); /*0x98464e*/
    return 0xFFFFFFFF; /*0x98464e*/
  }
  if ( !FindNextFileA(hFindFile, &FindFileData) ) /*0x984673*/
  {
    LastError = GetLastError(); /*0x98467d*/
    if ( LastError >= 2 ) /*0x984688*/
    {
      if ( LastError <= 3 ) /*0x98468d*/
        goto LABEL_12; /*0x98468d*/
      if ( LastError == 8 ) /*0x984692*/
      {
        *_errno() = 0xC; /*0x9846ab*/
        return 0xFFFFFFFF; /*0x9846b1*/
      }
      if ( LastError == 0x12 ) /*0x984697*/
      {
LABEL_12:
        *_errno() = 2; /*0x9846b8*/
        return 0xFFFFFFFF; /*0x9846ba*/
      }
    }
    *_errno() = 0x16; /*0x98469e*/
    return 0xFFFFFFFF; /*0x984659*/
  }
  *(_DWORD *)a3 = FindFileData.dwFileAttributes != 0x80 ? FindFileData.dwFileAttributes : 0;
  *(_DWORD *)(a3 + 8) = __time64_t_from_ft(&FindFileData.ftCreationTime); /*0x9846df*/
  *(_DWORD *)(a3 + 0xC) = v5; /*0x9846e9*/
  *(_DWORD *)(a3 + 0x10) = __time64_t_from_ft(&FindFileData.ftLastAccessTime); /*0x9846f1*/
  *(_DWORD *)(a3 + 0x14) = v6; /*0x9846fb*/
  *(_DWORD *)(a3 + 0x18) = __time64_t_from_ft(&FindFileData.ftLastWriteTime); /*0x984703*/
  *(_DWORD *)(a3 + 0x20) = FindFileData.nFileSizeLow; /*0x98470c*/
  *(_DWORD *)(a3 + 0x1C) = v7; /*0x984716*/
  v8 = strcpy_s((char *)(a3 + 0x24), 0x104u, FindFileData.cFileName); /*0x984722*/
  if ( v8 ) /*0x98472c*/
    _invoke_watson(v8, v9, v10, a1, 0, a3 + 0x24); /*0x984733*/
  return 0; /*0x98473d*/
}
