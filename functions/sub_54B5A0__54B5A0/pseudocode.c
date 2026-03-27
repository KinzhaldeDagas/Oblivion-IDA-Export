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
  float v35[9]; // [esp+70h] [ebp-90h] BYREF
  float v36[9]; // [esp+94h] [ebp-6Ch] BYREF
  float v37[9]; // [esp+B8h] [ebp-48h] BYREF
  float v38[9]; // [esp+DCh] [ebp-24h] BYREF

  if ( *(_BYTE *)(this + 0x1DA) )
  {
    p_unk2C = &stru_B26AF0[0xA].unk2C;
  }
  else
  {
    v29 = *(float *)(this + 0x1B8) - *(float *)(this + 0x184);
    v28 = *(float *)(this + 0x1BC) - *(float *)(this + 0x188);
    v6 = v29;
    v7 = dbl_A3D5B8;
    v8 = dbl_A3D5B0;
    if ( v7 < v29 )
    {
      v29 = v6 - v8;
      v6 = v29;
    }
    v9 = dbl_A491E0;
    if ( v9 > v6 )
    {
      v29 = v6 + v8;
      v6 = v29;
    }
    v10 = v28 < v7;
    v11 = v28 == v7;
    v12 = v28;
    if ( !v10 && !v11 )
    {
      v28 = v12 - v8;
      v12 = v28;
    }
    if ( v9 > v12 )
    {
      v28 = v12 + v8;
      v12 = v28;
    }
    v28 = *(float *)(this + 0x1A4) * a3;
    v29 = a3 * *(float *)(this + 0x1A8);
    v13 = v28;
    v28 = -v28;
    if ( v13 >= v6 )
    {
      if ( v28 > v6 )
        v6 = v28;
    }
    else
    {
      v6 = v13;
    }
    v14 = v12;
    v15 = v6;
    v16 = v14;
    v28 = v15;
    v17 = v29;
    v29 = -v29;
    if ( v17 >= v14 )
    {
      if ( v29 > v16 )
        v16 = v29;
    }
    else
    {
      v16 = v17;
    }
    v29 = v16;
    *(float *)(this + 0x184) = *(float *)(this + 0x184) + v28;
    *(float *)(this + 0x188) = *(float *)(this + 0x188) + v29;
    sub_54A450(&v28, &v29);
    sub_54A4B0(&v31, &v30);
    v18 = dbl_A31C70;
    v32 = v28 * v18 + *(float *)(this + 0x17C);
    v28 = v18 * v29 + *(float *)(this + 0x17C);
    if ( v28 >= (double)*(float *)(this + 0x184) )
    {
      if ( v32 > (double)*(float *)(this + 0x184) )
        *(float *)(this + 0x184) = v32;
    }
    else
    {
      *(float *)(this + 0x184) = v28;
    }
    v19 = dbl_A2FAA0;
    v31 = v31 * v19 + *(float *)(this + 0x180);
    v30 = v19 * v30 + *(float *)(this + 0x180);
    v20 = v30;
    if ( v30 < (double)*(float *)(this + 0x188)
      || (v21 = *(float *)(this + 0x188), v22 = v31 < v21, v23 = v31 == v21, v20 = v31, !v22 && !v23) )
    {
      *(float *)(this + 0x188) = v20;
    }
    sub_711580(v33, flt_A641F0, flt_A641F4, flt_A641F8);
    sub_7117C0(v35, *(float *)(this + 0x184), 0.0, *(float *)(this + 0x188));
    NiMAtrix33_Multiply(v35, v37, v33);
    v24 = sub_54B560(a4);
    v25 = sub_7103C0((float *)(v24 + 0x64), v38);
    NiMAtrix33_Multiply(v25, v34, (float *)(a4 + 0x64));
    v26 = sub_7103C0(v34, v38);
    NiMAtrix33_Multiply(v26, v36, v37);
    p_unk2C = (UInt32 *)v36;
  }
  qmemcpy(a2, p_unk2C, 0x24u);
  return a2;
}
