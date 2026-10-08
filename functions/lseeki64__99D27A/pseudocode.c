__int64 __cdecl _lseeki64(int a1, __int64 a2, int dwMoveMethod)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi

  v5 = 0xFFFFFFFF; /*0x99d286*/
  if ( a1 == 0xFFFFFFFE ) /*0x99d295*/
  {
    *__doserrno() = 0; /*0x99d29c*/
    *_errno() = 9; /*0x99d2a4*/
    goto LABEL_12; /*0x99d2ae*/
  }
  if ( a1 < 0 /*0x99d300*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v3 = 4 * (a1 >> 5) + 0xBAAAC0, v5 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v5 + 4) & 1) == 0) )
  {
    *__doserrno() = 0; /*0x99d307*/
    *_errno() = 9; /*0x99d30e*/
    _invalid_parameter(v3, 0, v5); /*0x99d319*/
LABEL_12:
    JUMPOUT(0x99D383); /*0x99d383*/
  }
  __lock_fhandle(a1); /*0x99d329*/
  if ( (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v5 + 4) & 1) != 0 ) /*0x99d339*/
  {
    _lseeki64_nolock(a1, a2, SHIDWORD(a2), dwMoveMethod); /*0x99d347*/
  }
  else
  {
    *_errno() = 9; /*0x99d35c*/
    *__doserrno() = 0; /*0x99d367*/
  }
  _unlock_fhandle(a1); /*0x99d38c*/
  return _lseeki64_::_LN15_6(v4);
}
