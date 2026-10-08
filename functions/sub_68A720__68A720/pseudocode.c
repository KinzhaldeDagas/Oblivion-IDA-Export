double __thiscall sub_68A720(const TravelPathNode **this, TESObjectREFR *a2)
{
  const TravelPathNode *v2; // ecx
  NiPoint3 *Position; // eax
  float v5; // [esp+0h] [ebp-4h]

  v2 = *(this + 1); /*0x68a723*/
  v5 = 0.0; /*0x68a727*/
  if ( a2 ) /*0x68a731*/
  {
    if ( v2 ) /*0x68a735*/
    {
      Position = TravelPathNode_GetPosition(v2); /*0x68a737*/
      return TESObjectREFR::GetDistanceToPoint(a2, &Position->x); /*0x68a744*/
    }
  }
  return v5; /*0x68a74e*/
}
