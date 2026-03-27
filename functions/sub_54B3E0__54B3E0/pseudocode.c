char __thiscall sub_54B3E0(int this, float a2, int a3, float *a4, float *a5)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // rt2
  double v10; // st6
  double v11; // st7
  double v12; // st7
  double v13; // st7
  float v14; // [esp+0h] [ebp-8h]
  float v15; // [esp+4h] [ebp-4h]
  float v16; // [esp+Ch] [ebp+4h]
  float v17; // [esp+Ch] [ebp+4h]
  float v18; // [esp+Ch] [ebp+4h]

  if ( *(_BYTE *)(this + 0x1DA) )
  {
    *a4 = 0.0;
    *a5 = 0.0;
    return 1;
  }
  v14 = *(float *)(this + 0x1B0) - *(float *)(this + 0x17C);
  v15 = *(float *)(this + 0x1B4) - *(float *)(this + 0x180);
  v16 = *(float *)(this + 0x1AC) * a2 * dbl_A2FAA0;
  v6 = v16;
  v17 = -v16;
  if ( v14 <= v6 )
  {
    if ( v17 > (double)v14 )
      v14 = v17;
    v7 = v6;
    v8 = v17;
  }
  else
  {
    v7 = v6;
    v8 = v17;
    v14 = v7;
  }
  v9 = v7;
  v10 = v8;
  v11 = v9;
  if ( v15 <= v9 )
  {
    v18 = v10;
    if ( v18 > (double)v15 )
      v15 = v10;
  }
  else
  {
    v15 = v11;
  }
  *(float *)(this + 0x17C) = *(float *)(this + 0x17C) + v14;
  *(float *)(this + 0x180) = v15 + *(float *)(this + 0x180);
  if ( *(float *)(this + 0x17C) <= dbl_A4D918 )
  {
    if ( *(float *)(this + 0x17C) >= dbl_A64220 )
      goto LABEL_17;
    v12 = flt_A57264;
  }
  else
  {
    v12 = flt_A56054;
  }
  *(float *)(this + 0x17C) = v12;
LABEL_17:
  if ( *(float *)(this + 0x180) > dbl_A64218 )
  {
    v13 = flt_A64210;
LABEL_21:
    *(float *)(this + 0x180) = v13;
    goto LABEL_22;
  }
  if ( *(float *)(this + 0x180) < dbl_A64208 )
  {
    v13 = flt_A64200;
    goto LABEL_21;
  }
LABEL_22:
  *a4 = *(float *)(this + 0x17C);
  *a5 = *(float *)(this + 0x180);
  return 1;
}
