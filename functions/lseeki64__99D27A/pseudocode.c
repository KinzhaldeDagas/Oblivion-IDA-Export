__int64 __cdecl _lseeki64(int a1, __int64 a2, int dwMoveMethod)
{
  int v3; // ebx
  int v4; // esi

  v4 = 0xFFFFFFFF;
  if ( a1 == 0xFFFFFFFE )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    goto LABEL_12;
  }
  if ( a1 < 0
    || a1 >= uNumber
    || (v3 = 4 * (a1 >> 5) + 0xBAAAC0, v4 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(dword_BAAAC0[a1 >> 5] + v4 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(v3, 0, v4);
LABEL_12:
    JUMPOUT(0x99D383);
  }
  __lock_fhandle(a1);
  if ( (*(_BYTE *)(dword_BAAAC0[a1 >> 5] + v4 + 4) & 1) != 0 )
  {
    _lseeki64_nolock(a1, a2, SHIDWORD(a2), dwMoveMethod);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  _unlock_fhandle(a1);
  return _lseeki64_::_LN15_6();
}
