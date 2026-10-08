double __cdecl sub_548A60(float a1, float a2, float a3, int a4, int a5)
{
  unsigned int v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st4
  int v10; // [esp+10h] [ebp+10h]

  if ( a4 > 0x64 ) /*0x548a69*/
    a4 = 0x64; /*0x548a6b*/
  v5 = a5; /*0x548a79*/
  v6 = fCostant_100; /*0x548a83*/
  v7 = ((double)a4 * a2 + a1) / v6; /*0x548a89*/
  if ( a5 < 0 ) /*0x548a8b*/
    v5 = -a5; /*0x548a8d*/
  v8 = 1.0; /*0x548a91*/
  while ( 1 ) /*0x548a93*/
  {
    if ( (v5 & 1) != 0 ) /*0x548a95*/
      v8 = v8 * v7; /*0x548a97*/
    v5 >>= 1; /*0x548a99*/
    if ( !v5 ) /*0x548a9b*/
      break; /*0x548a9b*/
    v7 = v7 * v7; /*0x548a9f*/
  }
  if ( a5 >= 0 ) /*0x548aa7*/
    *(float *)&v10 = v8 * v6 + a3; /*0x548ac2*/
  else
    *(float *)&v10 = 1.0 / v8 * v6 + a3; /*0x548ab1*/
  return *(float *)&v10; /*0x548ab9*/
}
