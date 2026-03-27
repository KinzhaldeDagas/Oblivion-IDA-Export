void __stdcall sub_699760(int a1, float a2, float a3, float a4, _DWORD *a5, float a6)
{
  int Area; // eax
  int v7; // eax
  double v8; // st7
  float *v9; // ecx
  double v10; // rt1
  __m128 v11; // xmm0
  int v12; // [esp-4h] [ebp-54h]
  float v13; // [esp+0h] [ebp-50h]
  float v14; // [esp+20h] [ebp-30h]
  float v15; // [esp+20h] [ebp-30h]
  float v16; // [esp+20h] [ebp-30h]
  float v17; // [esp+24h] [ebp-2Ch] BYREF
  float v18; // [esp+28h] [ebp-28h]
  float v19; // [esp+2Ch] [ebp-24h]
  __m128 v20; // [esp+30h] [ebp-20h] BYREF

  sub_43F3E0(&v17, (__m128 *)(*(_DWORD *)(a1 + 0x50) + 0x60));
  v20.m128_f32[0] = v17 - a2;
  v20.m128_f32[1] = v18 - a3;
  v20.m128_f32[2] = v19 - a4;
  v13 = sub_43F350(v20.m128_f32);
  Area = EffectItem_GetArea(a5);
  v12 = Double_To_SInt32((double)Area * fMagicUnitsPerFoot);
  v7 = Double_To_SInt32(a6);
  v14 = Calc_MagicExplosionSize_(v7, v12, v13, 0, 0, 0.0);
  v8 = v14;
  if ( v14 > 0.0 )
  {
    if ( flt_B37E98 < v8 )
      v8 = flt_B37E98;
    v9 = *(float **)(a1 + 0x50);
    v15 = v8 * flt_B37EC8;
    v20.m128_f32[2] = v20.m128_f32[2] + dbl_A2FAA0;
    v17 = v20.m128_f32[0] * v15;
    v18 = v20.m128_f32[1] * v15;
    v19 = v15 * v20.m128_f32[2];
    v10 = hkFactor;
    v20.m128_f32[0] = v17 * v10;
    v20.m128_f32[1] = v18 * v10;
    v20.m128_f32[2] = v10 * v19;
    v16 = sub_89DA90(v9);
    v11 = 0;
    v11.m128_f32[0] = v16;
    v20 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v20);
    sub_8A6410(a1);
    sub_8A6410(a1);
    (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(a1 + 0x50) + 0x5C))(*(_DWORD *)(a1 + 0x50), &v20);
  }
}
