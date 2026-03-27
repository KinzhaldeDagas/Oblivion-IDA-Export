int __cdecl _close(int a1)
{
  int v1; // ebx
  int v2; // esi

  if ( a1 == 0xFFFFFFFE )
  {
    *__doserrno() = 0;
    *_errno() = 9;
LABEL_12:
    JUMPOUT(0x98ED30);
  }
  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = 4 * (a1 >> 5) + 0xBAAAC0, v2 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(dword_BAAAC0[a1 >> 5] + v2 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(v1, 0, v2);
    goto LABEL_12;
  }
  __lock_fhandle(a1);
  if ( (*(_BYTE *)(dword_BAAAC0[a1 >> 5] + v2 + 4) & 1) != 0 )
    _close_nolock(a1);
  else
    *_errno() = 9;
  _unlock_fhandle(a1);
  return _close_::_LN15_4();
}
