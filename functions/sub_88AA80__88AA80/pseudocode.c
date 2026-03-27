char __cdecl sub_88AA80(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax
  char v5; // al
  _DWORD *v6; // ecx
  int v7; // esi

  LOBYTE(v2) = a1;
  v3 = *(_DWORD *)(a1 + 0x10);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 4))(*(_DWORD *)(a1 + 0x10));
    if ( v4 )
    {
      while ( (char *)v4 != dword_BA7D84 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    v2 = v5 != 0 ? v3 : 0;
    if ( v2 )
    {
      v6 = *(_DWORD **)(v2 + 8);
      v7 = a2;
      if ( v6 )
      {
        LOBYTE(v2) = *sub_8A63F0(v6, &a1) != 0;
        if ( (_BYTE)v2 )
          ++*(_DWORD *)(v7 + 0xC);
      }
      *(_BYTE *)(v7 + 4) = 0;
    }
  }
  return v2;
}
