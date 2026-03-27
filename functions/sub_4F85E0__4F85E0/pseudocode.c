char __cdecl sub_4F85E0(_DWORD *a1, int a2, int a3, double *a4)
{
  int v4; // ecx
  bool v5; // zf
  char result; // al

  *a4 = 0.0;
  if ( !a1 )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    return 1;
  v4 = a1[0x16];
  if ( !v4 )
    return 1;
  v5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x64))(v4) == 0;
  result = 1;
  if ( !v5 )
    *a4 = 1.0;
  return result;
}
