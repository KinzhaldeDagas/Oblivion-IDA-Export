int __thiscall sub_471560(float *this, float a2)
{
  int result; // eax

  result = _isnan(a2);
  if ( !result )
  {
    result = _finite(a2);
    if ( result )
      *(this + 7) = a2;
  }
  return result;
}
