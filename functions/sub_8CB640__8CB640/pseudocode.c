char __cdecl sub_8CB640(int a1, int a2, int a3)
{
  char v3; // al
  char result; // al
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // edi

  v3 = *(_BYTE *)(a2 + 0x91);
  *(_DWORD *)(a2 + 8) = a1;
  if ( v3 )
    return sub_8DDE30(*(_DWORD *)(a1 + 0x30), a2);
  result = *(_BYTE *)(a1 + 0xA4);
  if ( result )
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x6C, 0x2F);
    *(_WORD *)(v5 + 4) = 0x6C;
    v6 = sub_8DE400((_DWORD *)v5, a1);
    v7 = (int)v6;
    if ( a3 == 1 )
    {
      *((_BYTE *)v6 + 0x28) = 1;
      *((_BYTE *)v6 + 0x29) = 1;
      v8 = a1 + 0x38;
      *((_WORD *)v6 + 0x10) = *(_WORD *)(a1 + 0x3C);
      if ( *(_DWORD *)(a1 + 0x3C) == (*(_DWORD *)(a1 + 0x40) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)v8, 4);
      *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * *(_DWORD *)(a1 + 0x3C)) = v7;
    }
    else
    {
      *((_BYTE *)v6 + 0x28) = 0;
      *((_BYTE *)v6 + 0x29) = 0;
      v8 = a1 + 0x44;
      *((_WORD *)v6 + 0x10) = *(_WORD *)(a1 + 0x48);
      if ( *(_DWORD *)(a1 + 0x48) == (*(_DWORD *)(a1 + 0x4C) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)v8, 4);
      *(_DWORD *)(*(_DWORD *)(a1 + 0x44) + 4 * *(_DWORD *)(a1 + 0x48)) = v7;
    }
    ++*(_DWORD *)(v8 + 4);
    return sub_8DDE30(v7, a2);
  }
  else if ( a3 == 1 )
  {
    return sub_8DDE30(**(_DWORD **)(a1 + 0x38), a2);
  }
  return result;
}
