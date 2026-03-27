int __thiscall sub_8B4020(int this, int *a2, __m128 *a3)
{
  int result; // eax
  __m128 v4; // xmm3
  int v5; // edi
  int *v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // esi
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  long double v17; // st7
  int v18; // eax
  int v19; // edx
  float v20; // eax
  double v21; // st7
  bool v22; // zf
  int v23; // [esp+Ch] [ebp-64h]
  float v24; // [esp+14h] [ebp-5Ch]
  unsigned int v25; // [esp+18h] [ebp-58h]
  float v26; // [esp+18h] [ebp-58h]
  int v27; // [esp+1Ch] [ebp-54h]
  __m128 v28; // [esp+20h] [ebp-50h] BYREF
  __m128 v29; // [esp+30h] [ebp-40h]
  __m128 v30; // [esp+40h] [ebp-30h] BYREF
  __m128 v31; // [esp+50h] [ebp-20h]
  __m128 v32; // [esp+60h] [ebp-10h]

  result = a2[4];
  *(_DWORD *)(this + 0x88) = 0;
  *(_DWORD *)(this + 0x84) = 0;
  *(_DWORD *)(this + 0x80) = 0;
  *(_DWORD *)(this + 0x7C) = 0;
  *(_DWORD *)(this + 0x78) = 0;
  *(_DWORD *)(this + 0x74) = 0;
  *(_DWORD *)(this + 0x70) = 0;
  *(_DWORD *)(this + 0x6C) = 0;
  *(_DWORD *)(this + 0x68) = 0;
  *(_DWORD *)(this + 0x64) = 0;
  if ( result > 0 )
  {
    v23 = 0;
    v27 = result;
    do
    {
      v4 = *a3;
      v5 = *a2;
      v6 = (int *)(v23 + a2[3]);
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v31 = _mm_add_ps(*(__m128 *)(0x10 * v8 + *a2), *a3);
      v10 = _mm_add_ps(*(__m128 *)(0x10 * v7 + v5), v4);
      v11 = _mm_sub_ps(v31, v10);
      v30 = v10;
      v32 = _mm_add_ps(*(__m128 *)(0x10 * v9 + v5), v4);
      v12 = _mm_sub_ps(v32, v10);
      v13 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9)));
      v14 = _mm_mul_ps(v13, v13);
      v10.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0];
      v15 = _mm_shuffle_ps(v14, v14, 0xAA);
      v16 = v15;
      v16.m128_f32[0] = v15.m128_f32[0] + v10.m128_f32[0];
      v29 = v16;
      v29.m128_i32[0] = fsqrt(v15.m128_f32[0] + v10.m128_f32[0]);
      if ( v29.m128_f32[0] > (double)*(float *)&SrcStr )
      {
        *(float *)&v25 = fConstant_1 / v29.m128_f32[0];
        v28 = _mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v13);
        v17 = fabs(v28.m128_f32[0]);
        v24 = fabs(v28.m128_f32[1]);
        v26 = fabs(v28.m128_f32[2]);
        if ( v17 <= v24 || v17 <= v26 )
        {
          v18 = 1;
          if ( v24 <= (double)v26 )
            v18 = 2;
          *(_DWORD *)(this + 8) = v18;
        }
        else
        {
          *(_DWORD *)(this + 8) = 0;
        }
        v19 = (*(_DWORD *)(this + 8) + 1) % 3;
        *(_DWORD *)this = v19;
        *(_DWORD *)(this + 4) = (v19 + 1) % 3;
        sub_8B3B50((float *)this, v30.m128_f32, v28.m128_f32);
        v20 = *(float *)this;
        if ( *(_DWORD *)this )
        {
          if ( *(_DWORD *)(this + 4) )
            v21 = *(float *)(this + 0x3C);
          else
            v21 = *(float *)(this + 0x38);
        }
        else
        {
          v21 = *(float *)(this + 0x34);
        }
        *(float *)(this + 0x64) = v28.m128_f32[0] * v21 + *(float *)(this + 0x64);
        *(float *)(this + 4 * LODWORD(v20) + 0x68) = v28.m128_f32[LODWORD(v20)] * *(float *)(this + 0x40)
                                                   + *(float *)(this + 4 * LODWORD(v20) + 0x68);
        *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x68) = v28.m128_f32[*(_DWORD *)(this + 4)]
                                                            * *(float *)(this + 0x44)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x68);
        *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x68) = v28.m128_f32[*(_DWORD *)(this + 8)]
                                                            * *(float *)(this + 0x48)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x68);
        *(float *)(this + 4 * *(_DWORD *)this + 0x74) = v28.m128_f32[*(_DWORD *)this] * *(float *)(this + 0x4C)
                                                      + *(float *)(this + 4 * *(_DWORD *)this + 0x74);
        *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x74) = v28.m128_f32[*(_DWORD *)(this + 4)]
                                                            * *(float *)(this + 0x50)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x74);
        *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x74) = v28.m128_f32[*(_DWORD *)(this + 8)]
                                                            * *(float *)(this + 0x54)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x74);
        *(float *)(this + 4 * *(_DWORD *)this + 0x80) = v28.m128_f32[*(_DWORD *)this] * *(float *)(this + 0x58)
                                                      + *(float *)(this + 4 * *(_DWORD *)this + 0x80);
        *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x80) = v28.m128_f32[*(_DWORD *)(this + 4)]
                                                            * *(float *)(this + 0x5C)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x80);
        *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x80) = v28.m128_f32[*(_DWORD *)(this + 8)]
                                                            * *(float *)(this + 0x60)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x80);
      }
      result = v27 - 1;
      v22 = v27 == 1;
      v23 += 0xC;
      --v27;
    }
    while ( !v22 );
  }
  *(float *)(this + 0x68) = *(float *)(this + 0x68) * flt_A3D65C;
  *(float *)(this + 0x6C) = *(float *)(this + 0x6C) * flt_A3D65C;
  *(float *)(this + 0x70) = *(float *)(this + 0x70) * flt_A3D65C;
  *(float *)(this + 0x74) = *(float *)(this + 0x74) * flt_A7C038;
  *(float *)(this + 0x78) = *(float *)(this + 0x78) * flt_A7C038;
  *(float *)(this + 0x7C) = *(float *)(this + 0x7C) * flt_A7C038;
  *(float *)(this + 0x80) = *(float *)(this + 0x80) * flt_A3D65C;
  *(float *)(this + 0x84) = *(float *)(this + 0x84) * flt_A3D65C;
  *(float *)(this + 0x88) = *(float *)(this + 0x88) * flt_A3D65C;
  return result;
}
