double __cdecl FloatFloor(float a1)
{
  double v1; // st7
  double v2; // st6
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]

  v1 = a1; /*0x404f70*/
  v5 = (float)Double_To_SInt32(a1); /*0x404f83*/
  v2 = v1 - v5; /*0x404f8f*/
  v3 = v5; /*0x404f8f*/
  if ( v2 < 0.0 ) /*0x404f9c*/
    return (float)(v3 - 1.0); /*0x404f9e*/
  return (float)v3; /*0x404fac*/
}
