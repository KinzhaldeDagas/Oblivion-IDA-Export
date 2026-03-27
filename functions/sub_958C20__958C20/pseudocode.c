signed int __thiscall sub_958C20(_DWORD *this, int a2, int a3, int a4, __int32 *a5)
{
  _DWORD **v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  __m128 *v10; // edx
  double v11; // st7
  __m128 *v12; // ecx
  __m128 *v13; // edi
  __m128 *v14; // eax
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  float v19; // xmm2_4
  float v20; // xmm3_4
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  int v24; // eax
  int v25; // eax
  _DWORD *v26; // edx
  int v27; // eax
  _DWORD *v28; // edx
  int v30; // [esp+14h] [ebp-2Ch]
  int v31; // [esp+28h] [ebp-18h]
  _DWORD *v32; // [esp+2Ch] [ebp-14h]
  float v33; // [esp+30h] [ebp-10h]

  v5 = (_DWORD **)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = 0;
  v32 = this;
  if ( v7 <= 0 )
  {
LABEL_9:
    v25 = 0;
    if ( (int)*(this + 4) > 0 )
    {
      v26 = this + 0x3ED;
      do
      {
        *v26 = 0;
        ++v25;
        v26 += 0x14;
      }
      while ( v25 < *(this + 4) );
    }
    v27 = 0;
    if ( (int)*(this + 2) > 0 )
    {
      v28 = this + 0x14;
      do
      {
        *v28 = 0;
        ++v27;
        v28 += 0x10;
      }
      while ( v27 < *(this + 2) );
    }
    return a4 == v6 ? 0 : 2;
  }
  else
  {
    while ( v6 )
    {
      v9 = *v5;
      v10 = (__m128 *)(*v5)[v8];
      v31 = v8 + 1;
      v30 = v8 + 1 >= v7 ? *v9 : v9[v8 + 1];
      v10[2].m128_i32[0] = (__int32)v10;
      v11 = *(float *)&SrcStr;
      v10[3].m128_i32[0] = (__int32)v10;
      v10[4].m128_i32[0] = (__int32)v10;
      v10[2].m128_i32[2] = (__int32)&v10[3].m128_i32[1];
      v10[3].m128_i32[2] = (__int32)&v10[1].m128_i32[1];
      v10[1].m128_i32[2] = (__int32)&v10[2].m128_i32[1];
      v10[1].m128_i32[1] = **(_DWORD **)(v6 + 4);
      v10[2].m128_i32[1] = *(_DWORD *)v6;
      v10[3].m128_i32[1] = *a5;
      *(_DWORD *)(v6 + 8) = (char *)v10 + 0x14;
      v10[1].m128_i32[3] = v6;
      *(_DWORD *)(v30 + 0x2C) = (char *)v10 + 0x34;
      v12 = (__m128 *)v10[2].m128_i32[1];
      v13 = (__m128 *)v10[1].m128_i32[1];
      v14 = (__m128 *)v10[3].m128_i32[1];
      v10[3].m128_i32[3] = v30 + 0x24;
      v15 = _mm_sub_ps(*v13, *v12);
      v16 = _mm_sub_ps(*v12, *v14);
      v17 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0xC9), _mm_shuffle_ps(v16, v16, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0xD2), _mm_shuffle_ps(v16, v16, 0xC9)));
      v18 = _mm_mul_ps(v17, v17);
      *v10 = v17;
      if ( (float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0])) == v11 )
        break;
      v19 = _mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0];
      v20 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0];
      v33 = 1.0 / fsqrt(v20 + v19);
      v21 = (__m128)0x3F000000u;
      v21.m128_f32[0] = (float)(0.5 * v33) * (float)(3.0 - (float)((float)((float)(v20 + v19) * v33) * v33));
      v22 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v17);
      *v10 = v22;
      v23 = _mm_mul_ps(v22, *v13);
      v10[1].m128_f32[0] = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
      v24 = **(_DWORD **)(v6 + 4);
      v6 = *(_DWORD *)(v24 + 0x30);
      v5 = (_DWORD **)a2;
      *(_DWORD *)(v24 + 0x30) = 0;
      v8 = v31;
      v7 = *(_DWORD *)(a2 + 4);
      if ( v31 >= v7 )
      {
        this = v32;
        goto LABEL_9;
      }
    }
    return 2;
  }
}
