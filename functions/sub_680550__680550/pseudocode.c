// Verified: tests state flag bit 0x01. Probable interpretation: link has been discovered/entered into the search; the flag remains set after expansion.
bool __thiscall TravelPath_SearchState_IsDiscovered(TravelPathSpaceDoorLink *node)
{
  unsigned __int16 searchNodeIndex; // cx
  int v2; // eax

  searchNodeIndex = node->searchNodeIndex; /*0x680550*/
  v2 = 0; /*0x680553*/
  if ( searchNodeIndex < LOWORD(qword_B3BB2C[0xF6]) ) /*0x68055c*/
    v2 = LODWORD(qword_B3BB2C[0xF5]) + 0x10 * searchNodeIndex; /*0x680564*/
  return *(_BYTE *)(v2 + 0xC) & 1; /*0x68056f*/
}
