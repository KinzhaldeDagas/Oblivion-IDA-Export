int __cdecl _close(int a1)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // esi

  if ( a1 == 0xFFFFFFFE ) /*0x98ec85*/
  {
    *__doserrno() = 0; /*0x98ec8c*/
    *_errno() = 9; /*0x98ec94*/
LABEL_12:
    JUMPOUT(0x98ED30); /*0x98ed30*/
  }
  if ( a1 < 0 /*0x98ecef*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v1 = 4 * (a1 >> 5) + 0xBAAAC0, v3 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v3 + 4) & 1) == 0) )
  {
    *__doserrno() = 0; /*0x98ecb5*/
    *_errno() = 9; /*0x98ecbc*/
    _invalid_parameter(v1, 0, v3); /*0x98ecc7*/
    goto LABEL_12; /*0x98eccf*/
  }
  __lock_fhandle(a1); /*0x98ecf2*/
  if ( (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v3 + 4) & 1) != 0 ) /*0x98ed02*/
    _close_nolock(a1); /*0x98ed07*/
  else
    *_errno() = 9; /*0x98ed17*/
  _unlock_fhandle(a1); /*0x98ed39*/
  return _close_::_LN15_4(v2);
}
