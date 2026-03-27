_DWORD *__stdcall sub_8BB240(char *Filename)
{
  _WORD *v1; // eax
  _WORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // edi

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x17);
  v1[2] = 0x10;
  v2 = sub_8BB2B0(v1, Filename);
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C, 0x17);
  *(_WORD *)(v3 + 4) = 0x1C;
  v4 = sub_8F5F10((_DWORD *)v3, (int)v2, 0x1000);
  if ( v2[2] )
  {
    if ( !--v2[3] )
      (**(void (__thiscall ***)(_WORD *, int))v2)(v2, 1);
  }
  return v4;
}
