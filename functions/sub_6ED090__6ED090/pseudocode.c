void __thiscall sub_6ED090(float *this, float *a2, float *a3)
{
  if ( flt_A7DEB4 == *a2 && -flt_A7DEB4 == *a3 )
  {
    *a2 = 0.0;
    *a3 = 0.0;
  }
  else
  {
    *a2 = *(this + 3);
    *a3 = *(this + 4);
  }
}
