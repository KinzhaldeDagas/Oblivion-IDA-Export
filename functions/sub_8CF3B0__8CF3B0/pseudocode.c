void __stdcall sub_8CF3B0(int a1)
{
  double v1; // st7
  __m128 *v2; // edi
  __int128 v3; // xmm0
  double v4; // st7
  __int128 v5; // xmm0
  __m128 v6; // xmm0
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 *v13; // [esp-8h] [ebp-D4h]
  float v14; // [esp+Ch] [ebp-C0h]
  float v15; // [esp+Ch] [ebp-C0h]
  float v16; // [esp+1Ch] [ebp-B0h]
  __m128 v17; // [esp+1Ch] [ebp-B0h]
  __m128 v18; // [esp+2Ch] [ebp-A0h] BYREF
  __m128 v19; // [esp+3Ch] [ebp-90h] BYREF
  __int128 v20; // [esp+4Ch] [ebp-80h]
  __int128 v21; // [esp+5Ch] [ebp-70h]
  __int128 v22; // [esp+6Ch] [ebp-60h]
  __m128 v23; // [esp+7Ch] [ebp-50h]
  float v24; // [esp+8Ch] [ebp-40h]
  float v25; // [esp+90h] [ebp-3Ch]
  float v26; // [esp+94h] [ebp-38h]
  float v27; // [esp+98h] [ebp-34h]
  float v28; // [esp+9Ch] [ebp-30h]
  __int128 v29; // [esp+ACh] [ebp-20h]

  v1 = flt_A6A044;
  v2 = (__m128 *)(a1 + 0x2E0);
  v14 = *(float *)(a1 + 0x2E0);
  v20 = *(_OWORD *)(a1 + 0x2C0);
  v21 = *(_OWORD *)(a1 + 0x2B0);
  v22 = v21;
  v13 = (__m128 *)(a1 + 0x2E0);
  if ( v1 <= v14 )
  {
    v4 = *(float *)(a1 + 0x310);
    v23 = *v2;
    v19.m128_f32[0] = v4;
    v15 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0xAA).m128_f32[0];
    v18.m128_i32[0] = *(_DWORD *)(a1 + 0x290);
    v5 = *(_OWORD *)(a1 + 0x280);
    v24 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0x55).m128_f32[0];
    v25 = v18.m128_f32[0];
    v29 = v5;
    v26 = v15;
    v27 = 0.0;
    v28 = flt_A3F3D8;
    sub_91F430(&v19, v13);
    v6 = _mm_mul_ps(*(__m128 *)(a1 + 0x2B0), *v2);
    v7 = 0;
    v7.m128_f32[0] = *(float *)&dword_A99E34
                   - (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]));
    *v2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *(__m128 *)(a1 + 0x2B0)), *v2);
    v8 = _mm_mul_ps(*(__m128 *)(a1 + 0x2B0), v23);
    v7.m128_f32[0] = _mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0];
    v9 = _mm_shuffle_ps(v8, v8, 0xAA);
    v9.m128_f32[0] = v9.m128_f32[0] + v7.m128_f32[0];
    *v2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(__m128 *)(a1 + 0x2B0)), *v2);
    v10 = 0;
    v10.m128_f32[0] = *(float *)(a1 + 0x324);
    *v2 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v2);
    sub_891440((__m128 *)a1, &v18);
    if ( *(float *)(a1 + 0x318) < (double)_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
      v17 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20);
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
      v11 = 0;
      v11.m128_f32[0] = *(float *)(a1 + 0x328);
      v12 = 0;
      v12.m128_f32[0] = *(float *)(a1 + 0x2D8);
      *v2 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v17), _mm_shuffle_ps(v12, v12, 0)), *v2);
    }
  }
  else
  {
    v2->m128_f32[0] = 0.0;
    v23 = *v2;
    v19.m128_f32[0] = 1.0;
    v16 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0xAA).m128_f32[0];
    v18.m128_i32[0] = *(_DWORD *)(a1 + 0x290);
    v3 = *(_OWORD *)(a1 + 0x280);
    v24 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0x55).m128_f32[0];
    v29 = v3;
    v25 = v18.m128_f32[0];
    v26 = v16;
    v27 = 0.0;
    v28 = flt_A3F3D8;
    sub_91F430(&v19, v13);
  }
  if ( *(_DWORD *)(a1 + 0x2A0) != 0xB )
    sub_890720((_DWORD *)a1);
}
