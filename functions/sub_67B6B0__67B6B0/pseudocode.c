int __thiscall sub_67B6B0(int **this, int a2, _DWORD *a3)
{
  int *v3; // edx
  int result; // eax
  int v5; // esi
  int i; // edi
  int v7; // ecx
  int v8; // ecx

  v3 = *this;
  result = 0;
  v5 = 0;
  for ( i = 0; v3; v3 = (int *)v3[1] )
  {
    v7 = *v3;
    if ( !*v3 )
      break;
    if ( *(_DWORD *)v7 == a2 )
    {
      result = *v3;
      break;
    }
    if ( *(_BYTE *)(v7 + 4) )
      ++i;
    else
      ++v5;
  }
  if ( a3 )
  {
    if ( result )
    {
      v8 = i;
      if ( !*(_BYTE *)(result + 4) )
        v8 = v5;
      *a3 = v8;
    }
  }
  return result;
}
