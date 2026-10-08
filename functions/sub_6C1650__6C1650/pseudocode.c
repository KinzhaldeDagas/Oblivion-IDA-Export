void __cdecl sub_6C1650(float *a1, unsigned int a2)
{
  float *v3; // edx
  int v4; // esi
  float *v5; // eax
  int v6; // edi
  float *v7; // ecx
  double v8; // st7
  float *v9; // eax
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+24h] [ebp+8h]
  float v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]

  if ( a2 >= 2 ) /*0x6c1658*/
  {
    v11 = a1[1] + a1[1] - a1[8]; /*0x6c167f*/
    sub_6C1550(a1, v11, a1[8], 1.0, 1.0); /*0x6c168b*/
    v4 = a2 - 1; /*0x6c1690*/
    if ( a2 - 1 > 1 ) /*0x6c1699*/
    {
      v5 = v3; /*0x6c169c*/
      v6 = a2 - 2; /*0x6c169e*/
      do /*0x6c16e3*/
      {
        v12 = v5[0xE] - v5[7]; /*0x6c16ac*/
        v10 = v12; /*0x6c16b4*/
        v13 = v5[7] - *v5; /*0x6c16bc*/
        sub_6C1550(v5 + 7, v5[1], v5[0xF], v13, v10); /*0x6c16d6*/
        --v6; /*0x6c16de*/
        v5 = v7; /*0x6c16e1*/
      }
      while ( v6 ); /*0x6c16e3*/
    }
    v8 = v3[7 * v4 + 1]; /*0x6c16fc*/
    v9 = &v3[7 * a2 - 0xD]; /*0x6c1711*/
    v14 = v8 + v8 - *v9; /*0x6c1717*/
    sub_6C1550(&v3[7 * v4], *v9, v14, 1.0, 1.0); /*0x6c1729*/
  }
}
