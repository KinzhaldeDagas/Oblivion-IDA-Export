int __cdecl _access_s(LPCSTR lpFileName, int a2)
{
  DWORD FileAttributesA; // eax
  DWORD LastError; // eax

  if ( !lpFileName || (a2 & 0xFFFFFFF9) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0x16;
  }
  FileAttributesA = GetFileAttributesA(lpFileName);
  if ( FileAttributesA == 0xFFFFFFFF )
  {
    LastError = GetLastError();
    _dosmaperr(LastError);
    return *_errno();
  }
  if ( (FileAttributesA & 0x10) == 0 && (FileAttributesA & 1) != 0 && (a2 & 2) != 0 )
  {
    *__doserrno() = 5;
    *_errno() = 0xD;
    return *_errno();
  }
  return 0;
}
