int __thiscall sub_51F1D0(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  int *v4; // ecx
  int v5; // edx

  v2 = 0;
  result = 0;
  v4 = this + 0xF;
  if ( v4 )
  {
    do
    {
      v5 = v4[1];
      if ( !v5 && !*v4 )
        break;
      if ( result )
        break;
      if ( v2 == a2 )
        result = *v4;
      v4 = (int *)v4[1];
      ++v2;
    }
    while ( v5 );
  }
  return result;
}
