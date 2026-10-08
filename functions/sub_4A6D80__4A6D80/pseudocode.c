bool __thiscall sub_4A6D80(float *this, float *a2, float a3)
{
  double v3; // st7
  double v4; // st6

  if ( !a2 ) /*0x4a6d86*/
    return 0; /*0x4a6d86*/
  v3 = a3; /*0x4a6d8f*/
  v4 = *(this + 2); /*0x4a6d93*/
  if ( v4 >= a3 ) /*0x4a6d9e*/
  {
    if ( v4 - v3 >= dbl_A30E40 ) /*0x4a6dc1*/
      return 0; /*0x4a6dc1*/
  }
  else if ( v3 - v4 >= dbl_A30E40 ) /*0x4a6dad*/
  {
    return 0; /*0x4a6db1*/
  }
  return sub_4A6990(a2, this) != 0; /*0x4a6dc6*/
}
