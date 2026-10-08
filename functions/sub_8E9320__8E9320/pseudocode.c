void __thiscall sub_8E9320(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v3 = a2[5]; /*0x8e9324*/
  v4 = *a2; /*0x8e9327*/
  v5 = *a2; /*0x8e9329*/
  if ( v4 > v3 ) /*0x8e9334*/
    v3 = v5; /*0x8e9338*/
  v6 = a2[0xA]; /*0x8e933f*/
  if ( v3 <= v6 ) /*0x8e934c*/
    v3 = v6; /*0x8e9350*/
  if ( v3 <= *(float *)&SrcStr ) /*0x8e935f*/
    *(this + 0x31) = 0.0; /*0x8e9374*/
  else
    *(this + 0x31) = fConstant_1 / v3; /*0x8e9369*/
}
