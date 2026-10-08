double __thiscall sub_8A2C00(float *this)
{
  long double v1; // st7
  bool v2; // c0
  double v3; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]

  v5 = fabs(*(this + 3)); /*0x8a2c06*/
  v1 = v5; /*0x8a2c0f*/
  v6 = fabs(v5); /*0x8a2c16*/
  if ( v6 < (double)fConstant_1 ) /*0x8a2c27*/
  {
    v9 = acos(v1); /*0x8a2c59*/
    return (float)(v9 + v9); /*0x8a2c6a*/
  }
  else
  {
    v2 = v1 > 0.0; /*0x8a2c2b*/
    v3 = 0.0; /*0x8a2c2f*/
    if ( !v2 ) /*0x8a2c34*/
      v3 = flt_A9740C; /*0x8a2c38*/
    v7 = v3; /*0x8a2c3e*/
    return (float)(v7 + v7); /*0x8a2c4f*/
  }
}
