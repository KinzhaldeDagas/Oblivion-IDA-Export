int __stdcall sub_673B10(float a1)
{
  int result; // eax

  flt_B3BCF0 = a1;
  if ( a1 > (double)flt_A3F3D8 )
    flt_B3BCF0 = 0.0;
  result = _isnan(flt_B3BCF0);
  if ( result || (result = _finite(flt_B3BCF0)) == 0 )
    flt_B3BCF0 = 0.0;
  return result;
}
