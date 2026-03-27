bool __thiscall sub_4A6D80(float *this, float *a2, float a3)
{
  double v3; // st7
  double v4; // st6

  if ( !a2 )
    return 0;
  v3 = a3;
  v4 = *(this + 2);
  if ( v4 >= a3 )
  {
    if ( v4 - v3 >= dbl_A30E40 )
      return 0;
  }
  else if ( v3 - v4 >= dbl_A30E40 )
  {
    return 0;
  }
  return sub_4A6990(a2, this) != 0;
}
