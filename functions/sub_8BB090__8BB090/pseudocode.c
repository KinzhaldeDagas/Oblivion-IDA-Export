_WORD *__stdcall sub_8BB090(char *Filename)
{
  _WORD *v1; // eax
  _WORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  char *v6; // [esp-4h] [ebp-8h]

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x17); /*0x8bb09d*/
  v6 = Filename; /*0x8bb0a4*/
  v1[2] = 0x14; /*0x8bb0a7*/
  v2 = sub_8BB120(v1, v6); /*0x8bb0b2*/
  if ( *(_BYTE *)(*(int (__thiscall **)(_WORD *, char **))(*(_DWORD *)v2 + 0x14))(v2, &Filename) ) /*0x8bb0c0*/
    return v2; /*0x8bb10b*/
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x24, 0x17); /*0x8bb0d2*/
  *(_WORD *)(v3 + 4) = 0x24; /*0x8bb0dd*/
  v4 = sub_8F5BC0((_DWORD *)v3, (int)v2, 0x1000); /*0x8bb0ed*/
  if ( v2[2] ) /*0x8bb0e8*/
  {
    if ( !--v2[3] ) /*0x8bb0f5*/
      (**(void (__thiscall ***)(_WORD *, int))v2)(v2, 1); /*0x8bb102*/
  }
  return v4; /*0x8bb107*/
}
