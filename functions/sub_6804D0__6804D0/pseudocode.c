// Verified: tests state flag bit 0x02. The main A* loop sets this bit after expanding the popped node, so expanded/closed is Verified.
bool __thiscall TravelPath_SearchState_IsExpanded(TravelPathSpaceDoorLink *node)
{
  unsigned __int16 searchNodeIndex; // cx
  int v2; // eax

  searchNodeIndex = node->searchNodeIndex; /*0x6804d0*/
  v2 = 0; /*0x6804d3*/
  if ( searchNodeIndex < LOWORD(qword_B3BB2C[0xF6]) ) /*0x6804dc*/
    v2 = LODWORD(qword_B3BB2C[0xF5]) + 0x10 * searchNodeIndex; /*0x6804e4*/
  return (*(_BYTE *)(v2 + 0xC) & 2) != 0; /*0x6804f2*/
}
