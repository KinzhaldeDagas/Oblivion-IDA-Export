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

  v4 = flt_A9D004; /*0x915ff4*/
  a4->m128_f32[0] = flt_A9D004; /*0x915fff*/
  result = a2; /*0x916001*/
  a4->m128_f32[1] = v4; /*0x916004*/
  a4->m128_f32[2] = v4; /*0x916009*/
  v7 = 0; /*0x91600c*/
  a4->m128_f32[3] = 0.0; /*0x916011*/
  v8 = flt_A3B888; /*0x916018*/
  v19 = 0; /*0x91601e*/
  a4[1].m128_f32[0] = flt_A3B888; /*0x916022*/
  a4[1].m128_f32[1] = v8; /*0x916025*/
  a4[1].m128_f32[2] = v8; /*0x916028*/
  a4[1].m128_f32[3] = 0.0; /*0x91602d*/
  v20.m128_f32[3] = 0.0; /*0x916030*/
  v20.m128_f32[0] = v4; /*0x916036*/
  v20.m128_f32[1] = v20.m128_f32[0]; /*0x91603a*/
  v20.m128_f32[2] = v20.m128_f32[0]; /*0x91603e*/
  *a4 = v20; /*0x916047*/
  v20.m128_f32[0] = v8; /*0x91604a*/
  v20.m128_f32[1] = v20.m128_f32[0]; /*0x91604e*/
  v20.m128_f32[2] = v20.m128_f32[0]; /*0x916052*/
  v20.m128_f32[3] = 0.0; /*0x916056*/
  a4[1] = v20; /*0x91605f*/
  if ( *((int *)this + 0xC) > 0 ) /*0x916066*/
  {
    v9 = hkFactor; /*0x91606c*/
    do /*0x916103*/
    {
      v10 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 8 * v7); /*0x916075*/
      v11 = *(_DWORD *)(v10 + 0x1C); /*0x916078*/
      result = (__m128 *)*(unsigned __int16 *)(v10 + 8); /*0x91607b*/
      if ( result ) /*0x916081*/
      {
        v12 = (float *)(v11 + 8); /*0x916083*/
        v18 = result; /*0x916086*/
        do /*0x9160f3*/
        {
          v13 = *(this + 1); /*0x916097*/
          v20.m128_f32[0] = v12[0xFFFFFFFE] * v9; /*0x9160a2*/
          v20.m128_f32[1] = v12[0xFFFFFFFF] * v9; /*0x9160b0*/
          v20.m128_f32[2] = v9 * *v12; /*0x9160b6*/
          v20 = _mm_mul_ps(v13, v20); /*0x9160c2*/
          result = hkTransform_TransformPosition(&v21, a2, &v20); /*0x9160c7*/
          v9 = hkFactor; /*0x9160cc*/
          v14 = v21; /*0x9160d5*/
          *a4 = _mm_min_ps(*a4, v21); /*0x9160dd*/
          v12 += 3; /*0x9160e4*/
          v15 = v18 == (__m128 *)1; /*0x9160e7*/
          v18 = (__m128 *)((char *)v18 + 0xFFFFFFFF); /*0x9160e7*/
          a4[1] = _mm_max_ps(a4[1], v14); /*0x9160ef*/
        }
        while ( !v15 ); /*0x9160f3*/
        v7 = v19; /*0x9160f5*/
      }
      v19 = ++v7; /*0x9160ff*/
    }
    while ( v7 < *((_DWORD *)this + 0xC) ); /*0x916103*/
  }
  *(float *)&v17 = *((float *)this + 8) + a3; /*0x916119*/
  v16 = _mm_shuffle_ps((__m128)v17, (__m128)v17, 0); /*0x916123*/
  *a4 = _mm_sub_ps(*a4, v16); /*0x91612a*/
  a4[1] = _mm_add_ps(a4[1], v16); /*0x916134*/
  return result; /*0x916138*/
}
