int __cdecl sub_497DD0(int a1, int a2)
{
  int v3; // eax

  if ( !a2 )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  if ( !v3 )
    return 0;
  while ( v3 != a1 )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0;
  }
  return a2;
}
