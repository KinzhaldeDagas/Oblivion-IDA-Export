void __thiscall sub_8E9390(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v3 = a2[5]; /*0x8e9394*/
  v4 = *a2; /*0x8e9397*/
  v5 = *a2; /*0x8e9399*/
  if ( v4 < v3 ) /*0x8e93a4*/
    v3 = v5; /*0x8e93a8*/
  v6 = a2[0xA]; /*0x8e93af*/
  if ( v3 >= v6 ) /*0x8e93bc*/
    *(this + 0x31) = v6; /*0x8e93cd*/
  else
    *(this + 0x31) = v3; /*0x8e93be*/
}
