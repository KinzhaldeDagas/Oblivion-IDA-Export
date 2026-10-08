// Verified: sets/clears state flag bit 0x01. It is set during source seeding and for newly inserted links; because it persists after expansion, its 'discovered' meaning is Probable.
TravelPathSearchState *__thiscall TravelPath_SearchState_SetDiscoveredFlag(
        TravelPathSpaceDoorLink *node,
        char discovered)
{
  unsigned __int16 searchNodeIndex; // cx
  TravelPathSearchState *result; // eax

  searchNodeIndex = node->searchNodeIndex; /*0x680570*/
  result = 0; /*0x680573*/
  if ( discovered ) /*0x680579*/
  {
    if ( searchNodeIndex < LOWORD(qword_B3BB2C[0xF6]) ) /*0x680582*/
      result = (TravelPathSearchState *)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * searchNodeIndex); /*0x68058a*/
    result->flags |= 1u; /*0x680590*/
  }
  else
  {
    if ( searchNodeIndex < LOWORD(qword_B3BB2C[0xF6]) ) /*0x68059e*/
      result = (TravelPathSearchState *)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * searchNodeIndex); /*0x6805a6*/
    result->flags &= ~1u; /*0x6805ac*/
  }
  return result; /*0x680594*/
}
