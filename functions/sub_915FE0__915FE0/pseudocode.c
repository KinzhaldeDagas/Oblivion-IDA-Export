__m128 *__thiscall sub_915FE0(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  double v4; // st7
  __m128 *result; // eax
  int v7; // ecx
  double v8; // st5
  double v9; // st7
  int v10; // eax
  int v11; // edi
  float *v12; // edi
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  bool v15; // zf
  __m128 v16; // xmm0
  unsigned int v17; // [esp+14h] [ebp-3Ch]
  __m128 *v18; // [esp+18h] [ebp-38h]
  int v19; // [esp+1Ch] [ebp-34h]
  __m128 v20; // [esp+20h] [ebp-30h] BYREF
  __m128 v21; // [esp+30h] [ebp-20h] BYREF

  v4 = flt_A9D004;
  a4->m128_f32[0] = flt_A9D004;
  result = a2;
  a4->m128_f32[1] = v4;
  a4->m128_f32[2] = v4;
  v7 = 0;
  a4->m128_f32[3] = 0.0;
  v8 = flt_A3B888;
  v19 = 0;
  a4[1].m128_f32[0] = flt_A3B888;
  a4[1].m128_f32[1] = v8;
  a4[1].m128_f32[2] = v8;
  a4[1].m128_f32[3] = 0.0;
  v20.m128_f32[3] = 0.0;
  v20.m128_f32[0] = v4;
  v20.m128_f32[1] = v20.m128_f32[0];
  v20.m128_f32[2] = v20.m128_f32[0];
  *a4 = v20;
  v20.m128_f32[0] = v8;
  v20.m128_f32[1] = v20.m128_f32[0];
  v20.m128_f32[2] = v20.m128_f32[0];
  v20.m128_f32[3] = 0.0;
  a4[1] = v20;
  if ( *((int *)this + 0xC) > 0 )
  {
    v9 = hkFactor;
    do
    {
      v10 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 8 * v7);
      v11 = *(_DWORD *)(v10 + 0x1C);
      result = (__m128 *)*(unsigned __int16 *)(v10 + 8);
      if ( result )
      {
        v12 = (float *)(v11 + 8);
        v18 = result;
        do
        {
          v13 = *(this + 1);
          v20.m128_f32[0] = v12[0xFFFFFFFE] * v9;
          v20.m128_f32[1] = v12[0xFFFFFFFF] * v9;
          v20.m128_f32[2] = v9 * *v12;
          v20 = _mm_mul_ps(v13, v20);
          result = sub_88FCC0(&v21, a2, &v20);
          v9 = hkFactor;
          v14 = v21;
          *a4 = _mm_min_ps(*a4, v21);
          v12 += 3;
          v15 = v18 == (__m128 *)1;
          v18 = (__m128 *)((char *)v18 + 0xFFFFFFFF);
          a4[1] = _mm_max_ps(a4[1], v14);
        }
        while ( !v15 );
        v7 = v19;
      }
      v19 = ++v7;
    }
    while ( v7 < *((_DWORD *)this + 0xC) );
  }
  *(float *)&v17 = *((float *)this + 8) + a3;
  v16 = _mm_shuffle_ps((__m128)v17, (__m128)v17, 0);
  *a4 = _mm_sub_ps(*a4, v16);
  a4[1] = _mm_add_ps(a4[1], v16);
  return result;
}
