signed int __thiscall sub_7415E0(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = a2[1] * *(this + 1) + *a2 * *this + a2[2] * *(this + 2) - *(this + 3); /*0x7415fb*/
  if ( v3 >= 0.0 ) /*0x74160c*/
    return v3 > 0.0; /*0x741621*/
  else
    return 2; /*0x741610*/
}
