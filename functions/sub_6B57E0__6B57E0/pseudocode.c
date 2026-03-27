int __stdcall sub_6B57E0(float a1)
{
  double v1; // st7

  v1 = a1;
  if ( a1 > dbl_A3D5A8 )
    return 0x7FFF;
  if ( flt_A78418 <= v1 )
    return (__int16)Double_To_SInt32(v1);
  return 0xFFFF8000;
}
