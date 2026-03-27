double __thiscall sub_8ABF70(float *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm0
  __int32 v4; // edx
  __m128 v5; // xmm1
  double v6; // st7
  __m128 v7; // xmm0
  double v8; // st7
  char v9; // cl
  double v10; // st7
  _DWORD *v11; // ecx
  __int32 v12; // eax
  bool v13; // zf
  _DWORD *v14; // ecx
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  float v18; // [esp+4h] [ebp-28h]
  float v19; // [esp+8h] [ebp-24h]
  __m128 v20; // [esp+Ch] [ebp-20h] BYREF
  __m128 v21; // [esp+1Ch] [ebp-10h] BYREF

  v3 = _mm_mul_ps(a2[1], a3[1]);
  v4 = a2[2].m128_i32[2];
  v5 = 0;
  v6 = (fConstant_1
      - (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])))
     * *(this + 0x18);
  v7 = 0;
  v21 = 0;
  v8 = v6 * *(this + 0x18);
  v9 = *(_BYTE *)(v4 + 0x18);
  v20 = 0;
  v18 = v8;
  v10 = a2[1].m128_f32[3] - a3[1].m128_f32[3];
  if ( v9 == 1 )
  {
    v11 = (_DWORD *)(v4 + *(_DWORD *)(v4 + 0x10));
    if ( v11 )
    {
      sub_8ABCE0(v11, a2, &v20);
      v7 = v20;
      v5 = v21;
    }
  }
  v12 = a3[2].m128_i32[2];
  v13 = *(_BYTE *)(v12 + 0x18) == 1;
  v21 = v5;
  if ( v13 )
  {
    v14 = (_DWORD *)(v12 + *(_DWORD *)(v12 + 0x10));
    if ( v14 )
    {
      sub_8ABCE0(v14, a3, &v21);
      v7 = v20;
    }
  }
  v15 = _mm_sub_ps(v7, v21);
  v16 = _mm_mul_ps(v15, v15);
  v19 = v10 * v10;
  return (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]))
       * flt_A2FAAC
       + v18 * flt_A31C80
       + v19;
}
