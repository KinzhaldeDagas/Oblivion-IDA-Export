__int64 __cdecl sub_710580(__int64 a1, int a2, int a3, int a4)
{
  __int64 result; // rax
  int v5; // ebp
  unsigned int v6; // ebx
  int v7; // edi
  float *v8; // ecx
  float *v9; // esi
  unsigned int v10; // edi
  double v11; // st7
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // edi

  result = a1; /*0x710584*/
  v5 = a4; /*0x71058a*/
  v6 = 0; /*0x71058f*/
  v7 = a3; /*0x710597*/
  if ( a2 >= 4 ) /*0x71059b*/
  {
    v8 = (float *)(a3 + 4); /*0x7105a1*/
    v9 = (float *)(a4 + 0xC); /*0x7105a4*/
    v10 = ((unsigned int)(a2 - 4) >> 2) + 1; /*0x7105b3*/
    v6 = 4 * v10; /*0x7105b6*/
    do /*0x71070d*/
    {
      v9[0xFFFFFFFD] = *(float *)a1 * v8[0xFFFFFFFF] /*0x7105d6*/
                     + *(float *)HIDWORD(a1)
                     + *(float *)(a1 + 4) * *v8
                     + v8[1] * *(float *)(a1 + 8);
      *(float *)((char *)v8 + a4 - a3) = *(float *)(a1 + 0xC) * v8[0xFFFFFFFF] /*0x7105f1*/
                                       + *(float *)(HIDWORD(a1) + 4)
                                       + *(float *)(a1 + 0x10) * *v8
                                       + *(float *)(a1 + 0x14) * v8[1];
      v9[0xFFFFFFFF] = *(float *)(a1 + 0x18) * v8[0xFFFFFFFF] /*0x71060c*/
                     + *(float *)(HIDWORD(a1) + 8)
                     + *v8 * *(float *)(a1 + 0x1C)
                     + *(float *)(a1 + 0x20) * v8[1];
      *v9 = *(float *)a1 * v8[2] + *(float *)HIDWORD(a1) + *(float *)(a1 + 4) * v8[3] + v8[4] * *(float *)(a1 + 8); /*0x710626*/
      v9[1] = *(float *)(a1 + 0xC) * v8[2] /*0x710641*/
            + *(float *)(HIDWORD(a1) + 4)
            + *(float *)(a1 + 0x10) * v8[3]
            + *(float *)(a1 + 0x14) * v8[4];
      v9[2] = *(float *)(a1 + 0x18) * v8[2] /*0x71065d*/
            + *(float *)(HIDWORD(a1) + 8)
            + v8[3] * *(float *)(a1 + 0x1C)
            + *(float *)(a1 + 0x20) * v8[4];
      v9[3] = *(float *)a1 * v8[5] + *(float *)HIDWORD(a1) + *(float *)(a1 + 4) * v8[6] + v8[7] * *(float *)(a1 + 8); /*0x710677*/
      v9[4] = *(float *)(a1 + 0xC) * v8[5] /*0x710693*/
            + *(float *)(HIDWORD(a1) + 4)
            + *(float *)(a1 + 0x10) * v8[6]
            + *(float *)(a1 + 0x14) * v8[7];
      v11 = *(float *)(a1 + 0x18) * v8[5]; /*0x710699*/
      v8 += 0xC; /*0x71069c*/
      v9 += 0xC; /*0x71069f*/
      --v10; /*0x7106a2*/
      v9[0xFFFFFFF9] = v11 /*0x7106b8*/
                     + *(float *)(HIDWORD(a1) + 8)
                     + v8[0xFFFFFFFA] * *(float *)(a1 + 0x1C)
                     + *(float *)(a1 + 0x20) * v8[0xFFFFFFFB];
      v9[0xFFFFFFFA] = *(float *)a1 * v8[0xFFFFFFFC] /*0x7106d2*/
                     + *(float *)HIDWORD(a1)
                     + *(float *)(a1 + 4) * v8[0xFFFFFFFD]
                     + v8[0xFFFFFFFE] * *(float *)(a1 + 8);
      v9[0xFFFFFFFB] = *(float *)(a1 + 0xC) * v8[0xFFFFFFFC] /*0x7106ee*/
                     + *(float *)(HIDWORD(a1) + 4)
                     + *(float *)(a1 + 0x10) * v8[0xFFFFFFFD]
                     + *(float *)(a1 + 0x14) * v8[0xFFFFFFFE];
      v9[0xFFFFFFFC] = *(float *)(a1 + 0x18) * v8[0xFFFFFFFC] /*0x71070a*/
                     + *(float *)(HIDWORD(a1) + 8)
                     + v8[0xFFFFFFFD] * *(float *)(a1 + 0x1C)
                     + *(float *)(a1 + 0x20) * v8[0xFFFFFFFE];
    }
    while ( v10 ); /*0x71070d*/
    v5 = a4; /*0x710713*/
    v7 = a3; /*0x710717*/
  }
  if ( v6 < a2 ) /*0x71071f*/
  {
    v12 = 0xC * v6 + v5; /*0x710728*/
    v13 = 0xC * v6 + v7 + 4; /*0x71072b*/
    v14 = v5 - v7; /*0x71072f*/
    v15 = a2 - v6; /*0x710735*/
    do /*0x710793*/
    {
      v13 += 0xC; /*0x710739*/
      v12 += 0xC; /*0x71073f*/
      --v15; /*0x710742*/
      *(float *)(v12 - 0xC) = *(float *)a1 * *(float *)(v13 - 0x10) /*0x710757*/
                            + *(float *)HIDWORD(a1)
                            + *(float *)(a1 + 4) * *(float *)(v13 - 0xC)
                            + *(float *)(v13 - 8) * *(float *)(a1 + 8);
      *(float *)(v13 + v14 - 0xC) = *(float *)(a1 + 0xC) * *(float *)(v13 - 0x10) /*0x710773*/
                                  + *(float *)(HIDWORD(a1) + 4)
                                  + *(float *)(a1 + 0x10) * *(float *)(v13 - 0xC)
                                  + *(float *)(a1 + 0x14) * *(float *)(v13 - 8);
      *(float *)(v12 - 4) = *(float *)(a1 + 0x18) * *(float *)(v13 - 0x10) /*0x710790*/
                          + *(float *)(HIDWORD(a1) + 8)
                          + *(float *)(v13 - 0xC) * *(float *)(a1 + 0x1C)
                          + *(float *)(a1 + 0x20) * *(float *)(v13 - 8);
    }
    while ( v15 ); /*0x710793*/
  }
  return result; /*0x710795*/
}
