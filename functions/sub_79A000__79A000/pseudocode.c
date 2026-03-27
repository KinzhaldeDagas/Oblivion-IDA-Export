void __fastcall sub_79A000(_DWORD *a1, float a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  double v13; // st7
  float *v14; // eax
  float v15; // ecx
  double v16; // st4
  double v17; // st6
  double v18; // st7
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edx
  int v24; // eax
  int v25; // ebx
  double v26; // st7
  unsigned int v27; // ebx
  int v28; // eax
  double v29; // st7
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // ebp
  unsigned int v34; // ebx
  double v35; // st7
  int v36; // eax
  double v37; // st7
  char v38; // [esp+1Fh] [ebp-19h] BYREF
  float v39; // [esp+20h] [ebp-18h]
  __int64 v40; // [esp+24h] [ebp-14h]
  unsigned int v41; // [esp+34h] [ebp-4h]

  v4 = a1[3];
  v5 = 0;
  if ( v4 )
    v6 = (a1[4] - v4) / 0x30;
  else
    v6 = 0;
  v7 = v6 - 1;
  v8 = a1[3];
  if ( !v8 || v7 >= (a1[4] - v8) / 0x30 )
    _invalid_parameter_noinfo();
  v9 = a1[3] + 0x30 * v7;
  if ( sub_799EE0((_DWORD *)v9) != 1 )
  {
    v39 = 0.0;
    do
    {
      v10 = *(_DWORD *)(v9 + 4);
      if ( !v10 || v5 + 1 >= (*(_DWORD *)(v9 + 8) - v10) / 0x38 )
        _invalid_parameter_noinfo();
      v11 = *(_DWORD *)(v9 + 4);
      if ( !v11 || v5 >= (*(_DWORD *)(v9 + 8) - v11) / 0x38 )
        _invalid_parameter_noinfo();
      v12 = *(_DWORD *)(v9 + 4);
      v13 = *(float *)(LODWORD(v39) + v11 + 0x3C) - *(float *)(v12 + LODWORD(v39) + 4);
      v14 = (float *)(LODWORD(v39) + v12);
      LODWORD(v15) = LODWORD(v39) + 0x38;
      ++v5;
      v16 = *(float *)(LODWORD(v39) + v11 + 0x38) - *v14;
      v17 = *(float *)(LODWORD(v39) + 0x38 + v11 + 8) - v14[2];
      v39 = v13 * v13 + v16 * v16 + v17 * v17;
      v18 = COERCE_FLOAT((SLODWORD(v39) >> 1) + 0x1FC00000);
      v39 = v15;
      *(float *)(v9 + 0x10) = v18 + *(float *)(v9 + 0x10);
    }
    while ( v5 < sub_799EE0((_DWORD *)v9) - 1 );
  }
  sub_78EAF0(&v38);
  v19 = a1[0x11];
  v41 = 0;
  if ( v19 && (a1[0x12] - v19) / 0x2C )
  {
    v21 = a1[0x11];
    if ( v21 )
      v22 = (a1[0x12] - v21) / 0x2C;
    else
      v22 = 0;
    v40 = (__int64)sub_78EA00(0.0, flt_A3F3D8);
    v23 = (unsigned int)v40 % v22;
    *(_BYTE *)(v9 + 0x18) = (unsigned int)v40 % v22;
    v24 = a1[0x11];
    v25 = (unsigned __int8)v23;
    if ( !v24 || (unsigned __int8)v23 >= (unsigned int)((a1[0x12] - v24) / 0x2C) )
      _invalid_parameter_noinfo();
    v26 = *(float *)(0x2C * v25 + a1[0x11] + 0x1C);
    v27 = *(unsigned __int8 *)(v9 + 0x18);
    *(float *)(v9 + 0x14) = v26 * *(float *)(v9 + 0x10) * dbl_A2FAA0;
    v28 = a1[0x11];
    if ( !v28 || v27 >= (a1[0x12] - v28) / 0x2C )
      _invalid_parameter_noinfo();
    v29 = *(float *)(0x2C * v27 + a1[0x11] + 0x20);
    v30 = *(unsigned __int8 *)(v9 + 0x18);
    *(float *)(v9 + 0x14) = v29 * *(float *)(v9 + 0x14);
    v31 = a1[0x11];
    if ( !v31 || v30 >= (a1[0x12] - v31) / 0x2C )
      _invalid_parameter_noinfo();
    v32 = a1[0x11];
    v33 = v32 + 0x2C * v30;
    v34 = *(unsigned __int8 *)(v9 + 0x18);
    if ( !v32 || v34 >= (a1[0x12] - v32) / 0x2C )
      _invalid_parameter_noinfo();
    *(float *)&v40 = sub_78EA00(*(float *)(a1[0x11] + 0x2C * v34 + 0x24), *(float *)(v33 + 0x28));
    v35 = *(float *)&v40;
    *(float *)(v9 + 0x1C) = *(float *)&v40;
    v36 = a1[3];
    if ( v36 )
      v36 = (a1[4] - v36) / 0x30;
    if ( (v36 & 1) != 0 )
      *(float *)(v9 + 0x1C) = v35 * dbl_A3D360;
  }
  else
  {
    v20 = a1[3];
    if ( !v20 || v5 >= (a1[4] - v20) / 0x30 )
      _invalid_parameter_noinfo();
    *(_BYTE *)(0x30 * v5 + a1[3] + 0x18) = 0;
    *(float *)(v9 + 0x14) = *(float *)(v9 + 0x10) * dbl_A2FAA0;
    *(float *)(v9 + 0x1C) = 0.0;
  }
  v37 = a2 * *(float *)(v9 + 0x10);
  v41 = 0xFFFFFFFF;
  *(float *)(v9 + 0x20) = v37;
  TESTexture::ClearComponentReferences(&v38);
}
