void __thiscall sub_72A6B0(float *this, float *a2)
{
  bool v3; // c0
  bool v4; // c3
  double v5; // st7
  double v6; // st6
  float v7; // [esp+8h] [ebp-20h]
  float v8; // [esp+Ch] [ebp-1Ch]
  float v9; // [esp+10h] [ebp-18h]
  float v10; // [esp+10h] [ebp-18h]
  float v11; // [esp+14h] [ebp-14h]
  float v12; // [esp+14h] [ebp-14h]
  float v13; // [esp+18h] [ebp-10h]
  float v14; // [esp+18h] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]
  float v18; // [esp+2Ch] [ebp+4h]
  float v19; // [esp+2Ch] [ebp+4h]
  float v20; // [esp+2Ch] [ebp+4h]

  v9 = *this - *a2;
  v11 = *(this + 1) - a2[1];
  v13 = *(this + 2) - a2[2];
  v8 = v9 * v9 + v11 * v11 + v13 * v13;
  v7 = a2[3] - *(this + 3);
  v18 = v7 * v7;
  v3 = v8 < (double)v18;
  v4 = v8 == v18;
  if ( v7 < 0.0 )
  {
    if ( v3 || v4 )
      return;
  }
  else if ( v3 || v4 )
  {
    *this = *a2;
    *(this + 1) = a2[1];
    *(this + 2) = a2[2];
    *(this + 3) = a2[3];
    return;
  }
  v19 = sqrt(v8);
  v5 = v19;
  if ( flt_B27520 < (double)v19 )
  {
    v20 = (v5 - v7) / (v5 + v5);
    v15 = v9 * v20;
    v16 = v11 * v20;
    v17 = v20 * v13;
    v10 = *a2 + v15;
    v12 = v16 + a2[1];
    v6 = a2[2];
    *this = v10;
    *(this + 1) = v12;
    v14 = v6 + v17;
    *(this + 2) = v14;
  }
  *(this + 3) = (v5 + a2[3] + *(this + 3)) * dbl_A2FAA0;
}
