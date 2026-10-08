int __usercall _findfirst64i32@<eax>(int a1@<ebx>, LPCSTR lpFileName, int a3)
{
  HANDLE FirstFileA; // ebx
  DWORD LastError; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  errno_t v9; // eax
  int v10; // edx
  int v11; // ecx
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-144h] BYREF

  if ( !a3 || !lpFileName ) /*0x98452f*/
  {
    *_errno() = 0x16; /*0x984517*/
    _invalid_parameter(a1, 0, a3); /*0x98451d*/
    return 0xFFFFFFFF; /*0x984528*/
  }
  FirstFileA = FindFirstFileA(lpFileName, &FindFileData);// MEF v50 ownership proof: _findfirst64i32 directly returns the raw HANDLE produced by FindFirstFileA; there is no CRT wrapper allocation. A successful result may be released with Win32 FindClose. /*0x984540*/
  if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x984545*/
  {
    LastError = GetLastError(); /*0x984547*/
    if ( LastError >= 2 ) /*0x984552*/
    {
      if ( LastError <= 3 ) /*0x984557*/
        goto LABEL_12; /*0x984557*/
      if ( LastError == 8 ) /*0x98455c*/
      {
        *_errno() = 0xC; /*0x98457b*/
        return 0xFFFFFFFF; /*0x984581*/
      }
      if ( LastError == 0x12 ) /*0x984561*/
      {
LABEL_12:
        *_errno() = 2; /*0x984588*/
        return 0xFFFFFFFF; /*0x98458a*/
      }
    }
    *_errno() = 0x16; /*0x984568*/
    return 0xFFFFFFFF; /*0x984571*/
  }
  *(_DWORD *)a3 = FindFileData.dwFileAttributes != 0x80 ? FindFileData.dwFileAttributes : 0;
  *(_DWORD *)(a3 + 8) = __time64_t_from_ft(&FindFileData.ftCreationTime); /*0x9845af*/
  *(_DWORD *)(a3 + 0xC) = v6; /*0x9845b9*/
  *(_DWORD *)(a3 + 0x10) = __time64_t_from_ft(&FindFileData.ftLastAccessTime); /*0x9845c1*/
  *(_DWORD *)(a3 + 0x14) = v7; /*0x9845cb*/
  *(_DWORD *)(a3 + 0x18) = __time64_t_from_ft(&FindFileData.ftLastWriteTime); /*0x9845d3*/
  *(_DWORD *)(a3 + 0x20) = FindFileData.nFileSizeLow; /*0x9845dc*/
  *(_DWORD *)(a3 + 0x1C) = v8; /*0x9845e6*/
  v9 = strcpy_s((char *)(a3 + 0x24), 0x104u, FindFileData.cFileName); /*0x9845f2*/
  if ( v9 ) /*0x9845fc*/
    _invoke_watson(v9, v10, v11, (int)FirstFileA, 0, a3 + 0x24); /*0x984603*/
  return (int)FirstFileA; /*0x98460e*/
}
