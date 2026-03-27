void __thiscall sub_6088F0(float *this, float a2, float a3, float a4, float a5, float a6, float a7, _DWORD *a8)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // ecx
  double v15; // st7
  int v16; // eax
  double v17; // st7
  double v18; // st6
  int v19; // esi
  int v20; // xmm3_4
  float v21; // xmm4_4
  double v22; // rt0
  __m128 v23; // xmm0
  float v24; // xmm1_4
  float v25; // xmm3_4
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  float v28; // [esp+8h] [ebp-38h]
  float v29; // [esp+8h] [ebp-38h]
  float v30; // [esp+8h] [ebp-38h]
  float v31; // [esp+Ch] [ebp-34h]
  __m128 v32; // [esp+10h] [ebp-30h] BYREF
  float v33[7]; // [esp+20h] [ebp-20h] BYREF

  if ( a8 && !*((_BYTE *)this + 0x97) )
  {
    if ( !(*(int (__thiscall **)(_DWORD *))(*a8 + 0x58))(a8) )
    {
LABEL_22:
      *((_BYTE *)this + 0x97) = 1;
      return;
    }
    v9 = a8[2];
    v28 = *(this + 0x1B);
    if ( v9 && (v10 = v9 + 0x14) != 0 )
      v11 = *(_DWORD *)(v10 + 0x1C);
    else
      LOBYTE(v11) = 0;
    v12 = (v11 & 0x3F) - 8;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
        {
          v14 = (int *)&flt_B370E8;
LABEL_15:
          v15 = v28 * *(float *)GameSetting_GetSafeFloatPointer(v14);
          goto LABEL_16;
        }
        v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B37100) * v28;
      }
      else
      {
        v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B370F0) * v28;
      }
LABEL_16:
      v16 = a8[2];
      v29 = v15;
      if ( v16 )
        v17 = sub_89DA90((float *)*(_DWORD *)(v16 + 0x50));
      else
        v17 = 0.0;
      v31 = v17;
      v18 = fProjectileKnockMinMass;
      if ( v18 > v31 )
        v29 = v31 / v18 * v29;
      v19 = a8[2];
      v20 = dword_A46C30;
      v30 = flt_B370E0 * v29;
      v21 = flt_A3D65C;
      v22 = hkFactor;
      v32.m128_f32[0] = a5 * v22;
      v32.m128_f32[1] = a6 * v22;
      v32.m128_f32[2] = a7 * v22;
      v23 = _mm_mul_ps(v32, v32);
      v33[0] = a2 * v22;
      v23.m128_f32[0] = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
      v24 = 1.0 / fsqrt(v23.m128_f32[0]);
      v33[1] = a3 * v22;
      v25 = *(float *)&v20 - (float)((float)(v23.m128_f32[0] * v24) * v24);
      v26 = 0;
      v33[2] = v22 * a4;
      v26.m128_f32[0] = (float)(v21 * v24) * v25;
      v27 = 0;
      v27.m128_f32[0] = v30;
      v32 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v32), _mm_shuffle_ps(v27, v27, 0));
      sub_8A6410(v19);
      (*(void (__thiscall **)(_DWORD, __m128 *, float *))(**(_DWORD **)(v19 + 0x50) + 0x60))(
        *(_DWORD *)(v19 + 0x50),
        &v32,
        v33);
      goto LABEL_22;
    }
    v14 = (int *)&unk_B370F8;
    goto LABEL_15;
  }
}
