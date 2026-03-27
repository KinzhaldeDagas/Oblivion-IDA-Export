char __cdecl sub_5368B0(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi
  int v3; // eax
  char result; // al
  int v5; // eax
  int v6; // edi
  unsigned int v7; // esi

  if ( !a1 )
    return 0;
  v1 = sub_47FAC0(a1);
  if ( v1 )
  {
    v2 = *(_DWORD **)(v1 + 0x10);
    if ( v2 )
    {
      v3 = v2[2];
      if ( (!v3 || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 0x50) + 8))(*(_DWORD *)(v3 + 0x50)) != 6)
        && sub_4B6D90(v2) != 7 )
      {
        return 1;
      }
    }
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = 0;
  if ( !*(_WORD *)(v5 + 0xB6) )
    return 0;
  do
  {
    result = sub_5368B0(*(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * v7));
    if ( result )
      break;
    ++v7;
  }
  while ( *(unsigned __int16 *)(v6 + 0xB6) > v7 );
  return result;
}
