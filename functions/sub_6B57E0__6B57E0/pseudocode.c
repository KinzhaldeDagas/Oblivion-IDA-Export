int __stdcall sub_6B57E0(float a1)
{
  double v1; // st7

  v1 = a1; /*0x6b57e0*/
  if ( a1 > dbl_A3D5A8 ) /*0x6b57ef*/
    return 0x7FFF; /*0x6b57f3*/
  if ( flt_A78418 <= v1 ) /*0x6b5808*/
    return (__int16)Double_To_SInt32(v1); /*0x6b5819*/
  return 0xFFFF8000; /*0x6b57f8*/
}
