// TES4 authoritative: bhkWorldRayCastData::SetCastInputFrom; scales world-space NiPoint3 into Havok units using hkFactor and writes ray From.
NiPoint3 *__thiscall bhkWorldRayCastData::SetCastInputFrom(bhkWorldRayCastData *this, NiPoint3 *a2)
{
  double v3; // rt0
  hkVector4 v4; // [esp+0h] [ebp-20h]

  v3 = hkFactor; /*0x4f8861*/
  v4.x = a2->x * v3; /*0x4f8863*/
  v4.y = a2->y * v3; /*0x4f886b*/
  v4.z = v3 * a2->z; /*0x4f8872*/
  this->WorldRayCastInput.From = v4; /*0x4f887a*/
  return a2; /*0x4f887d*/
}
