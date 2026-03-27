void __thiscall sub_90FB60(__m128 *this, int a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  float v7; // xmm2_4
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  char v10; // al
  __m128 v11; // xmm0
  double v12; // st7
  __m128 *v13; // esi
  double v14; // st7
  float v15; // [esp+18h] [ebp-58h]
  unsigned int v16; // [esp+18h] [ebp-58h]
  unsigned int v17; // [esp+1Ch] [ebp-54h]
  unsigned int v18; // [esp+1Ch] [ebp-54h]
  int v19; // [esp+1Ch] [ebp-54h]
  int v20; // [esp+1Ch] [ebp-54h]
  __m128 v21; // [esp+20h] [ebp-50h] BYREF
  __m128 v22; // [esp+30h] [ebp-40h] BYREF
  __m128 v23; // [esp+40h] [ebp-30h]
  __m128 v24; // [esp+50h] [ebp-20h] BYREF
  __m128 v25; // [esp+60h] [ebp-10h] BYREF

  v3 = *((_DWORD **)this + 7);
  v4 = *((_DWORD **)this + 6);
  sub_88FCC0(&v22, (__m128 *)(v4[0x14] + 0x10), this + 3);
  sub_88FCC0(&v21, (__m128 *)(v3[0x14] + 0x10), this + 4);
  v5 = _mm_sub_ps(v21, v22);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0];
  v8 = _mm_shuffle_ps(v6, v6, 0xAA);
  v9 = v8;
  v9.m128_f32[0] = v8.m128_f32[0] + v7;
  v23 = v9;
  v23.m128_i32[0] = fsqrt(v8.m128_f32[0] + v7);
  v15 = v23.m128_f32[0];
  if ( v23.m128_f32[0] >= (double)flt_A37080 )
  {
    v10 = *((_BYTE *)this + 0x5C);
    *(float *)&v17 = fConstant_1 / v23.m128_f32[0];
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v5);
    if ( (v10 || v15 >= (double)*((float *)this + 0x14))
      && (*((_BYTE *)this + 0x5D) || v15 <= (double)*((float *)this + 0x14)) )
    {
      sub_8ABCE0(v4, &v22, &v24);
      sub_8ABCE0(v3, &v21, &v25);
      v11 = _mm_mul_ps(_mm_sub_ps(v25, v24), v23);
      v12 = (v15 - *((float *)this + 0x14)) * *((float *)this + 0x15);
      v13 = this + 2;
      v14 = v12
          + (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]))
          * v13[3].m128_f32[2];
      *(float *)&v16 = v14;
      *(float *)&v18 = -v14;
      *v13 = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v23);
      v19 = *(_DWORD *)(a2 + 8);
      sub_8A6410((int)v3);
      (*(void (__thiscall **)(_DWORD, int, __m128 *, __m128 *))(*(_DWORD *)v3[0x14] + 0x68))(v3[0x14], v19, v13, &v21);
      *v13 = _mm_mul_ps(_mm_shuffle_ps((__m128)v16, (__m128)v16, 0), v23);
      v20 = *(_DWORD *)(a2 + 8);
      sub_8A6410((int)v4);
      (*(void (__thiscall **)(_DWORD, int, __m128 *, __m128 *))(*(_DWORD *)v4[0x14] + 0x68))(v4[0x14], v20, v13, &v22);
    }
  }
}
