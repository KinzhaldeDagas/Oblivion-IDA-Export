UInt32 *__thiscall sub_54B5A0(int this, UInt32 *a2, float a3, int a4)
{
  UInt32 *p_unk2C; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  bool v10; // c0
  bool v11; // c3
  double v12; // st6
  double v13; // st5
  double v14; // rtt
  double v15; // st6
  double v16; // st7
  double v17; // st6
  double v18; // st6
  double v19; // st6
  double v20; // st7
  double v21; // st7
  bool v22; // c0
  bool v23; // c3
  int v24; // eax
  float *v25; // eax
  float *v26; // eax
  float v28; // [esp+14h] [ebp-ECh] BYREF
  float v29; // [esp+18h] [ebp-E8h] BYREF
  float v30; // [esp+1Ch] [ebp-E4h] BYREF
  float v31; // [esp+20h] [ebp-E0h] BYREF
  float v32; // [esp+24h] [ebp-DCh]
  float v33[9]; // [esp+28h] [ebp-D8h] BYREF
  float v34[9]; // [esp+4Ch] [ebp-B4h] BYREF
  NiMatrix33 v35; // [esp+70h] [ebp-90h] BYREF
  float v36[9]; // [esp+94h] [ebp-6Ch] BYREF
  float v37[9]; // [esp+B8h] [ebp-48h] BYREF
  float v38[9]; // [esp+DCh] [ebp-24h] BYREF

  if ( *(_BYTE *)(this + 0x1DA) ) /*0x54b5a9*/
  {
    p_unk2C = &stru_B26AF0[0xA].unk2C; /*0x54b5b3*/
  }
  else
  {
    v29 = *(float *)(this + 0x1B8) - *(float *)(this + 0x184); /*0x54b5c9*/
    v28 = *(float *)(this + 0x1BC) - *(float *)(this + 0x188); /*0x54b5d9*/
    v6 = v29; /*0x54b5dd*/
    v7 = dbl_A3D5B8; /*0x54b5e1*/
    v8 = dbl_A3D5B0; /*0x54b5eb*/
    if ( v7 < v29 ) /*0x54b5f4*/
    {
      v29 = v6 - v8; /*0x54b5fa*/
      v6 = v29; /*0x54b602*/
    }
    v9 = dbl_A491E0; /*0x54b604*/
    if ( v9 > v6 ) /*0x54b611*/
    {
      v29 = v6 + v8; /*0x54b617*/
      v6 = v29; /*0x54b61f*/
    }
    v10 = v28 < v7; /*0x54b625*/
    v11 = v28 == v7; /*0x54b625*/
    v12 = v28; /*0x54b629*/
    if ( !v10 && !v11 ) /*0x54b62b*/
    {
      v28 = v12 - v8; /*0x54b634*/
      v12 = v28; /*0x54b63c*/
    }
    if ( v9 > v12 ) /*0x54b645*/
    {
      v28 = v12 + v8; /*0x54b649*/
      v12 = v28; /*0x54b64d*/
    }
    v28 = *(float *)(this + 0x1A4) * a3; /*0x54b668*/
    v29 = a3 * *(float *)(this + 0x1A8); /*0x54b672*/
    v13 = v28; /*0x54b676*/
    v28 = -v28; /*0x54b67e*/
    if ( v13 >= v6 ) /*0x54b689*/
    {
      if ( v28 > v6 ) /*0x54b69c*/
        v6 = v28; /*0x54b69e*/
    }
    else
    {
      v6 = v13; /*0x54b68b*/
    }
    v14 = v12; /*0x54b6a4*/
    v15 = v6; /*0x54b6a4*/
    v16 = v14; /*0x54b6a4*/
    v28 = v15; /*0x54b6a6*/
    v17 = v29; /*0x54b6aa*/
    v29 = -v29; /*0x54b6b2*/
    if ( v17 >= v14 ) /*0x54b6bd*/
    {
      if ( v29 > v16 ) /*0x54b6d0*/
        v16 = v29; /*0x54b6d2*/
    }
    else
    {
      v16 = v17; /*0x54b6bf*/
    }
    v29 = v16; /*0x54b6d8*/
    *(float *)(this + 0x184) = *(float *)(this + 0x184) + v28; /*0x54b6f0*/
    *(float *)(this + 0x188) = *(float *)(this + 0x188) + v29; /*0x54b700*/
    sub_54A450(&v28, &v29); /*0x54b706*/
    sub_54A4B0(&v31, &v30); /*0x54b715*/
    v18 = dbl_A31C70; /*0x54b71e*/
    v32 = v28 * v18 + *(float *)(this + 0x17C); /*0x54b733*/
    v28 = v18 * v29 + *(float *)(this + 0x17C); /*0x54b741*/
    if ( v28 >= (double)*(float *)(this + 0x184) ) /*0x54b758*/
    {
      if ( v32 > (double)*(float *)(this + 0x184) ) /*0x54b777*/
        *(float *)(this + 0x184) = v32; /*0x54b779*/
    }
    else
    {
      *(float *)(this + 0x184) = v28; /*0x54b75a*/
    }
    v19 = dbl_A2FAA0; /*0x54b787*/
    v31 = v31 * v19 + *(float *)(this + 0x180); /*0x54b799*/
    v30 = v19 * v30 + *(float *)(this + 0x180); /*0x54b7a7*/
    v20 = v30; /*0x54b7b9*/
    if ( v30 < (double)*(float *)(this + 0x188) /*0x54b7da*/
      || (v21 = *(float *)(this + 0x188), v22 = v31 < v21, v23 = v31 == v21, v20 = v31, !v22 && !v23) )
    {
      *(float *)(this + 0x188) = v20; /*0x54b7c0*/
    }
    sub_711580(v33, flt_A641F0, flt_A641F4, flt_A641F8); /*0x54b805*/
    NiMatrix33_SetEulerZXY(&v35, *(float *)(this + 0x184), 0.0, *(float *)(this + 0x188)); /*0x54b82a*/
    NiMAtrix33_Multiply((float *)&v35, v37, v33); /*0x54b840*/
    v24 = sub_54B560(a4); /*0x54b84f*/
    v25 = sub_7103C0((float *)(v24 + 0x64), v38); /*0x54b868*/
    NiMAtrix33_Multiply(v25, v34, (float *)(a4 + 0x64)); /*0x54b86f*/
    v26 = sub_7103C0(v34, v38); /*0x54b890*/
    NiMAtrix33_Multiply(v26, v36, v37); /*0x54b897*/
    p_unk2C = (UInt32 *)v36; /*0x54b89c*/
  }
  qmemcpy(a2, p_unk2C, 0x24u); /*0x54b8b1*/
  return a2; /*0x54b8b3*/
}
