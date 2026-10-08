// Verified shared graph route test used from actor package, combat, PathGrid selection, and fast-travel surface construction. It accepts a valid direct segment; if straight-segment validation fails, it invokes actor-aware connected-point A*.
bool __thiscall ConnectedPointGraph_CanTraverseSegment(
        float *segmentQuery,
        const NiPoint3 *start,
        const NiPoint3 *end,
        TESObjectREFR *actor,
        float extraCost)
{
  double v6; // st7

  *segmentQuery = stru_B15450.x; /*0x67eb69*/
  *(segmentQuery + 1) = stru_B15450.y; /*0x67eb71*/
  *(segmentQuery + 2) = stru_B15450.z; /*0x67eb7a*/
  *(segmentQuery + 3) = stru_B15450.x; /*0x67eb82*/
  *(segmentQuery + 4) = stru_B15450.y; /*0x67eb8b*/
  *(segmentQuery + 5) = stru_B15450.z; /*0x67eb98*/
  *(segmentQuery + 7) = 0.0; /*0x67eb9b*/
  *(segmentQuery + 8) = 0.0; /*0x67eb9e*/
  *(segmentQuery + 9) = 0.0; /*0x67eba1*/
  *(segmentQuery + 0xA) = 0.0; /*0x67eba4*/
  sub_67D7B0(); /*0x67eba7*/
  *(NiPoint3 *)segmentQuery = *start; /*0x67ebb2*/
  v6 = *segmentQuery; /*0x67ebc0*/
  *((NiPoint3 *)segmentQuery + 1) = *end; /*0x67ebc8*/
  if ( *(segmentQuery + 3) == v6 /*0x67ec01*/
    && *(segmentQuery + 4) == *(segmentQuery + 1)
    && *(segmentQuery + 5) == *(segmentQuery + 2) )
  {
    return 1; /*0x67ec30*/
  }
  if ( ConnectedPointGraph_TestStraightSegment(segmentQuery, actor, SLOBYTE(extraCost)) ) /*0x67ec10*/
    return ConnectedPointGraph_FindActorAwarePath(segmentQuery, actor); /*0x67ec1c*/
  return 1; /*0x67ec22*/
}
