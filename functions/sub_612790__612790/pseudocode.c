BOOL __thiscall sub_612790(float *this, float a2, bool *a3)
{
  double v3; // st7

  v3 = a2;
  if ( a3 )
  {
    if ( *(this + 2) > 0.0 )
      *a3 = *(this + 2) < v3 - *this;
  }
  return *(this + 1) < v3 - *this;
}
