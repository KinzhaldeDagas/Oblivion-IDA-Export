int __cdecl sub_4A2BA0(int a1, int a2)
{
  int v2; // ebx
  unsigned int i; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax

  v2 = 0;
  if ( !a1 )
    return 0;
  for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5);
      if ( v6 )
      {
        if ( (_BYTE)a2 || (*(_BYTE *)(v6 + 0x18) & 1) == 0 )
          v2 += *(unsigned __int16 *)(*(_DWORD *)(v6 + 0xB4) + 8);
      }
      else
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
        v2 += sub_4A2BA0(v7, a2);
      }
    }
  }
  return v2;
}
