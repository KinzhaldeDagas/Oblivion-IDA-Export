void __thiscall sub_6D5460(int this)
{
  int v2; // edi
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // ecx
  double v11; // st4
  double v12; // st3
  double v13; // st6
  double v14; // st3
  double v15; // st5
  double v16; // st4
  double v17; // st3
  float *v18; // eax
  unsigned __int16 v19; // [esp+14h] [ebp-30h]
  char v20[4]; // [esp+20h] [ebp-24h] BYREF
  int v21; // [esp+24h] [ebp-20h] BYREF
  int v22; // [esp+28h] [ebp-1Ch] BYREF
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h]
  float v25; // [esp+34h] [ebp-10h]
  float v26; // [esp+38h] [ebp-Ch]
  float v27; // [esp+3Ch] [ebp-8h]
  float v28; // [esp+40h] [ebp-4h]

  if ( *(_BYTE *)(this + 0x54) ) /*0x6d5466*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 0x30) + 0xB4); /*0x6d5474*/
    if ( *(_WORD *)(this + 0x4C) < (*(_BYTE *)(v2 + 0x2C) & 0x3Fu) ) /*0x6d5485*/
    {
      v26 = 0.0; /*0x6d5492*/
      v3 = (float *)sub_6D50B0((_DWORD *)this, &v21, &v22, v20); /*0x6d54a2*/
      if ( v3 ) /*0x6d54a9*/
        v26 = NiFloatKey_EvaluateTrack(*(float *)(this + 0x28), v3, v22, *(float *)&v21, (int *)(this + 0x3C), v20[0]); /*0x6d54cb*/
      v23 = 0.0; /*0x6d54d9*/
      v4 = (float *)sub_6D5100((_DWORD *)this, &v21, &v22, v20); /*0x6d54e9*/
      if ( v4 ) /*0x6d54f0*/
        v23 = NiFloatKey_EvaluateTrack(*(float *)(this + 0x28), v4, v22, *(float *)&v21, (int *)(this + 0x44), v20[0]); /*0x6d5512*/
      v24 = 1.0; /*0x6d5520*/
      v5 = (float *)sub_6D5150((_DWORD *)this, &v21, &v22, v20); /*0x6d5530*/
      if ( v5 ) /*0x6d5537*/
        v24 = NiFloatKey_EvaluateTrack(*(float *)(this + 0x28), v5, v22, *(float *)&v21, (int *)(this + 0x40), v20[0]); /*0x6d5559*/
      v25 = 1.0; /*0x6d5567*/
      v6 = (float *)sub_6D51A0((_DWORD *)this, &v21, &v22, v20); /*0x6d5577*/
      if ( v6 ) /*0x6d557e*/
        v25 = NiFloatKey_EvaluateTrack(*(float *)(this + 0x28), v6, v22, *(float *)&v21, (int *)(this + 0x48), v20[0]); /*0x6d55a0*/
      v7 = *(_DWORD *)(this + 0x50); /*0x6d55a7*/
      v19 = *(_WORD *)(this + 0x4C); /*0x6d55b5*/
      *(float *)&v22 = v24 / *(float *)(v7 + 0x40); /*0x6d55b8*/
      v21 = *(int *)(v7 + 0x38); /*0x6d55bf*/
      v28 = v25 / *(float *)(v7 + 0x44); /*0x6d55ca*/
      *(float *)v20 = *(float *)(v7 + 0x3C); /*0x6d55d1*/
      v8 = sub_7282F0((NiGeometry *)v2, v19); /*0x6d55d5*/
      v9 = *(float *)&v22; /*0x6d55da*/
      LOWORD(v10) = *(_WORD *)(v2 + 8); /*0x6d55e0*/
      v11 = dbl_A2FAA0; /*0x6d55ed*/
      v12 = v26; /*0x6d55f5*/
      v26 = v26 - *(float *)&v21 * *(float *)&v22; /*0x6d5603*/
      v13 = v12; /*0x6d560d*/
      v26 = (1.0 - *(float *)&v22) * v11 - v26; /*0x6d560f*/
      v14 = v28; /*0x6d561f*/
      v28 = v23 - *(float *)v20 * v28; /*0x6d5625*/
      v15 = v14; /*0x6d562d*/
      v27 = v11 * (1.0 - v14) + v28; /*0x6d5635*/
      if ( (_WORD)v10 ) /*0x6d5639*/
      {
        v16 = v27; /*0x6d563b*/
        v10 = (unsigned __int16)v10; /*0x6d563f*/
        v17 = v26; /*0x6d5642*/
        do /*0x6d5660*/
        {
          v8 += 8; /*0x6d5648*/
          --v10; /*0x6d564b*/
          *(float *)(v8 - 8) = v9 * *(float *)(v8 - 8) + v17; /*0x6d5653*/
          *(float *)(v8 - 4) = *(float *)(v8 - 4) * v15 + v16; /*0x6d565d*/
        }
        while ( v10 ); /*0x6d5660*/
      }
      v18 = *(float **)(this + 0x50); /*0x6d5668*/
      v18[0xE] = v13; /*0x6d566d*/
      v18[0xF] = v23; /*0x6d5674*/
      v18[0x10] = v24; /*0x6d567b*/
      v18[0x11] = v25; /*0x6d5682*/
      *(_WORD *)(v2 + 0x2E) |= 8u; /*0x6d5685*/
      *(_BYTE *)(this + 0x54) = 0; /*0x6d568a*/
    }
  }
}
