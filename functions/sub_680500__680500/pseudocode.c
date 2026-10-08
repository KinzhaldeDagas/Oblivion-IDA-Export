// Verified: Sets or clears bit 0x02 at byte +0x0C of the 0x10-byte state record selected by the node's 16-bit index. The route loop sets it after expanding a popped node, so its expanded/closed-set role is Probable; the full record layout remains Unknown.
TravelPathSearchState *__thiscall TravelPath_SetSearchNodeExpandedFlag(TravelPathSpaceDoorLink *node, char expanded)
{
  unsigned __int16 searchNodeIndex; // cx
  TravelPathSearchState *result; // eax

  searchNodeIndex = node->searchNodeIndex; /*0x680500*/
  result = 0; /*0x680503*/
  if ( expanded ) /*0x680509*/
  {
    if ( searchNodeIndex < MEMORY[0xB3BE00].stateCapacity ) /*0x680512*/
      result = &MEMORY[0xB3BE00].states[searchNodeIndex]; /*0x68051a*/
    result->flags |= 2u; /*0x680520*/
  }
  else
  {
    if ( searchNodeIndex < MEMORY[0xB3BE00].stateCapacity ) /*0x68052e*/
      result = &MEMORY[0xB3BE00].states[searchNodeIndex]; /*0x680536*/
    result->flags &= ~2u; /*0x68053c*/
  }
  return result; /*0x680524*/
}
