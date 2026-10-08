// Verified: returns fitness from state +0 for the link's searchNodeIndex.
float __thiscall TravelPath_SearchState_GetFitness(TravelPathSpaceDoorLink *node)
{
  if ( node->searchNodeIndex >= LOWORD(qword_B3BB2C[0xF6]) ) /*0x6804bc*/
    return *(float *)0; /*0x6804cd*/
  else
    return *(float *)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * node->searchNodeIndex); /*0x6804ca*/
}
