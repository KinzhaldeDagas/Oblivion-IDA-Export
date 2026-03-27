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

  v6 = a5[1];
  v31.m128_i32[0] = *a5;
  *(unsigned __int64 *)((char *)v31.m128_u64 + 4) = __PAIR64__(a5[2], v6);
  v31.m128_i32[3] = a5[3];
  v7 = _mm_mul_ps(v31, v31);
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0];
  v9 = _mm_shuffle_ps(v7, v7, 0xAA);
  v10 = v9;
  v10.m128_f32[0] = v9.m128_f32[0] + v8;
  v32 = v10;
  v32.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0] + v8);
  v28 = 0.5;
  v11 = (__m128)0x3F000000u;
  v33 = 0x40400000u;
  v34 = (__m128)0x3F000000u;
  v11.m128_f32[0] = 0.5 * v32.m128_f32[0];
  v12 = v11;
  v12.m128_f32[0] = (float)(0.5 * v32.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v9.m128_f32[0] + v8) * v32.m128_f32[0]) * v32.m128_f32[0]));
  v13 = this + 3;
  v31 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v31);
  sub_88FD90(this + 3, a2, &v31);
  sub_88FD90(this + 7, a3, &v31);
  sub_88FD10(this + 2, a2, a4);
  sub_88FD10(this + 6, a3, a4);
  v14 = fabs(v13->m128_f32[0]);
  v15 = 0;
  v16 = 1;
  v17 = fabs(v13->m128_f32[1]);
  v30 = 2;
  v28 = v17;
  v29 = fabs(v13->m128_f32[2]);
  if ( v17 < v14 )
  {
    v16 = 0;
    v14 = v28;
    v15 = 1;
  }
  if ( v29 >= v14 )
  {
    v18 = v30;
  }
  else
  {
    v18 = v15;
    v15 = 2;
  }
  *((_DWORD *)this + v15 + 0x10) = 0;
  *((_DWORD *)this + 0x13) = 0;
  v19 = v18;
  *((_DWORD *)this + v16 + 0x10) = v13->m128_i32[v19];
  *(float *)((char *)this + v19 * 4 + 0x40) = -v13->m128_f32[v16];
  v20 = *(this + 4);
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0];
  v23 = _mm_shuffle_ps(v21, v21, 0xAA);
  v24 = v23;
  v24.m128_f32[0] = v23.m128_f32[0] + v22;
  v32 = v24;
  v32.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22);
  v25 = v34;
  v25.m128_f32[0] = (float)(v34.m128_f32[0] * v32.m128_f32[0])
                  * (float)(*(float *)&v33
                          - (float)((float)((float)(v23.m128_f32[0] + v22) * v32.m128_f32[0]) * v32.m128_f32[0]));
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v20);
  *(this + 5) = _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(*v13, *v13, 0xC9), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(*v13, *v13, 0xD2), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xC9)));
  sub_88FE00(&v35, a2, this + 5);
  sub_88FD90(this + 8, a3, &v35);
  return (*(int (__thiscall **)(__m128 *, char *))(this->m128_i32[0] + 8))(this, &v27);
}
