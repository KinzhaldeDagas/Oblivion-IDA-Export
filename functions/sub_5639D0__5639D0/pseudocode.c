void __thiscall sub_5639D0(char **this, float *a2)
{
  char *v2; // ecx
  __m128 *LinearVelocityPtr; // eax

  if ( this ) /*0x5639d2*/
  {
    v2 = *(this + 2); /*0x5639d4*/
    if ( v2 ) /*0x5639d9*/
    {
      LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v2); /*0x5639db*/
      HavokVector_ToWorldVector(a2, LinearVelocityPtr); /*0x5639e6*/
    }
  }
}
