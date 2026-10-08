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

  if ( a7 ) /*0x69f89a*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a7 + 0x58))(a7) ) /*0x69f8a7*/
    {
      v7 = a7[2]; /*0x69f8b1*/
      if ( v7 && (v8 = v7 + 0x14) != 0 ) /*0x69f8bb*/
        v9 = *(_DWORD *)(v8 + 0x1C); /*0x69f8bd*/
      else
        LOBYTE(v9) = 0; /*0x69f8c2*/
      switch ( v9 & 0x3F ) /*0x69f8d6*/
      {
        case 2: /*0x69f8d6*/
        case 0xA: /*0x69f8d6*/
          v10 = g_GameSettingStringPointers_B36CD8[0x106]; /*0x69f8f9*/
          break; /*0x69f8ff*/
        case 8: /*0x69f8d6*/
          v10 = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x108]); /*0x69f8f5*/
          break; /*0x69f8f7*/
        case 0xE: /*0x69f8d6*/
          v10 = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x10A]); /*0x69f8e7*/
          break; /*0x69f8e9*/
        default:
          v10 = g_GameSettingStringPointers_B36CD8[0x104]; /*0x69f901*/
          break; /*0x69f901*/
      }
      v11 = a7[2]; /*0x69f90d*/
      v23 = v10 * dbl_A764A8; /*0x69f912*/
      if ( v11 ) /*0x69f916*/
        v12 = sub_89DA90((float *)*(_DWORD *)(v11 + 0x50)); /*0x69f91b*/
      else
        v12 = 0.0; /*0x69f922*/
      v25 = v12; /*0x69f924*/
      v13 = g_GameSettingStringPointers_B36CD8[0x10C]; /*0x69f92c*/
      if ( v13 > v25 ) /*0x69f939*/
        v23 = v25 / v13 * v23; /*0x69f941*/
      v14 = a7[2]; /*0x69f95d*/
      v15 = dword_A46C30; /*0x69f963*/
      v24 = g_GameSettingStringPointers_B36CD8[0x102] * v23; /*0x69f967*/
      v16 = kHeadBodyNormalMatchRadius; /*0x69f96b*/
      v17 = hkFactor; /*0x69f980*/
      v26.m128_f32[0] = a4 * v17; /*0x69f982*/
      v26.m128_f32[1] = a5 * v17; /*0x69f98b*/
      v26.m128_f32[2] = a6 * v17; /*0x69f994*/
      v18 = _mm_mul_ps(v26, v26); /*0x69f9a3*/
      v27[0] = a1 * v17; /*0x69f9b3*/
      v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x69f9be*/
                      + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
      v19 = 1.0 / fsqrt(v18.m128_f32[0]); /*0x69f9c7*/
      v27[1] = a2 * v17; /*0x69f9cf*/
      v20 = *(float *)&v15 - (float)((float)(v18.m128_f32[0] * v19) * v19); /*0x69f9da*/
      v21 = 0; /*0x69f9de*/
      v27[2] = v17 * a3; /*0x69f9e9*/
      v21.m128_f32[0] = (float)(v16 * v19) * v20; /*0x69f9ed*/
      v22 = 0; /*0x69f9f7*/
      v22.m128_f32[0] = v24; /*0x69f9fa*/
      v26 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v26), _mm_shuffle_ps(v22, v22, 0)); /*0x69fa0f*/
      sub_8A6410(v14); /*0x69fa14*/
      (*(void (__thiscall **)(_DWORD, __m128 *, float *))(**(_DWORD **)(v14 + 0x50) + 0x60))( /*0x69fa2b*/
        *(_DWORD *)(v14 + 0x50),
        &v26,
        v27);
    }
  }
}
