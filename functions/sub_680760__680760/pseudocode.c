// Verified: returns the spatial TESForm stored at state +8 for this link's searchNodeIndex. The route expansion uses it to select the opposite endpoint.
TESForm *__thiscall TravelPath_SearchState_GetArrivalSpace(TravelPathSpaceDoorLink *node)
{
  if ( node->searchNodeIndex >= LOWORD(qword_B3BB2C[0xF6]) ) /*0x68076c*/
    return *(TESForm **)8; /*0x68077e*/
  else
    return *(TESForm **)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * node->searchNodeIndex + 8); /*0x68077a*/
}
