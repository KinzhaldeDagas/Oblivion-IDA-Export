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

  if ( !Path || !*Path )
    return _getcwd(FullPath, SizeInBytes);
  if ( FullPath )
  {
    v6 = SizeInBytes;
    if ( !(_DWORD)SizeInBytes )
    {
      *_errno() = 0x16;
      _invalid_parameter(0, 0, (int)GetFullPathNameA);
      return 0;
    }
    lpBuffer = FullPath;
  }
  else
  {
    FullPathNameA = GetFullPathNameA(Path, 0, 0, 0);
    if ( !FullPathNameA )
    {
LABEL_5:
      LastError = GetLastError();
      _dosmaperr(LastError);
      return 0;
    }
    v6 = SizeInBytes;
    if ( (unsigned int)SizeInBytes <= FullPathNameA )
      v6 = FullPathNameA;
    v7 = (CHAR *)calloc(v6 | 0x100000000LL, v9);
    lpBuffer = v7;
    if ( !v7 )
    {
      *_errno() = 0xC;
      return 0;
    }
  }
  v8 = GetFullPathNameA(Path, v6, lpBuffer, &FilePart);
  if ( v8 >= v6 )
  {
    if ( !FullPath )
      free(lpBuffer);
    *_errno() = 0x22;
    return 0;
  }
  if ( !v8 )
  {
    if ( !FullPath )
      free(lpBuffer);
    goto LABEL_5;
  }
  return lpBuffer;
}
