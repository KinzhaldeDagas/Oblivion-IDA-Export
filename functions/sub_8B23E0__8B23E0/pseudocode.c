int __thiscall sub_8B23E0(__m128 *this, __m128 *a2, __m128 *a3, __m128 *a4, __int32 *a5)
{
  __int32 v6; // edx
  __m128 v7; // xmm0
  float v8; // xmm1_4
  __m128 v9; // xmm3
  __m128 v10; // xmm0
  __m128 v11; // xmm4
  __m128 v12; // xmm0
  __m128 *v13; // edi
  long double v14; // st7
  int v15; // ecx
  int v16; // edx
  long double v17; // st6
  int v18; // eax
  int v19; // eax
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  float v22; // xmm2_4
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  char v27; // [esp+Fh] [ebp-5Dh] BYREF
  float v28; // [esp+10h] [ebp-5Ch]
  float v29; // [esp+14h] [ebp-58h]
  int v30; // [esp+18h] [ebp-54h]
  __m128 v31; // [esp+1Ch] [ebp-50h] BYREF
  __m128 v32; // [esp+2Ch] [ebp-40h]
  __int128 v33; // [esp+3Ch] [ebp-30h]
  __m128 v34; // [esp+4Ch] [ebp-20h]
  __m128 v35; // [esp+5Ch] [ebp-10h] BYREF

  v6 = a5[1]; /*0x8b23f5*/
  v31.m128_i32[0] = *a5; /*0x8b23f8*/
  *(unsigned __int64 *)((char *)v31.m128_u64 + 4) = __PAIR64__(a5[2], v6); /*0x8b23ff*/
  v31.m128_i32[3] = a5[3]; /*0x8b240a*/
  v7 = _mm_mul_ps(v31, v31); /*0x8b2416*/
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]; /*0x8b2420*/
  v9 = _mm_shuffle_ps(v7, v7, 0xAA); /*0x8b2427*/
  v10 = v9; /*0x8b242b*/
  v10.m128_f32[0] = v9.m128_f32[0] + v8; /*0x8b242e*/
  v32 = v10; /*0x8b2432*/
  v32.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0] + v8); /*0x8b243b*/
  v28 = 0.5; /*0x8b245c*/
  v11 = (__m128)0x3F000000u; /*0x8b2464*/
  v33 = 0x40400000u; /*0x8b246b*/
  v34 = (__m128)0x3F000000u; /*0x8b2470*/
  v11.m128_f32[0] = 0.5 * v32.m128_f32[0]; /*0x8b2475*/
  v12 = v11; /*0x8b247d*/
  v12.m128_f32[0] = (float)(0.5 * v32.m128_f32[0]) /*0x8b2480*/
                  * (float)(3.0 - (float)((float)((float)(v9.m128_f32[0] + v8) * v32.m128_f32[0]) * v32.m128_f32[0]));
  v13 = this + 3; /*0x8b2490*/
  v31 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v31); /*0x8b2499*/
  hkBasis_ProjectVector(this + 3, a2, &v31); /*0x8b249e*/
  hkBasis_ProjectVector(this + 7, a3, &v31); /*0x8b24af*/
  sub_88FD10(this + 2, a2, a4); /*0x8b24bc*/
  sub_88FD10(this + 6, a3, a4); /*0x8b24cc*/
  v14 = fabs(v13->m128_f32[0]); /*0x8b24d3*/
  v15 = 0; /*0x8b24d5*/
  v16 = 1; /*0x8b24da*/
  v17 = fabs(v13->m128_f32[1]); /*0x8b24df*/
  v30 = 2; /*0x8b24e1*/
  v28 = v17; /*0x8b24e9*/
  v29 = fabs(v13->m128_f32[2]); /*0x8b24f2*/
  if ( v17 < v14 ) /*0x8b24fd*/
  {
    v16 = 0; /*0x8b2501*/
    v14 = v28; /*0x8b2503*/
    v15 = 1; /*0x8b2507*/
  }
  if ( v29 >= v14 ) /*0x8b2519*/
  {
    v18 = v30; /*0x8b2524*/
  }
  else
  {
    v18 = v15; /*0x8b251b*/
    v15 = 2; /*0x8b251d*/
  }
  *((_DWORD *)this + v15 + 0x10) = 0; /*0x8b2528*/
  *((_DWORD *)this + 0x13) = 0; /*0x8b2530*/
  v19 = v18; /*0x8b2537*/
  *((_DWORD *)this + v16 + 0x10) = v13->m128_i32[v19]; /*0x8b2544*/
  *(float *)((char *)this + v19 * 4 + 0x40) = -v13->m128_f32[v16]; /*0x8b2551*/
  v20 = *(this + 4); /*0x8b2555*/
  v21 = _mm_mul_ps(v20, v20); /*0x8b255c*/
  v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]; /*0x8b2566*/
  v23 = _mm_shuffle_ps(v21, v21, 0xAA); /*0x8b256d*/
  v24 = v23; /*0x8b2571*/
  v24.m128_f32[0] = v23.m128_f32[0] + v22; /*0x8b2574*/
  v32 = v24; /*0x8b2578*/
  v32.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22); /*0x8b2581*/
  v25 = v34; /*0x8b25a3*/
  v25.m128_f32[0] = (float)(v34.m128_f32[0] * v32.m128_f32[0]) /*0x8b25ac*/
                  * (float)(*(float *)&v33
                          - (float)((float)((float)(v23.m128_f32[0] + v22) * v32.m128_f32[0]) * v32.m128_f32[0]));
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v20); /*0x8b25ba*/
  *(this + 5) = _mm_sub_ps( /*0x8b25ef*/
                  _mm_mul_ps(_mm_shuffle_ps(*v13, *v13, 0xC9), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(*v13, *v13, 0xD2), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xC9)));
  hkBasis_TransformVector(&v35, a2, this + 5); /*0x8b25f2*/
  hkBasis_ProjectVector(this + 8, a3, &v35); /*0x8b2606*/
  return (*(int (__thiscall **)(__m128 *, char *))(this->m128_i32[0] + 8))(this, &v27); /*0x8b2618*/
}
