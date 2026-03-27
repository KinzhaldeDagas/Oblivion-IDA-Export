char __thiscall sub_710990(float *this, float *a2, float *a3)
{
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-10h]
  float v9; // [esp+Ch] [ebp-10h]
  float v10; // [esp+10h] [ebp-Ch]
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]
  float v13; // [esp+20h] [ebp+4h]
  float v14; // [esp+20h] [ebp+4h]
  float v15; // [esp+20h] [ebp+4h]
  float v16; // [esp+24h] [ebp+8h]
  float v17; // [esp+24h] [ebp+8h]

  v6 = *(this + 1);
  v8 = *(this + 2);
  v10 = *(this + 4);
  v12 = *(this + 5);
  v11 = *(this + 8);
  *a2 = *this;
  v13 = fabs(v8);
  if ( v13 < (double)flt_A7E738 )
  {
    a2[1] = v10;
    a2[2] = v11;
    *a3 = v6;
    a3[1] = v12;
    *this = 1.0;
    *(this + 1) = 0.0;
    *(this + 2) = 0.0;
    *(this + 3) = 0.0;
    *(this + 5) = 0.0;
    *(this + 6) = 0.0;
    *(this + 7) = 0.0;
    *(this + 4) = 1.0;
    *(this + 8) = 1.0;
    return 0;
  }
  else
  {
    v14 = v8 * v8 + v6 * v6;
    v15 = sqrt(v14);
    *a3 = v15;
    v16 = 1.0 / v15;
    v7 = v16 * v6;
    v9 = v16 * v8;
    v17 = (v7 + v7) * v12 + (v11 - v10) * v9;
    a2[1] = v10 + v17 * v9;
    a2[2] = v11 - v17 * v9;
    a3[1] = v12 - v17 * v7;
    *this = 1.0;
    *(this + 1) = 0.0;
    *(this + 2) = 0.0;
    *(this + 3) = 0.0;
    *(this + 6) = 0.0;
    *(this + 4) = v7;
    *(this + 5) = v9;
    *(this + 7) = v9;
    *(this + 8) = -v7;
    return 1;
  }
}
