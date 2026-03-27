void __thiscall sub_8E9320(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v3 = a2[5];
  v4 = *a2;
  v5 = *a2;
  if ( v4 > v3 )
    v3 = v5;
  v6 = a2[0xA];
  if ( v3 <= v6 )
    v3 = v6;
  if ( v3 <= *(float *)&SrcStr )
    *(this + 0x31) = 0.0;
  else
    *(this + 0x31) = fConstant_1 / v3;
}
