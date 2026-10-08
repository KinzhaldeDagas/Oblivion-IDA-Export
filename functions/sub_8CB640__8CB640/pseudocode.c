char __cdecl sub_8CB640(int a1, int a2, int a3)
{
  char v3; // al
  char result; // al
  int v5; // eax
  _DWORD *v6; // eax
  _WORD *v7; // esi
  int v8; // edi

  v3 = *(_BYTE *)(a2 + 0x91); /*0x8cb645*/
  *(_DWORD *)(a2 + 8) = a1; /*0x8cb652*/
  if ( v3 ) /*0x8cb655*/
    return sub_8DDE30(*(_WORD **)(a1 + 0x30), a2); /*0x8cb65b*/
  result = *(_BYTE *)(a1 + 0xA4); /*0x8cb663*/
  if ( result ) /*0x8cb66b*/
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x6C, 0x2F); /*0x8cb67e*/
    *(_WORD *)(v5 + 4) = 0x6C; /*0x8cb684*/
    v6 = sub_8DE400((_DWORD *)v5, a1); /*0x8cb68a*/
    v7 = v6; /*0x8cb693*/
    if ( a3 == 1 ) /*0x8cb69c*/
    {
      *((_BYTE *)v6 + 0x28) = 1; /*0x8cb69e*/
      *((_BYTE *)v6 + 0x29) = 1; /*0x8cb6a1*/
      v8 = a1 + 0x38; /*0x8cb6a8*/
      *((_WORD *)v6 + 0x10) = *(_WORD *)(a1 + 0x3C); /*0x8cb6ab*/
      if ( *(_DWORD *)(a1 + 0x3C) == (*(_DWORD *)(a1 + 0x40) & 0x3FFFFFFF) ) /*0x8cb6bd*/
        sub_8A6EE0((const void **)v8, 4); /*0x8cb6c2*/
      *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * *(_DWORD *)(a1 + 0x3C)) = v7; /*0x8cb6cf*/
    }
    else
    {
      *((_BYTE *)v6 + 0x28) = 0; /*0x8cb6d4*/
      *((_BYTE *)v6 + 0x29) = 0; /*0x8cb6d8*/
      v8 = a1 + 0x44; /*0x8cb6e0*/
      *((_WORD *)v6 + 0x10) = *(_WORD *)(a1 + 0x48); /*0x8cb6e3*/
      if ( *(_DWORD *)(a1 + 0x48) == (*(_DWORD *)(a1 + 0x4C) & 0x3FFFFFFF) ) /*0x8cb6f4*/
        sub_8A6EE0((const void **)v8, 4); /*0x8cb6f9*/
      *(_DWORD *)(*(_DWORD *)(a1 + 0x44) + 4 * *(_DWORD *)(a1 + 0x48)) = v7; /*0x8cb706*/
    }
    ++*(_DWORD *)(v8 + 4); /*0x8cb710*/
    return sub_8DDE30(v7, a2); /*0x8cb713*/
  }
  else if ( a3 == 1 ) /*0x8cb721*/
  {
    return sub_8DDE30(**(_WORD ***)(a1 + 0x38), a2); /*0x8cb729*/
  }
  return result; /*0x8cb660*/
}
