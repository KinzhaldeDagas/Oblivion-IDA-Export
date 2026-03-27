void __cdecl sub_791410(int a1)
{
  char *v1; // ebx
  char *v2; // esi
  int v3; // [esp+Ch] [ebp-4h]

  v1 = *(char **)(a1 + 8);
  LOBYTE(v3) = 0;
  if ( *(_DWORD *)(a1 + 4) > (unsigned int)v1 )
    _invalid_parameter_noinfo();
  v2 = *(char **)(a1 + 4);
  if ( (unsigned int)v2 > *(_DWORD *)(a1 + 8) )
    _invalid_parameter_noinfo();
  sub_790C10(v2, v1, (v1 - v2) >> 2, v3);
}
