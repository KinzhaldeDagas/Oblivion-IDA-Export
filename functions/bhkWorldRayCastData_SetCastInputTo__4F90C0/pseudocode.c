// TES4 authoritative: bhkWorldRayCastData::SetCastInputTo; scales world-space NiPoint3 into Havok units, writes ray To, resets sentinel vector at +0x60.
hkVector4 *__thiscall bhkWorldRayCastData::SetCastInputTo(bhkWorldRayCastData *this, NiPoint3 *a2)
{
  double v3; // rt0
  double v4; // st7
  hkVector4 v5; // [esp+0h] [ebp-20h]

  v3 = hkFactor; /*0x4f90ea*/
  v5.x = a2->x * v3; /*0x4f90ec*/
  v5.y = a2->y * v3; /*0x4f90f4*/
  v4 = v3 * a2->z; /*0x4f90f8*/
  this->unk60 = unk_BA7A40;                     // TES4 authoritative: SetCastInputTo resets ray data +0x60 sentinel/all-ones vector after scaling the TES/world endpoint to Havok units. /*0x4f90ff*/
  v5.z = v4; /*0x4f9105*/
  this->WorldRayCastInput.To = v5; /*0x4f910d*/
  return &this->WorldRayCastInput.From; /*0x4f9111*/
}
