// Verified cost calculation: obtains the reference's position in the specified spatial form and adds Euclidean distance from the supplied position. When includeTransitionPenalty is true it also adds TravelPath_ComputeDoorTransitionPenalty. Sentinel/invalid-position fallback is the global float constant; broader heuristic policy is Unknown.
double __cdecl TravelPath_ComputeTransitionDistanceCost(
        TESForm *space,
        const NiPoint3 *position,
        TESObjectREFR **candidateNode,
        TESObjectREFR *sourceRef,
        char includeTransitionPenalty)
{
  double v5; // st7
  float v7; // [esp+0h] [ebp-1Ch]
  NiPoint3 outPosition; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v7 = flt_A32048; /*0x680aaf*/
  if ( space ) /*0x680ab2*/
  {
    if ( candidateNode ) /*0x680abb*/
    {
      if ( TravelPathSpaceDoorLink_GetPositionInSpace((TravelPathSpaceDoorLink *)candidateNode, space, &outPosition) ) /*0x680ac5*/
      {
        if ( position->x == dbl_A3A5B0 ) /*0x680adf*/
        {
          v5 = 0.0; /*0x680b0c*/
        }
        else
        {
          v9[0] = position->x - outPosition.x; /*0x680ae7*/
          v9[1] = position->y - outPosition.y; /*0x680af2*/
          v9[2] = position->z - outPosition.z; /*0x680b01*/
          v5 = NiPoint3_Length(v9); /*0x680b05*/
        }
        v7 = v5; /*0x680b13*/
        if ( includeTransitionPenalty ) /*0x680b17*/
          return (float)(TravelPath_ComputeDoorTransitionPenalty((TravelPathSpaceDoorLink *)candidateNode, sourceRef) /*0x680b29*/
                       + v7);
      }
    }
  }
  return v7; /*0x680b31*/
}
