void __thiscall sub_4D4EB0(ExtraDataList *this, float *a2)
{
  BSExtraDataVtbl *v2; // eax
  double v3; // st7
  int v4; // [esp+4h] [ebp-6Ch]
  int v5; // [esp+8h] [ebp-68h]
  int v6; // [esp+20h] [ebp-50h]
  int v7; // [esp+20h] [ebp-50h]
  float v8; // [esp+28h] [ebp-48h]
  float v9; // [esp+28h] [ebp-48h]
  float v10; // [esp+2Ch] [ebp-44h]
  float v11; // [esp+2Ch] [ebp-44h]
  __m128 v12; // [esp+30h] [ebp-40h] BYREF
  __m128 v13; // [esp+40h] [ebp-30h] BYREF
  float v14[7]; // [esp+50h] [ebp-20h] BYREF

  if ( a2 )
  {
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
      v2 = sub_424180(this + 2);
    else
      v2 = (BSExtraDataVtbl *)bhkWorldM;
    if ( v2 )
    {
      if ( v2[2].CompareTo )
      {
        v3 = hkFactor;
        v13.m128_f32[0] = a2[0x22] * v3;
        v13.m128_f32[1] = a2[0x23] * v3;
        v13.m128_f32[2] = a2[0x24] * v3;
        v8 = a2[0x1D];
        v10 = a2[0x20];
        v14[0] = a2[0x1A];
        v14[1] = v8;
        v14[2] = v10;
        v9 = a2[0x1C];
        v11 = a2[0x1F];
        v12.m128_f32[0] = a2[0x19];
        v12.m128_f32[1] = v9;
        v12.m128_f32[2] = v11;
        *(float *)&v5 = g_DialogueFov_;
        v12 = _mm_add_ps(v12, v13);
        *(float *)&v6 = a2[0x40] * v3;
        v4 = v6;
        *(float *)&v7 = v3 * a2[0x3F];
        sub_8A7880((LPCRITICAL_SECTION *)dword_BA7DA0, (int)&v13, (int)&v12, (int)v14, v7, v4, v5, (int)"Player");
      }
    }
  }
}
