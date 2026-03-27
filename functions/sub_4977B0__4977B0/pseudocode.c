char __cdecl sub_4977B0(int a1)
{
  char v1; // bl
  unsigned int v2; // ebp
  unsigned int i; // esi
  int v4; // ecx
  int v5; // eax

  if ( !a1 )
    return 0;
  v1 = sub_497420(a1) != 0;
  v2 = *(unsigned __int16 *)(a1 + 0xB6);
  for ( i = 0; i < v2; ++i )
  {
    if ( *(unsigned __int16 *)(a1 + 0xB6) > i )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
      if ( v4 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( v5 )
          v1 += sub_4977B0(v5);
      }
    }
  }
  return v1;
}
