// Computes flare angular/progress falloff for a 0x18-byte branch flare entry.
double __thiscall OB_CBranchFlare_Distance_010201A0(float *this, float a2, float a3)
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

  v3 = a2; /*0x78f2d2*/
  v4 = *this; /*0x78f2e0*/
  v9 = a2 - v4; /*0x78f2e2*/
  v10 = fabs(v9); /*0x78f2ec*/
  if ( v10 > dbl_A3D5B8 ) /*0x78f2ff*/
  {
    if ( v4 <= v3 ) /*0x78f308*/
    {
      v8 = v4 + flt_B2B714; /*0x78f3c2*/
      v4 = v8; /*0x78f3c6*/
    }
    else
    {
      v11 = v3 + flt_B2B714; /*0x78f318*/
      v3 = v11; /*0x78f320*/
    }
  }
  v12 = v3 - v4; /*0x78f324*/
  v13 = fabs(v12); /*0x78f32e*/
  v5 = v13; /*0x78f33a*/
  if ( *(this + 1) <= (double)v13 ) /*0x78f348*/
    return (float)0.0; /*0x78f348*/
  v14 = *(this + 3) - a3; /*0x78f355*/
  if ( v14 <= 0.0 ) /*0x78f364*/
    return (float)0.0; /*0x78f3d4*/
  v17 = 1.0 - v5 / *(this + 1); /*0x78f36d*/
  v18 = pow(v17, *(this + 2)); /*0x78f37d*/
  v15 = v14 / *(this + 3); /*0x78f393*/
  v16 = pow(v15, *(this + 4)); /*0x78f3a3*/
  return (float)(v16 * (v18 * *(this + 5))); /*0x78f3b6*/
}
