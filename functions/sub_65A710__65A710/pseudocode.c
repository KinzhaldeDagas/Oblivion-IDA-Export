float *__thiscall sub_65A710(Actor *this, float *a2)
{
  bhkCharacterProxy *CharProxy; // eax
  float *result; // eax
  __m128 *LinearVelocityPtr; // eax

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a710*/
  if ( CharProxy ) /*0x65a717*/
  {
    result = *((float **)CharProxy + 2); /*0x65a719*/
    if ( result ) /*0x65a71e*/
    {
      LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr((char *)result); /*0x65a722*/
      return HavokVector_ToWorldVector(a2, LinearVelocityPtr); /*0x65a72d*/
    }
  }
  else
  {
    *a2 = g_zeroNiPoint3.x; /*0x65a742*/
    a2[1] = g_zeroNiPoint3.y; /*0x65a74a*/
    a2[2] = g_zeroNiPoint3.z; /*0x65a753*/
    return a2; /*0x65a73e*/
  }
  return result; /*0x65a735*/
}
