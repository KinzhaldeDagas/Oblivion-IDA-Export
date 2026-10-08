// Verified: stores predecessor link pointer at state +4 and the spatial form used to enter the current link at state +8. Seed links use a null predecessor and source space.
TravelPathSearchState *__thiscall TravelPath_SearchState_SetParentAndSpace(
        TravelPathSpaceDoorLink *node,
        TravelPathSpaceDoorLink *parentNode,
        TESForm *space)
{
  int v3; // eax
  TravelPathSearchState *result; // eax

  v3 = 0; /*0x680463*/
  if ( node->searchNodeIndex < LOWORD(qword_B3BB2C[0xF6]) ) /*0x68046c*/
    v3 = LODWORD(qword_B3BB2C[0xF5]) + 0x10 * node->searchNodeIndex; /*0x680474*/
  *(_DWORD *)(v3 + 4) = parentNode; /*0x68047e*/
  if ( node->searchNodeIndex >= LOWORD(qword_B3BB2C[0xF6]) ) /*0x68048d*/
  {
    *(_DWORD *)8 = space; /*0x6804a9*/
    return (TravelPathSearchState *)space; /*0x6804a5*/
  }
  else
  {
    result = (TravelPathSearchState *)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * node->searchNodeIndex); /*0x680499*/
    result->arrivalSpace = space; /*0x68049f*/
  }
  return result; /*0x6804a2*/
}
