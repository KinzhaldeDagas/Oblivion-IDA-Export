int __thiscall sub_675BF0(_DWORD *this, int a2, int a3, unsigned int a4)
{
  int *v4; // ecx
  int result; // eax
  int v6; // edx

  if ( a4 > 6 )
    return 0;
  v4 = (int *)*(this + a4 + 0xA);
  result = 0;
  while ( v4 )
  {
    v6 = *v4;
    if ( !*v4 )
      break;
    if ( result )
      break;
    v4 = (int *)v4[1];
    if ( *(_DWORD *)(v6 + 0xC) == a2 && *(_DWORD *)(v6 + 8) == a3 )
      result = v6;
  }
  return result;
}
