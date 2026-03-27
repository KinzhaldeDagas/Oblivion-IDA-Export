int __cdecl _read(int a1, void *lpWideCharStr, unsigned int nNumberOfBytesToRead)
{
  int v3; // ebx
  int v4; // esi
  int nolock; // [esp+14h] [ebp-1Ch]

  if ( a1 == 0xFFFFFFFE )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return 0xFFFFFFFF;
  }
  if ( a1 < 0
    || a1 >= uNumber
    || (v3 = 4 * (a1 >> 5) + 0xBAAAC0, v4 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(dword_BAAAC0[a1 >> 5] + v4 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(v3, 0, v4);
    return 0xFFFFFFFF;
  }
  __lock_fhandle(a1);
  if ( (*(_BYTE *)(dword_BAAAC0[a1 >> 5] + v4 + 4) & 1) != 0 )
  {
    nolock = _read_nolock(v3, a1, (LPWSTR)lpWideCharStr, nNumberOfBytesToRead);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    nolock = 0xFFFFFFFF;
  }
  _unlock_fhandle(a1);
  return nolock;
}
