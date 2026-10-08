// TES4 authoritative: converts TES/world NiPoint3 into Havok units with hkFactor, then writes proxy position through 0x891560.
bhkCharacterProxy *__thiscall sub_452A10(bhkCharacterProxy *this, NiPoint3 *a2)
{
  double v2; // rt0
  float v4[7]; // [esp+0h] [ebp-20h] BYREF

  v2 = hkFactor; /*0x452a31*/
  v4[0] = a2->x * v2; /*0x452a33*/
  v4[1] = a2->y * v2; /*0x452a3b*/
  v4[2] = v2 * a2->z; /*0x452a46*/
  return bhkCharacterController_WriteRelativePosition(this, v4); /*0x452a4f*/
}
