double __thiscall sub_78F2C0(float *this, float a2, float a3)
{
  double v3; // st6
  double v4; // st5
  double v5; // st6
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+14h] [ebp+4h]
  float v14; // [esp+14h] [ebp+4h]
  float v15; // [esp+14h] [ebp+4h]
  float v16; // [esp+14h] [ebp+4h]
  float v17; // [esp+18h] [ebp+8h]
  float v18; // [esp+18h] [ebp+8h]

  v3 = a2;
  v4 = *this;
  v9 = a2 - v4;
  v10 = fabs(v9);
  if ( v10 > dbl_A3D5B8 )
  {
    if ( v4 <= v3 )
    {
      v8 = v4 + flt_B2B714;
      v4 = v8;
    }
    else
    {
      v11 = v3 + flt_B2B714;
      v3 = v11;
    }
  }
  v12 = v3 - v4;
  v13 = fabs(v12);
  v5 = v13;
  if ( *(this + 1) <= (double)v13 )
    return (float)0.0;
  v14 = *(this + 3) - a3;
  if ( v14 <= 0.0 )
    return (float)0.0;
  v17 = 1.0 - v5 / *(this + 1);
  v18 = pow(v17, *(this + 2));
  v15 = v14 / *(this + 3);
  v16 = pow(v15, *(this + 4));
  return (float)(v16 * (v18 * *(this + 5)));
}
