int __cdecl _write(int a1, const void *a2, unsigned int nNumberOfBytesToWrite)
{
  int v3; // ebx
  int v4; // esi
  int v6; // [esp+14h] [ebp-1Ch]

  if ( a1 == 0xFFFFFFFE ) /*0x998d27*/
  {
    *__doserrno() = 0; /*0x998d2e*/
    *_errno() = 9; /*0x998d36*/
    return 0xFFFFFFFF; /*0x998d3f*/
  }
  if ( a1 < 0 /*0x998d91*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v3 = 4 * (a1 >> 5) + 0xBAAAC0, v4 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v4 + 4) & 1) == 0) )
  {
    *__doserrno() = 0; /*0x998d57*/
    *_errno() = 9; /*0x998d5e*/
    _invalid_parameter(v3, 0, v4); /*0x998d69*/
    return 0xFFFFFFFF; /*0x998d71*/
  }
  __lock_fhandle(a1); /*0x998d94*/
  if ( (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v4 + 4) & 1) != 0 ) /*0x998da4*/
  {
    v6 = _write_nolock(v3, 0, a1, (char *)a2, nNumberOfBytesToWrite); /*0x998db7*/
  }
  else
  {
    *_errno() = 9; /*0x998dc1*/
    *__doserrno() = 0; /*0x998dcc*/
    v6 = 0xFFFFFFFF; /*0x998dce*/
  }
  _unlock_fhandle(a1); /*0x998dea*/
  return v6; /*0x998de1*/
}
