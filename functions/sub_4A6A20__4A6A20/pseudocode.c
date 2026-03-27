float *__thiscall sub_4A6A20(float *this, float *a2)
{
  float *result; // eax

  result = a2;
  if ( !a2 )
  {
    result = (float *)FormHeapAlloc(8u);
    if ( result )
    {
      *result = 0.0;
      result[1] = 0.0;
      *result = *this;
      result[1] = *(this + 1);
      return result;
    }
    result = 0;
  }
  *result = *this;
  result[1] = *(this + 1);
  return result;
}
