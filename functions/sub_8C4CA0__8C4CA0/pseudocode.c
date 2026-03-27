int __thiscall sub_8C4CA0(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  double v4; // st7
  unsigned int v6; // ebx
  double v7; // st5
  int result; // eax
  float *v9; // eax
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  unsigned int v13; // [esp+18h] [ebp-38h]
  int v14; // [esp+1Ch] [ebp-34h]
  __m128 v15; // [esp+20h] [ebp-30h] BYREF
  __m128 v16; // [esp+30h] [ebp-20h] BYREF

  v4 = flt_A99378;
  a4->m128_f32[0] = flt_A99378;
  a4->m128_f32[1] = v4;
  a4->m128_f32[2] = v4;
  v6 = 0;
  a4->m128_f32[3] = 0.0;
  v7 = flt_A3B888;
  a4[1].m128_f32[0] = flt_A3B888;
  a4[1].m128_f32[1] = v7;
  a4[1].m128_f32[2] = v7;
  a4[1].m128_f32[3] = 0.0;
  v15.m128_f32[3] = 0.0;
  v15.m128_f32[0] = v4;
  v15.m128_f32[1] = v15.m128_f32[0];
  v15.m128_f32[2] = v15.m128_f32[0];
  *a4 = v15;
  v15.m128_f32[0] = v7;
  v15.m128_f32[1] = v15.m128_f32[0];
  v15.m128_f32[2] = v15.m128_f32[0];
  v15.m128_f32[3] = 0.0;
  a4[1] = v15;
  result = *((_DWORD *)this + 4);
  if ( *(_DWORD *)(result + 0xC) )
  {
    v14 = 0;
    do
    {
      v9 = (float *)(v14 + *(_DWORD *)(result + 0x18));
      v10 = *(this + 2);
      v15.m128_f32[0] = *v9;
      v15.m128_f32[1] = v9[1];
      v15.m128_f32[2] = v9[2];
      v15 = _mm_mul_ps(v10, v15);
      sub_88FCC0(&v16, a2, &v15);
      v11 = v16;
      v14 += 0xC;
      *a4 = _mm_min_ps(*a4, v16);
      a4[1] = _mm_max_ps(a4[1], v11);
      result = *((_DWORD *)this + 4);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(result + 0xC) );
  }
  *(float *)&v13 = *((float *)this + 0xC) + a3;
  v12 = _mm_shuffle_ps((__m128)v13, (__m128)v13, 0);
  *a4 = _mm_sub_ps(*a4, v12);
  a4[1] = _mm_add_ps(a4[1], v12);
  return result;
}
