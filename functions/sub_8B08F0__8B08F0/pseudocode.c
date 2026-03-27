int __thiscall sub_8B08F0(__m128 *this, int a2, __m128 *a3)
{
  int result; // eax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __int32 v8; // ebx
  double v9; // st6
  double v10; // st7
  double v11; // st5
  double v12; // st7
  float v13; // xmm3_4
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  float v16; // xmm2_4
  float v17; // xmm3_4
  __m128 v18; // xmm0
  float v19; // [esp+0h] [ebp-64h]
  float v20; // [esp+0h] [ebp-64h]
  float v21; // [esp+0h] [ebp-64h]
  float v22; // [esp+0h] [ebp-64h]
  float v23; // [esp+4h] [ebp-60h]
  float v24; // [esp+4h] [ebp-60h]
  float v25; // [esp+8h] [ebp-5Ch]
  float v26; // [esp+8h] [ebp-5Ch]
  __m128 *v27; // [esp+Ch] [ebp-58h]
  float v28; // [esp+10h] [ebp-54h]
  signed int v29; // [esp+14h] [ebp-50h]
  float v30; // [esp+18h] [ebp-4Ch]
  int i; // [esp+1Ch] [ebp-48h]
  float v32; // [esp+20h] [ebp-44h]
  __m128 v33; // [esp+24h] [ebp-40h]
  __m128 v34; // [esp+34h] [ebp-30h]

  v33.m128_f32[0] = 0.0;
  v33.m128_f32[1] = 1.0;
  result = *(_DWORD *)(a2 + 4) - 1;
  v33.m128_f32[2] = 0.0;
  v33.m128_f32[3] = flt_A97D8C;
  v27 = *(__m128 **)a2;
  for ( i = result; i >= 0; --i )
  {
    *a3 = v33;
    v6 = *(this + 3);
    v34 = _mm_mul_ps(*v27, v6);
    v7 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(*v27, *(this + 4)), v6), (__m128)xmmword_A97DD0);
    v8 = (unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 6);
    result = (unsigned __int16)((unsigned __int32)v7.m128_i32[2] >> 6);
    v29 = result;
    if ( v8 < this->m128_i32[3] - 1 && result < *((_DWORD *)this + 4) - 1 )
    {
      v30 = v34.m128_f32[0] - (double)(unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 6);
      v28 = v34.m128_f32[2] - (double)result;
      v32 = sub_8B0C30((signed int *)this, v8 + 1, (unsigned __int16)((unsigned __int32)v7.m128_i32[2] >> 6));
      v23 = sub_8B0C30((signed int *)this, (unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 6), v29 + 1);
      if ( v28 + v30 <= dbl_A2F928 )
      {
        v21 = sub_8B0C30((signed int *)this, (unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 6), v29);
        v12 = v21;
        v26 = v32 - v21;
        v22 = v23 - v21;
        v9 = v22;
        v11 = v12 + v22 * v28 + v26 * v30;
        v10 = v26;
      }
      else
      {
        v19 = sub_8B0C30((signed int *)this, v8 + 1, v29 + 1);
        v25 = v19 - v23;
        v20 = v19 - v32;
        v9 = v20;
        v10 = v25;
        v11 = (v30 - dbl_A2F928) * v25 + v32 + v20 * v28;
      }
      v24 = v11;
      v13 = *(float *)&dword_A46C30;
      result = (int)v27;
      a3->m128_f32[0] = -v10;
      a3->m128_f32[2] = -v9;
      v14 = _mm_mul_ps(*a3, *(this + 3));
      v15 = _mm_mul_ps(v14, v14);
      v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
      v16 = 1.0 / fsqrt(v15.m128_f32[0]);
      v17 = v13 - (float)((float)(v15.m128_f32[0] * v16) * v16);
      v18 = (__m128)LODWORD(flt_A3D65C);
      v18.m128_f32[0] = (float)(v18.m128_f32[0] * v16) * v17;
      *a3 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14);
      a3->m128_f32[3] = (v34.m128_f32[1] - v24) * *((float *)this + 9) - v27->m128_f32[3];
    }
    ++v27;
    ++a3;
  }
  return result;
}
