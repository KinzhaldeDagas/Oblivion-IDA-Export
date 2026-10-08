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

  if ( a2 ) /*0x4d4eca*/
  {
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4d4ed4*/
      v2 = sub_424180(this + 2); /*0x4d4ed9*/
    else
      v2 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4d4ee0*/
    if ( v2 ) /*0x4d4ee7*/
    {
      if ( v2[2].CompareTo ) /*0x4d4eed*/
      {
        v3 = hkFactor; /*0x4d4f11*/
        v13.m128_f32[0] = a2[0x22] * v3; /*0x4d4f1b*/
        v13.m128_f32[1] = a2[0x23] * v3; /*0x4d4f27*/
        v13.m128_f32[2] = a2[0x24] * v3; /*0x4d4f33*/
        v8 = a2[0x1D]; /*0x4d4f46*/
        v10 = a2[0x20]; /*0x4d4f50*/
        v14[0] = a2[0x1A]; /*0x4d4f58*/
        v14[1] = v8; /*0x4d4f60*/
        v14[2] = v10; /*0x4d4f68*/
        v9 = a2[0x1C]; /*0x4d4f76*/
        v11 = a2[0x1F]; /*0x4d4f7d*/
        v12.m128_f32[0] = a2[0x19]; /*0x4d4f85*/
        v12.m128_f32[1] = v9; /*0x4d4f8d*/
        v12.m128_f32[2] = v11; /*0x4d4f95*/
        *(float *)&v5 = g_DialogueFov_; /*0x4d4fa7*/
        v12 = _mm_add_ps(v12, v13); /*0x4d4fab*/
        *(float *)&v6 = a2[0x40] * v3; /*0x4d4fb8*/
        v4 = v6; /*0x4d4fc0*/
        *(float *)&v7 = v3 * a2[0x3F]; /*0x4d4fca*/
        sub_8A7880((LPCRITICAL_SECTION *)unk_BA7DA0, (int)&v13, (int)&v12, (int)v14, v7, v4, v5, (int)"Player"); /*0x4d4fde*/
      }
    }
  }
}
