void __thiscall sub_6ED090(float *this, float *a2, float *a3)
{
  if ( flt_A7DEB4 == *a2 && -flt_A7DEB4 == *a3 ) /*0x6ed0bb*/
  {
    *a2 = 0.0; /*0x6ed0bf*/
    *a3 = 0.0; /*0x6ed0c1*/
  }
  else
  {
    *a2 = *(this + 3); /*0x6ed0cc*/
    *a3 = *(this + 4); /*0x6ed0d1*/
  }
}
