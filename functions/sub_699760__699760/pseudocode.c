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

  HavokVector_ToWorldVector(&v17, (__m128 *)(*(_DWORD *)(a1 + 0x50) + 0x60)); /*0x699788*/
  v20.m128_f32[0] = v17 - a2; /*0x69979b*/
  v20.m128_f32[1] = v18 - a3; /*0x6997a6*/
  v20.m128_f32[2] = v19 - a4; /*0x6997b1*/
  v13 = Vector3_NormalizeInPlace(v20.m128_f32); /*0x6997c6*/
  Area = EffectItem_GetArea(a5); /*0x6997c9*/
  v12 = Double_To_SInt32((double)Area * MEMORY[0xB37DB8][0]); /*0x6997e4*/
  v7 = Double_To_SInt32(a6); /*0x6997e5*/
  v14 = Calc_MagicExplosionSize_(v7, v12, v13, 0, 0, 0.0); /*0x6997f0*/
  v8 = v14; /*0x699801*/
  if ( v14 > 0.0 ) /*0x699806*/
  {
    if ( unk_B37E98 < v8 ) /*0x699819*/
      v8 = unk_B37E98; /*0x699821*/
    v9 = *(float **)(a1 + 0x50); /*0x69982f*/
    v15 = v8 * unk_B37EC8; /*0x699832*/
    v20.m128_f32[2] = v20.m128_f32[2] + dbl_A2FAA0; /*0x699840*/
    v17 = v20.m128_f32[0] * v15; /*0x699852*/
    v18 = v20.m128_f32[1] * v15; /*0x69985c*/
    v19 = v15 * v20.m128_f32[2]; /*0x699864*/
    v10 = hkFactor; /*0x699874*/
    v20.m128_f32[0] = v17 * v10; /*0x699876*/
    v20.m128_f32[1] = v18 * v10; /*0x699880*/
    v20.m128_f32[2] = v10 * v19; /*0x699888*/
    v16 = sub_89DA90(v9); /*0x699891*/
    v11 = 0; /*0x699895*/
    v11.m128_f32[0] = v16; /*0x69989e*/
    v20 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v20); /*0x6998b3*/
    sub_8A6410(a1); /*0x6998b8*/
    sub_8A6410(a1); /*0x6998bf*/
    (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(a1 + 0x50) + 0x5C))(*(_DWORD *)(a1 + 0x50), &v20); /*0x6998d1*/
  }
}
