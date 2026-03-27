__int64 __cdecl sub_710580(__int64 a1, unsigned int a2, int a3, int a4)
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

  result = a1;
  v5 = a4;
  v6 = 0;
  v7 = a3;
  if ( (int)a2 >= 4 )
  {
    v8 = (float *)(a3 + 4);
    v9 = (float *)(a4 + 0xC);
    v10 = ((a2 - 4) >> 2) + 1;
    v6 = 4 * v10;
    do
    {
      v9[0xFFFFFFFD] = *(float *)a1 * v8[0xFFFFFFFF]
                     + *(float *)HIDWORD(a1)
                     + *(float *)(a1 + 4) * *v8
                     + v8[1] * *(float *)(a1 + 8);
      *(float *)((char *)v8 + a4 - a3) = *(float *)(a1 + 0xC) * v8[0xFFFFFFFF]
                                       + *(float *)(HIDWORD(a1) + 4)
                                       + *(float *)(a1 + 0x10) * *v8
                                       + *(float *)(a1 + 0x14) * v8[1];
      v9[0xFFFFFFFF] = *(float *)(a1 + 0x18) * v8[0xFFFFFFFF]
                     + *(float *)(HIDWORD(a1) + 8)
                     + *v8 * *(float *)(a1 + 0x1C)
                     + *(float *)(a1 + 0x20) * v8[1];
      *v9 = *(float *)a1 * v8[2] + *(float *)HIDWORD(a1) + *(float *)(a1 + 4) * v8[3] + v8[4] * *(float *)(a1 + 8);
      v9[1] = *(float *)(a1 + 0xC) * v8[2]
            + *(float *)(HIDWORD(a1) + 4)
            + *(float *)(a1 + 0x10) * v8[3]
            + *(float *)(a1 + 0x14) * v8[4];
      v9[2] = *(float *)(a1 + 0x18) * v8[2]
            + *(float *)(HIDWORD(a1) + 8)
            + v8[3] * *(float *)(a1 + 0x1C)
            + *(float *)(a1 + 0x20) * v8[4];
      v9[3] = *(float *)a1 * v8[5] + *(float *)HIDWORD(a1) + *(float *)(a1 + 4) * v8[6] + v8[7] * *(float *)(a1 + 8);
      v9[4] = *(float *)(a1 + 0xC) * v8[5]
            + *(float *)(HIDWORD(a1) + 4)
            + *(float *)(a1 + 0x10) * v8[6]
            + *(float *)(a1 + 0x14) * v8[7];
      v11 = *(float *)(a1 + 0x18) * v8[5];
      v8 += 0xC;
      v9 += 0xC;
      --v10;
      v9[0xFFFFFFF9] = v11
                     + *(float *)(HIDWORD(a1) + 8)
                     + v8[0xFFFFFFFA] * *(float *)(a1 + 0x1C)
                     + *(float *)(a1 + 0x20) * v8[0xFFFFFFFB];
      v9[0xFFFFFFFA] = *(float *)a1 * v8[0xFFFFFFFC]
                     + *(float *)HIDWORD(a1)
                     + *(float *)(a1 + 4) * v8[0xFFFFFFFD]
                     + v8[0xFFFFFFFE] * *(float *)(a1 + 8);
      v9[0xFFFFFFFB] = *(float *)(a1 + 0xC) * v8[0xFFFFFFFC]
                     + *(float *)(HIDWORD(a1) + 4)
                     + *(float *)(a1 + 0x10) * v8[0xFFFFFFFD]
                     + *(float *)(a1 + 0x14) * v8[0xFFFFFFFE];
      v9[0xFFFFFFFC] = *(float *)(a1 + 0x18) * v8[0xFFFFFFFC]
                     + *(float *)(HIDWORD(a1) + 8)
                     + v8[0xFFFFFFFD] * *(float *)(a1 + 0x1C)
                     + *(float *)(a1 + 0x20) * v8[0xFFFFFFFE];
    }
    while ( v10 );
    v5 = a4;
    v7 = a3;
  }
  if ( v6 < a2 )
  {
    v12 = 0xC * v6 + v5;
    v13 = 0xC * v6 + v7 + 4;
    v14 = v5 - v7;
    v15 = a2 - v6;
    do
    {
      v13 += 0xC;
      v12 += 0xC;
      --v15;
      *(float *)(v12 - 0xC) = *(float *)a1 * *(float *)(v13 - 0x10)
                            + *(float *)HIDWORD(a1)
                            + *(float *)(a1 + 4) * *(float *)(v13 - 0xC)
                            + *(float *)(v13 - 8) * *(float *)(a1 + 8);
      *(float *)(v13 + v14 - 0xC) = *(float *)(a1 + 0xC) * *(float *)(v13 - 0x10)
                                  + *(float *)(HIDWORD(a1) + 4)
                                  + *(float *)(a1 + 0x10) * *(float *)(v13 - 0xC)
                                  + *(float *)(a1 + 0x14) * *(float *)(v13 - 8);
      *(float *)(v12 - 4) = *(float *)(a1 + 0x18) * *(float *)(v13 - 0x10)
                          + *(float *)(HIDWORD(a1) + 8)
                          + *(float *)(v13 - 0xC) * *(float *)(a1 + 0x1C)
                          + *(float *)(a1 + 0x20) * *(float *)(v13 - 8);
    }
    while ( v15 );
  }
  return result;
}
