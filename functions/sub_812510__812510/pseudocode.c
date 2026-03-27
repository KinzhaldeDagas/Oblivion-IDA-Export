char __thiscall sub_812510(int this, _DWORD *a2, int a3)
{
  unsigned __int16 v3; // ax
  _DWORD *v4; // eax

  v3 = *(_WORD *)(this + 0xE);
  if ( v3 == *(_WORD *)(this + 0xC) || !a2 )
    return 0;
  v4 = (_DWORD *)(*(_DWORD *)(this + 0x10) + 0x10 * v3);
  *v4 = *a2;
  v4[1] = a2[1];
  v4[2] = a2[2];
  v4[3] = a2[3];
  *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * (unsigned __int16)(*(_WORD *)(this + 0xE))++) = a3;
  return 1;
}
