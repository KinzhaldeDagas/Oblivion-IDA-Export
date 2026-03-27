double __cdecl sub_548A60(float a1, float a2, float a3, int a4, int a5)
{
  unsigned int v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st4
  int v10; // [esp+10h] [ebp+10h]

  if ( a4 > 0x64 )
    a4 = 0x64;
  v5 = a5;
  v6 = fCostant_100;
  v7 = ((double)a4 * a2 + a1) / v6;
  if ( a5 < 0 )
    v5 = -a5;
  v8 = 1.0;
  while ( 1 )
  {
    if ( (v5 & 1) != 0 )
      v8 = v8 * v7;
    v5 >>= 1;
    if ( !v5 )
      break;
    v7 = v7 * v7;
  }
  if ( a5 >= 0 )
    *(float *)&v10 = v8 * v6 + a3;
  else
    *(float *)&v10 = 1.0 / v8 * v6 + a3;
  return *(float *)&v10;
}
