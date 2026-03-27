char __stdcall sub_6D1B90(int a1)
{
  int v1; // eax

  if ( !a1 )
    return 0;
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( !v1 )
    return 0;
  while ( (char *)v1 != dword_B3F96C )
  {
    v1 = *(_DWORD *)(v1 + 4);
    if ( !v1 )
      return 0;
  }
  return 1;
}
