char __stdcall sub_6E0A50(int a1)
{
  int v1; // eax

  if ( !a1 )
    return 0;
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( !v1 )
    return 0;
  while ( (char *)v1 != dword_B3FD14 )
  {
    v1 = *(_DWORD *)(v1 + 4);
    if ( !v1 )
      return 0;
  }
  return 1;
}
