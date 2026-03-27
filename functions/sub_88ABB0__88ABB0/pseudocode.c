int __cdecl sub_88ABB0(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  char v4; // al
  int v5; // esi
  int v6; // eax

  result = a1;
  v2 = *(_DWORD *)(a1 + 0x10);
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(_DWORD *)(a1 + 0x10));
    if ( v3 )
    {
      while ( (char *)v3 != dword_BA7D84 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_5;
      }
      v4 = 1;
    }
    else
    {
LABEL_5:
      v4 = 0;
    }
    result = v4 != 0 ? v2 : 0;
    v5 = result;
    if ( result )
    {
      v6 = *(_DWORD *)(result + 8);
      if ( !v6 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x9C))(v5, 6);
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 0x50) + 8))(*(_DWORD *)(v6 + 0x50));
      if ( result == 7 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x9C))(v5, 6);
    }
  }
  return result;
}
