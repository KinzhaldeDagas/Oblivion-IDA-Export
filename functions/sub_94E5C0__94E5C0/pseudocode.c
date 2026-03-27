int __thiscall sub_94E5C0(__m128 *this, int a2, int *a3, int a4)
{
  __m128 *v4; // esi
  long double v6; // st7
  int v7; // ecx
  long double v8; // st6
  int v9; // edx
  int v10; // eax
  __m128 v11; // xmm0
  int v12; // ecx
  double v13; // st7
  int v14; // eax
  __int32 v15; // edx
  __m128 v16; // xmm2
  int v17; // ecx
  __m128 v18; // xmm3
  __m128 v19; // xmm4
  int v20; // edx
  __m128 *v21; // eax
  __m128 *v22; // esi
  __m128 v23; // xmm0
  __m128 *v24; // esi
  __m128 v25; // xmm1
  char *v26; // esi
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  unsigned int v32; // [esp+10h] [ebp-170h]
  float v33; // [esp+14h] [ebp-16Ch]
  int v34; // [esp+14h] [ebp-16Ch]
  int v35; // [esp+14h] [ebp-16Ch]
  float v36; // [esp+18h] [ebp-168h]
  __m128 v37; // [esp+20h] [ebp-160h] BYREF
  __m128 v38; // [esp+30h] [ebp-150h] BYREF
  __m128 v39[4]; // [esp+40h] [ebp-140h] BYREF
  __m128 v40[4]; // [esp+80h] [ebp-100h] BYREF
  char v41[192]; // [esp+C0h] [ebp-C0h] BYREF

  v4 = *(__m128 **)(a2 + 0xC);
  sub_958600((_DWORD *)this + 0x30, (int)a3);
  sub_94D100(this, a2, v39, v40);
  sub_88FCC0(this + 5, v39, v4 + 2);
  sub_88FCC0(this + 4, v40, v4 + 1);
  sub_94CF30((int *)this, a4);
  sub_94CF80(this, a4);
  v6 = fabs(v4[3].m128_f32[0]);
  v7 = 0;
  v8 = fabs(v4[3].m128_f32[1]);
  v9 = 1;
  v36 = fabs(v4[3].m128_f32[2]);
  if ( v8 < v6 )
  {
    v9 = 0;
    v33 = v8;
    v6 = v33;
    v7 = 1;
  }
  if ( v36 >= v6 )
  {
    v10 = 2;
  }
  else
  {
    v10 = v7;
    v7 = 2;
  }
  v11 = v4[3];
  v37.m128_i32[v7] = 0;
  v12 = v9;
  v13 = v4[3].m128_f32[v9];
  v14 = v10;
  v15 = v4[3].m128_i32[v14];
  v37.m128_i32[3] = 0;
  v37.m128_i32[v12] = v15;
  v37.m128_f32[v14] = -v13;
  v16 = *(this + 4);
  v38 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v37, v37, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v37, v37, 0xC9)));
  v17 = 0;
  v18 = _mm_shuffle_ps((__m128)0x40000000u, (__m128)0x40000000u, 0);
  v19 = _mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0);
  do
  {
    v20 = 0xFFFFFFFF;
    v34 = 0xFFFFFFFF;
    v21 = (__m128 *)&v41[0x60 * v17 + 0x10];
    do
    {
      v22 = &v37;
      if ( !v17 )
        v22 = &v38;
      v23 = *v22;
      v24 = &v38;
      if ( !v17 )
        v24 = &v37;
      v25 = *v24;
      v21[0xFFFFFFFF] = v16;
      *v21 = v16;
      *(float *)&v32 = (double)v34 * flt_AA2C4C;
      v21[0xFFFFFFFF] = _mm_add_ps(v21[0xFFFFFFFF], _mm_mul_ps(v18, v23));
      *v21 = _mm_add_ps(*v21, _mm_mul_ps(v19, v23));
      v21[0xFFFFFFFF] = _mm_add_ps(v21[0xFFFFFFFF], _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v25));
      ++v20;
      *v21 = _mm_add_ps(*v21, _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v25));
      v21 += 2;
      v34 = v20;
    }
    while ( v20 <= 1 );
    ++v17;
  }
  while ( v17 < 2 );
  v26 = v41;
  v35 = 6;
  do
  {
    v27 = *a3;
    v28 = sub_8AEBB0(0.80000001, 0.80000001, 0.80000001, 1.0);
    (*(void (__thiscall **)(int *, char *, char *, int, int))(v27 + 0x1C))(a3, v26, v26 + 0x10, v28, a4);
    v26 += 0x20;
    --v35;
  }
  while ( v35 );
  v29 = *a3;
  v30 = sub_8AEBB0(0.30000001, 0.30000001, 0.80000001, 1.0);
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v29 + 0x1C))(a3, this + 5, this + 3, v30, a4);
}
