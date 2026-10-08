_DWORD *__stdcall sub_8BB240(char *Filename)
{
  _WORD *v1; // eax
  _WORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // edi

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x17); /*0x8bb24e*/
  v1[2] = 0x10; /*0x8bb258*/
  v2 = sub_8BB2B0(v1, Filename); /*0x8bb26f*/
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C, 0x17); /*0x8bb271*/
  *(_WORD *)(v3 + 4) = 0x1C; /*0x8bb27c*/
  v4 = sub_8F5F10((_DWORD *)v3, (int)v2, 0x1000); /*0x8bb28c*/
  if ( v2[2] ) /*0x8bb287*/
  {
    if ( !--v2[3] ) /*0x8bb294*/
      (**(void (__thiscall ***)(_WORD *, int))v2)(v2, 1); /*0x8bb2a1*/
  }
  return v4; /*0x8bb2a5*/
}
