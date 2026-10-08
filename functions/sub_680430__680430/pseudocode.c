// Verified: returns the predecessor TravelPathSpaceDoorLink pointer stored at state +4 for this link's searchNodeIndex.
TravelPathSpaceDoorLink *__thiscall TravelPath_SearchState_GetParentNode(TravelPathSpaceDoorLink *node)
{
  if ( node->searchNodeIndex >= LOWORD(qword_B3BB2C[0xF6]) ) /*0x68043c*/
    return *(TravelPathSpaceDoorLink **)4; /*0x68044e*/
  else
    return *(TravelPathSpaceDoorLink **)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * node->searchNodeIndex + 4); /*0x68044a*/
}
