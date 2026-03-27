int __cdecl ActiveEffect_Base_PostLinkAEList(_DWORD *a1, int a2)
{
  _DWORD *i; // esi
  int result; // eax
  int v4; // ecx

  for ( i = a1; i; i = (_DWORD *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 0x1C))(*i, a2);
  }
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 0x58);
    if ( v4 )
      return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v4 + 0x42C))(v4, a2, 1, 1, 1);
  }
  return result;
}
