_DWORD *__thiscall sub_6C6610(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int v5; // eax
  _WORD *v6; // eax

  v4 = 0x10 * a3; /*0x6c6649*/
  v5 = *(_DWORD *)(0x10 * a3 + *(this + 5)); /*0x6c664e*/
  *a2 = v5; /*0x6c6652*/
  if ( v5 ) /*0x6c6654*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6c665a*/
  sub_6C6300((_DWORD *)(v4 + *(this + 5))); /*0x6c6675*/
  v6 = (_WORD *)(v4 + *(this + 6)); /*0x6c667d*/
  v6[2] = 0xFFFF; /*0x6c6684*/
  v6[3] = 0xFFFF; /*0x6c6688*/
  v6[4] = 0xFFFF; /*0x6c668c*/
  v6[5] = 0xFFFF; /*0x6c6690*/
  v6[6] = 0xFFFF; /*0x6c6694*/
  return a2; /*0x6c669a*/
}
