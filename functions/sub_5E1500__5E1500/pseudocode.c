// TES4 authoritative: reads proxy position via 0x891440 and converts Havok units back to TES/world units via 0x43F3E0.
float *__thiscall sub_5E1500(__m128 *this, float *a2)
{
  __m128 v3; // [esp+10h] [ebp-20h] BYREF

  bhkCharacterController_ReadRelativePosition(this, &v3); /*0x5e151d*/
  return HavokVector_ToWorldVector(a2, &v3); /*0x5e1534*/
}
