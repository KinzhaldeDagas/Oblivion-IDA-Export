int __cdecl sub_730840(int a1, int a2, float a3, float a4, int a5, int a6)
{
  double v6; // st7
  int result; // eax
  double v8; // st6
  double v9; // st5
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // [esp+18h] [ebp+18h]
  int v16; // [esp+18h] [ebp+18h]

  v6 = a4; /*0x730840*/
  result = a1; /*0x730844*/
  v8 = a3; /*0x730848*/
  v9 = dbl_A3D5A8; /*0x730851*/
  v11 = 0; /*0x73085d*/
  if ( a6 >= 4 ) /*0x730862*/
  {
    v12 = a1 + 4; /*0x730872*/
    v13 = ((unsigned int)(a6 - 4) >> 2) + 1; /*0x730875*/
    v14 = a5 + 8; /*0x730878*/
    v11 = 4 * v13; /*0x73087b*/
    do /*0x7308e0*/
    {
      v15 = *(__int16 *)(v12 - 4); /*0x730887*/
      v12 += 8; /*0x73088b*/
      v14 += 0x10; /*0x73088e*/
      --v13; /*0x730891*/
      *(float *)(v14 - 0x18) = (double)v15 / v9 * v6 + v8; /*0x73089e*/
      *(float *)(v14 - 0x14) = (double)*(__int16 *)(v12 - 0xA) / v9 * v6 + v8; /*0x7308b3*/
      *(float *)(v14 - 0x10) = (double)*(__int16 *)(v12 - 8) / v9 * v6 + v8; /*0x7308c8*/
      *(float *)(v14 - 0xC) = (double)*(__int16 *)(v12 - 6) / v9 * v6 + v8; /*0x7308dd*/
    }
    while ( v13 ); /*0x7308e0*/
    result = a1; /*0x7308e2*/
  }
  for ( ; v11 < a6; *(float *)(a5 + 4 * v11 - 4) = (double)v16 / v9 * v6 + v8 ) /*0x7308ed*/
    v16 = *(__int16 *)(result + 2 * v11++); /*0x7308f3*/
  return result; /*0x730915*/
}
