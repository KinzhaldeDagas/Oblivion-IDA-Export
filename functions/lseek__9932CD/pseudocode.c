int __cdecl _lseek(int a1, int lDistanceToMove, int dwMoveMethod)
{
  int v3; // ebx
  int v4; // esi
  DWORD v6; // [esp+14h] [ebp-1Ch]

  if ( a1 == 0xFFFFFFFE ) /*0x9932df*/
  {
    *__doserrno() = 0; /*0x9932e6*/
    *_errno() = 9; /*0x9932ee*/
    return 0xFFFFFFFF; /*0x9932f7*/
  }
  if ( a1 < 0 /*0x993349*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v3 = 4 * (a1 >> 5) + 0xBAAAC0, v4 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v4 + 4) & 1) == 0) )
  {
    *__doserrno() = 0; /*0x99330f*/
    *_errno() = 9; /*0x993316*/
    _invalid_parameter(v3, 0, v4); /*0x993321*/
    return 0xFFFFFFFF; /*0x993329*/
  }
  __lock_fhandle(a1); /*0x99334c*/
  if ( (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v4 + 4) & 1) != 0 ) /*0x99335c*/
  {
    v6 = _lseek_nolock(a1, lDistanceToMove, dwMoveMethod); /*0x99336f*/
  }
  else
  {
    *_errno() = 9; /*0x993379*/
    *__doserrno() = 0; /*0x993384*/
    v6 = 0xFFFFFFFF; /*0x993386*/
  }
  _unlock_fhandle(a1); /*0x9933a2*/
  return v6; /*0x993399*/
}
