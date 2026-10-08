char *__cdecl _fullpath(char *FullPath, const char *Path, size_t SizeInBytes)
{
  DWORD FullPathNameA; // eax
  DWORD LastError; // eax
  DWORD v6; // edi
  CHAR *v7; // eax
  DWORD v8; // eax
  size_t v9; // [esp+0h] [ebp-14h]
  LPSTR FilePart; // [esp+Ch] [ebp-8h] BYREF
  LPSTR lpBuffer; // [esp+10h] [ebp-4h]

  if ( !Path || !*Path ) /*0x991f07*/
    return _getcwd(FullPath, SizeInBytes); /*0x991fee*/
  if ( FullPath ) /*0x991f18*/
  {
    v6 = SizeInBytes; /*0x991f75*/
    if ( !(_DWORD)SizeInBytes ) /*0x991f7a*/
    {
      *_errno() = 0x16; /*0x991f86*/
      _invalid_parameter(0, 0, (int)GetFullPathNameA); /*0x991f8c*/
      return 0; /*0x991f94*/
    }
    lpBuffer = FullPath; /*0x991f99*/
  }
  else
  {
    FullPathNameA = GetFullPathNameA(Path, 0, 0, 0); /*0x991f1e*/
    if ( !FullPathNameA ) /*0x991f22*/
    {
LABEL_5:
      LastError = GetLastError(); /*0x991f24*/
      _dosmaperr(LastError); /*0x991f2b*/
      return 0; /*0x991f32*/
    }
    v6 = SizeInBytes; /*0x991f37*/
    if ( (unsigned int)SizeInBytes <= FullPathNameA ) /*0x991f3c*/
      v6 = FullPathNameA; /*0x991f3e*/
    v7 = (CHAR *)calloc(v6 | 0x100000000LL, v9); /*0x991f5a*/
    lpBuffer = v7; /*0x991f63*/
    if ( !v7 ) /*0x991f66*/
    {
      *_errno() = 0xC; /*0x991f6d*/
      return 0; /*0x991f52*/
    }
  }
  v8 = GetFullPathNameA(Path, v6, lpBuffer, &FilePart); /*0x991fa7*/
  if ( v8 >= v6 ) /*0x991fab*/
  {
    if ( !FullPath ) /*0x991fb0*/
      free(lpBuffer); /*0x991fb5*/
    *_errno() = 0x22; /*0x991fc0*/
    return 0; /*0x991fc6*/
  }
  if ( !v8 ) /*0x991fca*/
  {
    if ( !FullPath ) /*0x991fcf*/
      free(lpBuffer); /*0x991fd8*/
    goto LABEL_5; /*0x991fde*/
  }
  return lpBuffer; /*0x991ff5*/
}
