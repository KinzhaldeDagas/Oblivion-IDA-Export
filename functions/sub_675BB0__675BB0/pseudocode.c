int __thiscall sub_675BB0(_DWORD *this, unsigned int a2, int a3)
{
  int *v3; // ecx
  int result; // eax
  int v5; // edx

  if ( a2 > 6 )
    return 0;
  v3 = (int *)*(this + a2 + 0xA);
  result = 0;
  while ( v3 )
  {
    v5 = *v3;
    if ( !*v3 )
      break;
    if ( result )
      break;
    v3 = (int *)v3[1];
    if ( *(_DWORD *)(v5 + 0x28) == a3 )
      result = v5;
  }
  return result;
}
