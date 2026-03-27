int __cdecl sub_47FAC0(int a1)
{
  int v1; // esi
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 0xA8);
  if ( !v1 )
    return 0;
  v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 4))(*(_DWORD *)(a1 + 0xA8));
  if ( !v3 )
    return 0;
  while ( (char *)v3 != dword_BA7D24 )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0;
  }
  return v1;
}
