void __thiscall sub_680E70(float *this, float a2)
{
  double v2; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp+4h]

  v2 = a2; /*0x680e70*/
  *(this + 6) = a2; /*0x680e77*/
  v4 = dbl_A3D5B0; /*0x680e80*/
  if ( a2 >= 0.0 ) /*0x680e89*/
  {
    if ( v4 <= v2 ) /*0x680eb4*/
    {
      unknown_libname_14(v4, v2); /*0x680eb6*/
      *(this + 6) = a2; /*0x680ec3*/
    }
  }
  else
  {
    v5 = v2 + v4; /*0x680e8f*/
    unknown_libname_14(v4, v5); /*0x680e99*/
    *(this + 6) = v5; /*0x680ea6*/
  }
}
