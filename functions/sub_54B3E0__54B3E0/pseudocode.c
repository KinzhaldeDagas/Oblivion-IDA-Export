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

  if ( *(_BYTE *)(this + 0x1DA) ) /*0x54b3e3*/
  {
    *a4 = 0.0; /*0x54b3f6*/
    *a5 = 0.0; /*0x54b3f8*/
    return 1; /*0x54b3ff*/
  }
  v14 = *(float *)(this + 0x1B0) - *(float *)(this + 0x17C); /*0x54b40e*/
  v15 = *(float *)(this + 0x1B4) - *(float *)(this + 0x180); /*0x54b41d*/
  v16 = *(float *)(this + 0x1AC) * a2 * dbl_A2FAA0; /*0x54b431*/
  v6 = v16; /*0x54b435*/
  v17 = -v16; /*0x54b43d*/
  if ( v14 <= v6 ) /*0x54b453*/
  {
    if ( v17 > (double)v14 ) /*0x54b46b*/
      v14 = v17; /*0x54b46d*/
    v7 = v6; /*0x54b474*/
    v8 = v17; /*0x54b474*/
  }
  else
  {
    v7 = v6; /*0x54b457*/
    v8 = v17; /*0x54b457*/
    v14 = v7; /*0x54b459*/
  }
  v9 = v7; /*0x54b476*/
  v10 = v8; /*0x54b476*/
  v11 = v9; /*0x54b476*/
  if ( v15 <= v9 ) /*0x54b487*/
  {
    v18 = v10; /*0x54b478*/
    if ( v18 > (double)v15 ) /*0x54b4a0*/
      v15 = v10; /*0x54b4a2*/
  }
  else
  {
    v15 = v11; /*0x54b48b*/
  }
  *(float *)(this + 0x17C) = *(float *)(this + 0x17C) + v14; /*0x54b4b3*/
  *(float *)(this + 0x180) = v15 + *(float *)(this + 0x180); /*0x54b4c3*/
  if ( *(float *)(this + 0x17C) <= dbl_A4D918 ) /*0x54b4da*/
  {
    if ( *(float *)(this + 0x17C) >= dbl_A64220 ) /*0x54b4f5*/
      goto LABEL_17; /*0x54b4f5*/
    v12 = flt_A57264; /*0x54b4f7*/
  }
  else
  {
    v12 = flt_A56054; /*0x54b4dc*/
  }
  *(float *)(this + 0x17C) = v12; /*0x54b4fd*/
LABEL_17:
  if ( *(float *)(this + 0x180) > dbl_A64218 ) /*0x54b514*/
  {
    v13 = flt_A64210; /*0x54b516*/
LABEL_21:
    *(float *)(this + 0x180) = v13; /*0x54b537*/
    goto LABEL_22; /*0x54b537*/
  }
  if ( *(float *)(this + 0x180) < dbl_A64208 ) /*0x54b52f*/
  {
    v13 = flt_A64200; /*0x54b531*/
    goto LABEL_21; /*0x54b531*/
  }
LABEL_22:
  *a4 = *(float *)(this + 0x17C); /*0x54b53d*/
  *a5 = *(float *)(this + 0x180); /*0x54b553*/
  return 1; /*0x54b3fc*/
}
