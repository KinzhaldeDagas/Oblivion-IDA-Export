int __cdecl sub_898FE0(int a1, _DWORD *a2)
{
  int result; // eax
  int i; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi

  result = *(_DWORD *)(a1 + 0x38);
  for ( i = 0; i < result; ++i )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0x34) + 4 * i);
    v5 = *(_DWORD *)(v4 + 0x68);
    v6 = *(_DWORD *)(v4 + 0x6C) - 1;
    if ( v6 >= 0 )
    {
      v7 = v6 + 1;
      do
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 0xC) + 0xC))(*(_DWORD *)(v5 + 0xC)) != 0xB )
          sub_8DA100(a2, *(_DWORD *)v5);
        v5 += 0x1C;
        --v7;
      }
      while ( v7 );
    }
    result = *(_DWORD *)(a1 + 0x38);
  }
  return result;
}
