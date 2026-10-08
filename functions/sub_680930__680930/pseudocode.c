// Verified: writes fitness at +0 of the 0x10-byte TravelPathSearchState selected by the link's 16-bit searchNodeIndex. Non-finite/NaN fitness is logged and clamped to 0.
TravelPathSearchState *__thiscall TravelPath_SearchState_SetFitness(TravelPathSpaceDoorLink *node, float fitness)
{
  TravelPathSearchState *result; // eax

  if ( !_finite(fitness) /*0x6809ab*/
    || !_finite(fitness)
    || !_finite(fitness)
    || _isnan(fitness)
    || _isnan(fitness)
    || _isnan(fitness) )
  {
    PrintError("Corrupt goal, setting to 0."); /*0x6809bc*/
    fitness = 0.0; /*0x6809c3*/
  }
  result = (TravelPathSearchState *)node->searchNodeIndex; /*0x6809ca*/
  if ( (unsigned __int16)result >= LOWORD(qword_B3BB2C[0xF6]) ) /*0x6809db*/
  {
    *(float *)0 = fitness; /*0x6809ee*/
  }
  else
  {
    result = (TravelPathSearchState *)(LODWORD(qword_B3BB2C[0xF5]) + 0x10 * (unsigned __int16)result); /*0x6809e3*/
    result->fitness = fitness; /*0x6809e9*/
  }
  return result; /*0x6809eb*/
}
