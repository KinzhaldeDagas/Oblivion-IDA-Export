int __thiscall sub_471560(float *this, float a2)
{
  int result; // eax

  result = _isnan(a2); /*0x47156d*/
  if ( !result ) /*0x471577*/
  {
    result = _finite(a2); /*0x471583*/
    if ( result ) /*0x47158d*/
      *(this + 7) = a2; /*0x471593*/
  }
  return result; /*0x471597*/
}
