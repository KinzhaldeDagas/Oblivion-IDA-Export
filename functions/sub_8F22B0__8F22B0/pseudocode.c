double sub_8F22B0()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]

  v2 = 0.0; /*0x8f22b3*/
  while ( !(int)v2 ) /*0x8f22cd*/
  {
    v0 = v2 + flt_A34BA0; /*0x8f22d2*/
    v2 = v0; /*0x8f22d8*/
    if ( v0 >= flt_A56E28 ) /*0x8f22e6*/
      return fConstant_1; /*0x8f22f1*/
  }
  return v2; /*0x8f22ee*/
}
