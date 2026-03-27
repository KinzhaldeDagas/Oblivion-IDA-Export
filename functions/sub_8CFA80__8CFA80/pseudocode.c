int __stdcall sub_8CFA80(int a1)
{
  int v1; // eax
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  float v5; // xmm2_4
  __m128 v6; // xmm1
  char *v7; // ecx
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 *v10; // eax
  int v11; // eax
  float v12; // [esp+Ch] [ebp-44h]
  float v13; // [esp+Ch] [ebp-44h]
  float v14; // [esp+Ch] [ebp-44h]
  __m128 v15; // [esp+20h] [ebp-30h]
  __m128 v16; // [esp+20h] [ebp-30h]
  __m128 v17; // [esp+20h] [ebp-30h]
  __m128 v18; // [esp+30h] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 0x2A0);
  if ( v1 != 0xB && (!v1 || v1 == 3) )
    return sub_890720((_DWORD *)a1);
  *(_DWORD *)(a1 + 0x1F4) |= 0x2000u;
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
  v15 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
  v12 = fabs(*(float *)(a1 + 0x31C));
  v3 = 0;
  v3.m128_f32[0] = *(float *)(a1 + 0x328);
  v16 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v15);
  v4 = _mm_mul_ps(v16, v16);
  v4.m128_f32[0] = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  v5 = 1.0 / fsqrt(v4.m128_f32[0]);
  v6 = 0;
  v6.m128_f32[0] = (float)(flt_A3D65C * v5)
                 * (float)(*(float *)&dword_A46C30 - (float)((float)(v4.m128_f32[0] * v5) * v5));
  v18 = _mm_shuffle_ps(v6, v6, 0);
  v13 = v12 * ((float)(v4.m128_f32[0] * v18.m128_f32[0]) + (float)(v4.m128_f32[0] * v18.m128_f32[0]));
  v14 = sqrt(v13);
  v7 = *(char **)(a1 + 8);
  v8 = 0;
  v8.m128_f32[0] = *(float *)&dword_A99E34 - v14;
  v9 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), _mm_mul_ps(v18, v16));
  if ( v7 )
    v10 = (__m128 *)sub_8AC0A0(v7);
  else
    v10 = (__m128 *)&stru_BA7A40;
  v17 = *v10;
  v17.m128_f32[2] = 0.0;
  *(__m128 *)(a1 + 0x2E0) = _mm_add_ps(v17, v9);
  *(_DWORD *)(a1 + 0x2A0) = 2;
  sub_890720((_DWORD *)a1);
  *(_DWORD *)(a1 + 0x1F4) &= 0xFFFDFEFF;
  v11 = sub_8BA170(*(_DWORD **)(a1 + 0x1E8), *(_DWORD *)(a1 + 0x1EC));
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x18))(v11, a1);
}
