void __stdcall sub_69F880(float a1, float a2, float a3, float a4, float a5, float a6, _DWORD *a7)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  double v12; // st7
  double v13; // st6
  int v14; // esi
  int v15; // xmm3_4
  float v16; // xmm4_4
  double v17; // rt0
  __m128 v18; // xmm0
  float v19; // xmm1_4
  float v20; // xmm3_4
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  float v23; // [esp+8h] [ebp-38h]
  float v24; // [esp+8h] [ebp-38h]
  float v25; // [esp+Ch] [ebp-34h]
  __m128 v26; // [esp+10h] [ebp-30h] BYREF
  float v27[7]; // [esp+20h] [ebp-20h] BYREF

  if ( a7 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a7 + 0x58))(a7) )
    {
      v7 = a7[2];
      if ( v7 && (v8 = v7 + 0x14) != 0 )
        v9 = *(_DWORD *)(v8 + 0x1C);
      else
        LOBYTE(v9) = 0;
      switch ( v9 & 0x3F )
      {
        case 2:
        case 0xA:
          v10 = flt_B370F0;
          break;
        case 8:
          v10 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B370F8);
          break;
        case 0xE:
          v10 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B37100);
          break;
        default:
          v10 = flt_B370E8;
          break;
      }
      v11 = a7[2];
      v23 = v10 * dbl_A764A8;
      if ( v11 )
        v12 = sub_89DA90((float *)*(_DWORD *)(v11 + 0x50));
      else
        v12 = 0.0;
      v25 = v12;
      v13 = fProjectileKnockMinMass;
      if ( v13 > v25 )
        v23 = v25 / v13 * v23;
      v14 = a7[2];
      v15 = dword_A46C30;
      v24 = flt_B370E0 * v23;
      v16 = flt_A3D65C;
      v17 = hkFactor;
      v26.m128_f32[0] = a4 * v17;
      v26.m128_f32[1] = a5 * v17;
      v26.m128_f32[2] = a6 * v17;
      v18 = _mm_mul_ps(v26, v26);
      v27[0] = a1 * v17;
      v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
      v19 = 1.0 / fsqrt(v18.m128_f32[0]);
      v27[1] = a2 * v17;
      v20 = *(float *)&v15 - (float)((float)(v18.m128_f32[0] * v19) * v19);
      v21 = 0;
      v27[2] = v17 * a3;
      v21.m128_f32[0] = (float)(v16 * v19) * v20;
      v22 = 0;
      v22.m128_f32[0] = v24;
      v26 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v26), _mm_shuffle_ps(v22, v22, 0));
      sub_8A6410(v14);
      (*(void (__thiscall **)(_DWORD, __m128 *, float *))(**(_DWORD **)(v14 + 0x50) + 0x60))(
        *(_DWORD *)(v14 + 0x50),
        &v26,
        v27);
    }
  }
}
