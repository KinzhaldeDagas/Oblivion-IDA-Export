float *__cdecl sub_7107A0(float *a1, unsigned int a2, int a3, int a4)
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

  result = a1;
  v5 = a3;
  v6 = a4;
  v7 = 0;
  if ( (int)a2 >= 4 )
  {
    v8 = (float *)(a4 + 0xC);
    v9 = ((a2 - 4) >> 2) + 1;
    v10 = (float *)(a3 + 4);
    v7 = 4 * v9;
    do
    {
      v8[0xFFFFFFFD] = v10[0xFFFFFFFF] * *a1 + *v10 * a1[3] + v10[1] * a1[6];
      *(float *)((char *)v10 + a4 - a3) = v10[0xFFFFFFFF] * a1[1] + *v10 * a1[4] + v10[1] * a1[7];
      v8[0xFFFFFFFF] = v10[0xFFFFFFFF] * a1[2] + *v10 * a1[5] + v10[1] * a1[8];
      *v8 = v10[2] * *a1 + v10[3] * a1[3] + v10[4] * a1[6];
      v8[1] = v10[2] * a1[1] + v10[3] * a1[4] + v10[4] * a1[7];
      v8[2] = v10[2] * a1[2] + v10[3] * a1[5] + v10[4] * a1[8];
      v8[3] = v10[5] * *a1 + v10[6] * a1[3] + v10[7] * a1[6];
      v8[4] = v10[5] * a1[1] + v10[6] * a1[4] + v10[7] * a1[7];
      v8[5] = v10[5] * a1[2] + v10[6] * a1[5] + v10[7] * a1[8];
      v10 += 0xC;
      v8 += 0xC;
      --v9;
      v8[0xFFFFFFFA] = v10[0xFFFFFFFC] * *a1 + v10[0xFFFFFFFD] * a1[3] + v10[0xFFFFFFFE] * a1[6];
      v8[0xFFFFFFFB] = v10[0xFFFFFFFC] * a1[1] + v10[0xFFFFFFFD] * a1[4] + v10[0xFFFFFFFE] * a1[7];
      v8[0xFFFFFFFC] = v10[0xFFFFFFFC] * a1[2] + v10[0xFFFFFFFD] * a1[5] + v10[0xFFFFFFFE] * a1[8];
    }
    while ( v9 );
    v6 = a4;
    v5 = a3;
  }
  if ( v7 < a2 )
  {
    v11 = 0xC * v7 + v6;
    v12 = v6 - v5;
    v13 = 0xC * v7 + v5 + 4;
    v14 = a2 - v7;
    do
    {
      v15 = *(float *)(v13 - 4);
      v13 += 0xC;
      v11 += 0xC;
      --v14;
      *(float *)(v11 - 0xC) = v15 * *a1 + *(float *)(v13 - 0xC) * a1[3] + *(float *)(v13 - 8) * a1[6];
      *(float *)(v13 + v12 - 0xC) = *(float *)(v13 - 0x10) * a1[1]
                                  + *(float *)(v13 - 0xC) * a1[4]
                                  + *(float *)(v13 - 8) * a1[7];
      *(float *)(v11 - 4) = *(float *)(v13 - 0x10) * a1[2] + *(float *)(v13 - 0xC) * a1[5] + *(float *)(v13 - 8) * a1[8];
    }
    while ( v14 );
  }
  return result;
}
