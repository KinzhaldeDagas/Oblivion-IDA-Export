signed int __cdecl sub_8B3E60(int *a1, __m128 *a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  double v7; // st7
  int v8; // edi
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 *v11; // eax
  int v12; // eax
  float v13; // [esp+10h] [ebp-6Ch]
  float v14; // [esp+14h] [ebp-68h]
  int v15; // [esp+14h] [ebp-68h]
  float v16; // [esp+18h] [ebp-64h]
  unsigned int v17; // [esp+18h] [ebp-64h]
  __m128 v18; // [esp+1Ch] [ebp-60h]
  __m128 v19; // [esp+1Ch] [ebp-60h]
  __m128 v20; // [esp+2Ch] [ebp-50h] BYREF
  __m128 v21; // [esp+3Ch] [ebp-40h]
  __m128 v22[3]; // [esp+4Ch] [ebp-30h] BYREF

  v2 = a1[1];
  v3 = 0;
  v21 = 0;
  v18 = 0;
  v13 = 0.0;
  v14 = 0.0;
  if ( v2 <= 0 )
    return 1;
  v4 = *a1;
  v5 = 0;
  do
  {
    sub_88FCC0(&v20, (__m128 *)(v5 + v4 + 0x50), (__m128 *)(v5 + v4 + 0x10));
    v4 = *a1;
    v16 = *(float *)(v5 + *a1 + 4);
    v13 = v13 + v16;
    ++v3;
    v14 = v14 + *(float *)(v5 + *a1);
    v5 += 0x90;
    v18 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v16), (__m128)LODWORD(v16), 0), v20));
  }
  while ( v3 < a1[1] );
  if ( v13 <= (double)*(float *)&SrcStr )
    return 1;
  v7 = fConstant_1 / v13;
  a2->m128_f32[1] = v13;
  a2->m128_f32[0] = v14;
  v8 = 0;
  v15 = 0;
  *(float *)&v17 = v7;
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v18);
  a2[1] = v9;
  v19 = v9;
  v10 = v21;
  a2[2] = v21;
  a2[3] = v10;
  for ( a2[4] = v10; v15 < a1[1]; ++v15 )
  {
    v11 = (__m128 *)(v8 + *a1);
    v22[0] = v11[2];
    v22[1] = v11[3];
    v22[2] = v11[4];
    sub_8D2C60(v22, v11 + 5);
    sub_88FCC0(&v20, (__m128 *)(v8 + *a1 + 0x50), (__m128 *)(v8 + *a1 + 0x10));
    v12 = *a1;
    v20 = _mm_sub_ps(v20, v19);
    sub_8B3770(v20.m128_f32, *(float *)(v8 + v12 + 4), v22[0].m128_f32);
    sub_8D29E0(a2 + 2, v22);
    v8 += 0x90;
  }
  return 0;
}
