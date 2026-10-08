// Writes a caller-supplied TES/world velocity vector into the low-level collision object after scaling by hkFactor. Used by save/load restore and by the swept-hit listener to zero object velocity on selected layer hits.
hkVector4 *__thiscall bhkCharacterController_SetObjectVelocityFromWorldVector(_DWORD *this, float *arg0)
{
  hkVector4 *result; // eax
  double v3; // rt0
  hkVector4 a2; // [esp+0h] [ebp-20h] BYREF

  result = (hkVector4 *)this; /*0x64b3b4*/
  if ( this ) /*0x64b3b8*/
  {
    result = (hkVector4 *)*(this + 2); /*0x64b3ba*/
    if ( result ) /*0x64b3bf*/
    {
      v3 = hkFactor; /*0x64b3ce*/
      a2.x = *arg0 * v3; /*0x64b3d0*/
      a2.y = arg0[1] * v3; /*0x64b3d8*/
      a2.z = v3 * arg0[2]; /*0x64b3e5*/
      return sub_8AC0B0(result, &a2); /*0x64b3e9*/
    }
  }
  return result; /*0x64b3ee*/
}
