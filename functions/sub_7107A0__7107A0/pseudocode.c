float *__cdecl sub_7107A0(float *a1, int a2, int a3, int a4)
{
  float *result; // eax
  int v5; // ebp
  int v6; // esi
  unsigned int v7; // edi
  float *v8; // edx
  unsigned int v9; // esi
  float *v10; // ecx
  unsigned int v11; // edx
  int v12; // esi
  int v13; // ecx
  unsigned int v14; // ebx
  double v15; // st7

  result = a1; /*0x7107a0*/
  v5 = a3; /*0x7107aa*/
  v6 = a4; /*0x7107af*/
  v7 = 0; /*0x7107b4*/
  if ( a2 >= 4 ) /*0x7107b9*/
  {
    v8 = (float *)(a4 + 0xC); /*0x7107bf*/
    v9 = ((unsigned int)(a2 - 4) >> 2) + 1; /*0x7107ce*/
    v10 = (float *)(a3 + 4); /*0x7107d1*/
    v7 = 4 * v9; /*0x7107d4*/
    do /*0x710911*/
    {
      v8[0xFFFFFFFD] = v10[0xFFFFFFFF] * *a1 + *v10 * a1[3] + v10[1] * a1[6]; /*0x7107f8*/
      *(float *)((char *)v10 + a4 - a3) = v10[0xFFFFFFFF] * a1[1] + *v10 * a1[4] + v10[1] * a1[7]; /*0x710810*/
      v8[0xFFFFFFFF] = v10[0xFFFFFFFF] * a1[2] + *v10 * a1[5] + v10[1] * a1[8]; /*0x710828*/
      *v8 = v10[2] * *a1 + v10[3] * a1[3] + v10[4] * a1[6]; /*0x710840*/
      v8[1] = v10[2] * a1[1] + v10[3] * a1[4] + v10[4] * a1[7]; /*0x710858*/
      v8[2] = v10[2] * a1[2] + v10[3] * a1[5] + v10[4] * a1[8]; /*0x710871*/
      v8[3] = v10[5] * *a1 + v10[6] * a1[3] + v10[7] * a1[6]; /*0x710889*/
      v8[4] = v10[5] * a1[1] + v10[6] * a1[4] + v10[7] * a1[7]; /*0x7108a2*/
      v8[5] = v10[5] * a1[2] + v10[6] * a1[5] + v10[7] * a1[8]; /*0x7108bb*/
      v10 += 0xC; /*0x7108be*/
      v8 += 0xC; /*0x7108c4*/
      --v9; /*0x7108c7*/
      v8[0xFFFFFFFA] = v10[0xFFFFFFFC] * *a1 + v10[0xFFFFFFFD] * a1[3] + v10[0xFFFFFFFE] * a1[6]; /*0x7108dc*/
      v8[0xFFFFFFFB] = v10[0xFFFFFFFC] * a1[1] + v10[0xFFFFFFFD] * a1[4] + v10[0xFFFFFFFE] * a1[7]; /*0x7108f5*/
      v8[0xFFFFFFFC] = v10[0xFFFFFFFC] * a1[2] + v10[0xFFFFFFFD] * a1[5] + v10[0xFFFFFFFE] * a1[8]; /*0x71090e*/
    }
    while ( v9 ); /*0x710911*/
    v6 = a4; /*0x710917*/
    v5 = a3; /*0x71091b*/
  }
  if ( v7 < a2 ) /*0x710921*/
  {
    v11 = 0xC * v7 + v6; /*0x71092a*/
    v12 = v6 - v5; /*0x71092d*/
    v13 = 0xC * v7 + v5 + 4; /*0x71092f*/
    v14 = a2 - v7; /*0x710933*/
    do /*0x710989*/
    {
      v15 = *(float *)(v13 - 4); /*0x710935*/
      v13 += 0xC; /*0x710938*/
      v11 += 0xC; /*0x71093d*/
      --v14; /*0x710940*/
      *(float *)(v11 - 0xC) = v15 * *a1 + *(float *)(v13 - 0xC) * a1[3] + *(float *)(v13 - 8) * a1[6]; /*0x710953*/
      *(float *)(v13 + v12 - 0xC) = *(float *)(v13 - 0x10) * a1[1] /*0x71096c*/
                                  + *(float *)(v13 - 0xC) * a1[4]
                                  + *(float *)(v13 - 8) * a1[7];
      *(float *)(v11 - 4) = *(float *)(v13 - 0x10) * a1[2] + *(float *)(v13 - 0xC) * a1[5] + *(float *)(v13 - 8) * a1[8]; /*0x710986*/
    }
    while ( v14 ); /*0x710989*/
  }
  return result; /*0x71098b*/
}
