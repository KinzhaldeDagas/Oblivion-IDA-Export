float *__thiscall sub_8C3CD0(__m128 **this, float *a2)
{
  float *result; // eax
  __m128 *v4; // esi
  __m128 *v5; // esi

  result = (float *)sub_8AEA60(this, (int)a2); /*0x8c3cd9*/
  if ( this ) /*0x8c3ce0*/
  {
    v4 = *(this + 2); /*0x8c3ce2*/
    if ( v4 ) /*0x8c3ce7*/
    {
      v5 = v4 + 1; /*0x8c3ce9*/
      if ( v5 ) /*0x8c3cec*/
      {
        sub_47DCD0(a2 + 4, v5); /*0x8c3cf2*/
        sub_47DCD0(a2 + 8, v5 + 1); /*0x8c3cfe*/
        return sub_47DCD0(a2 + 0xC, v5 + 2); /*0x8c3d0a*/
      }
    }
  }
  return result; /*0x8c3d0f*/
}
