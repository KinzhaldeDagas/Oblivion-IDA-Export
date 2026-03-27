double __cdecl sub_507010(float a1, int a2)
{
  unsigned int v3; // eax
  double v4; // st7
  double v5; // st7
  int v7; // [esp+8h] [ebp+8h]

  v3 = a2;
  if ( a2 < 0 )
    v3 = -a2;
  *(float *)&v7 = 1.0;
  while ( 1 )
  {
    v4 = a1;
    if ( (v3 & 1) != 0 )
      *(float *)&v7 = *(float *)&v7 * v4;
    v3 >>= 1;
    if ( !v3 )
      break;
    a1 = v4 * v4;
  }
  v5 = *(float *)&v7;
  if ( a2 < 0 )
    return (float)(1.0 / v5);
  return (float)v5;
}
