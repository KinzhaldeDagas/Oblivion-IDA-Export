void __thiscall sub_6A7290(__m128 **this, float *a2)
{
  __m128 *v2; // eax

  if ( this ) /*0x6a7292*/
  {
    v2 = *(this + 2); /*0x6a7294*/
    if ( v2 ) /*0x6a7299*/
      HavokVector_ToWorldVector(a2, v2 + 3); /*0x6a72a4*/
  }
}
