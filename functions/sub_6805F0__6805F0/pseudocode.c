// Verified: frees LowPathSearchGlobals.states and resets its pointer, stateCapacity, and nextFreeStateIndex.
void TravelPath_FreeSearchStateTable()
{
  if ( LODWORD(qword_B3BB2C[0xF5]) ) /*0x6805f0*/
  {
    FormHeapFree(LODWORD(qword_B3BB2C[0xF5])); /*0x6805fa*/
    qword_B3BB2C[0xF5] = 0.0; /*0x680602*/
    LOWORD(qword_B3BB2C[0xF6]) = 0; /*0x68060c*/
    LOWORD(qword_B3BB2C[0xF7]) = 0; /*0x680615*/
  }
}
