_DWORD *__thiscall sub_6C6610(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int v5; // eax
  _WORD *v6; // eax

  v4 = 0x10 * a3;
  v5 = *(_DWORD *)(0x10 * a3 + *(this + 5));
  *a2 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)(v5 + 4));
  sub_6C6300((_DWORD *)(v4 + *(this + 5)));
  v6 = (_WORD *)(v4 + *(this + 6));
  v6[2] = 0xFFFF;
  v6[3] = 0xFFFF;
  v6[4] = 0xFFFF;
  v6[5] = 0xFFFF;
  v6[6] = 0xFFFF;
  return a2;
}
