void __thiscall sub_6A7830(float *this)
{
  UInt32 unk574; // eax
  int v3; // eax
  int v4; // esi
  int *v5; // esi
  double v6; // rt1
  int v7; // eax
  double v8; // st7
  __m128 v9; // xmm0
  int v10; // esi
  float v11; // [esp+18h] [ebp-54h]
  float v12; // [esp+18h] [ebp-54h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  float v15; // [esp+24h] [ebp-48h]
  NiMatrix33 v16; // [esp+28h] [ebp-44h] BYREF
  __m128 v17; // [esp+4Ch] [ebp-20h] BYREF

  unk574 = reference->unk574; /*0x6a784e*/
  if ( unk574 ) /*0x6a7856*/
  {
    v3 = *(_DWORD *)(unk574 + 8); /*0x6a785c*/
    if ( v3 ) /*0x6a7861*/
      v4 = *(_DWORD *)(v3 + 0x18); /*0x6a7863*/
    else
      v4 = 0; /*0x6a7868*/
    sub_66A670((TESObjectREFR *)reference); /*0x6a786a*/
    if ( v4 ) /*0x6a7871*/
    {
      v5 = *(int **)(v4 + 0xC); /*0x6a787b*/
      if ( *((_BYTE *)this + 0x4C) ) /*0x6a7877*/
      {
        NiMatrix33_SetEulerZXY( /*0x6a78bc*/
          &v16,
          reference->super.super.super.super.rot.z,
          reference->super.super.super.super.rot.x,
          reference->super.super.super.super.rot.y);
        v11 = *(this + 0x11) + flt_B37ED0[0x5E]; /*0x6a78cc*/
        v13 = v16.data[0][1] * v11; /*0x6a78de*/
        v14 = v16.data[1][1] * v11; /*0x6a78e8*/
        v15 = v11 * v16.data[2][1]; /*0x6a78f0*/
        v6 = hkFactor; /*0x6a7900*/
        v17.m128_f32[0] = v13 * v6; /*0x6a7902*/
        v17.m128_f32[1] = v14 * v6; /*0x6a790c*/
        v17.m128_f32[2] = v6 * v15; /*0x6a7914*/
        if ( v5 && (v7 = v5[2]) != 0 ) /*0x6a791f*/
          v8 = sub_89DA90((float *)*(_DWORD *)(v7 + 0x50)); /*0x6a7924*/
        else
          v8 = 0.0; /*0x6a792b*/
        v12 = v8; /*0x6a792f*/
        v9 = 0; /*0x6a7939*/
        v9.m128_f32[0] = v12; /*0x6a793c*/
        v17 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v17); /*0x6a794f*/
        if ( v5 ) /*0x6a7954*/
          v10 = v5[2]; /*0x6a7956*/
        else
          v10 = 0; /*0x6a795b*/
        sub_8A6410(v10); /*0x6a795f*/
        (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v10 + 0x50) + 0x5C))(*(_DWORD *)(v10 + 0x50), &v17); /*0x6a7971*/
      }
      else
      {
        sub_4D9960(v5, &g_zeroNiPoint3.x); /*0x6a798b*/
      }
    }
  }
}
