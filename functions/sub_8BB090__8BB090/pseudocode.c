_WORD *__stdcall sub_8BB090(char *Filename)
{
  _WORD *v1; // eax
  _WORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  char *v6; // [esp-4h] [ebp-8h]

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x17);
  v6 = Filename;
  v1[2] = 0x14;
  v2 = sub_8BB120(v1, v6);
  if ( *(_BYTE *)(*(int (__thiscall **)(_WORD *, char **))(*(_DWORD *)v2 + 0x14))(v2, &Filename) )
    return v2;
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x24, 0x17);
  *(_WORD *)(v3 + 4) = 0x24;
  v4 = sub_8F5BC0((_DWORD *)v3, (int)v2, 0x1000);
  if ( v2[2] )
  {
    if ( !--v2[3] )
      (**(void (__thiscall ***)(_WORD *, int))v2)(v2, 1);
  }
  return v4;
}
