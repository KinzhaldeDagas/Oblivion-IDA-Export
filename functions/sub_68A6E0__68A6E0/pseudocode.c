bool __thiscall sub_68A6E0(float *this, TESObjectREFR *a2)
{
  const TravelPathNode *v3; // ecx
  bool result; // al
  NiPoint3 *Position; // eax

  v3 = *((const TravelPathNode **)this + 1); /*0x68a6e3*/
  result = 1; /*0x68a6e8*/
  if ( v3 ) /*0x68a6ea*/
  {
    if ( a2 ) /*0x68a6f3*/
    {
      Position = TravelPathNode_GetPosition(v3); /*0x68a6f8*/
      return (double)*(this + 3) >= TESObjectREFR::GetDistanceToPoint(a2, &Position->x); /*0x68a713*/
    }
  }
  return result; /*0x68a717*/
}
