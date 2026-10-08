// Verified: selects crime-list pointer at manager+28+4*crimeType, walks node positions and compares Crime* identity. Returns UInt16 index; not-found logs crime-index diagnostic and returns0 (ambiguous with first element). Used by AlarmPackage_SaveGame for compact references.
unsigned __int16 __thiscall ActorProcessManager_GetCrimeIndex(
        ActorProcessManager *self,
        unsigned int crimeType,
        Crime *crime)
{
  CrimeListNode *v3; // ecx
  unsigned __int16 result; // ax
  CrimeListNode *next; // edx

  v3 = self->crimeLists[crimeType]; /*0x675cc4*/
  result = 0; /*0x675cc8*/
  if ( v3 ) /*0x675ccd*/
  {
    do /*0x675ce9*/
    {
      next = v3->next; /*0x675cd3*/
      if ( !next && !v3->crime ) /*0x675cda*/
        break; /*0x675cdc*/
      if ( crime == v3->crime ) /*0x675ce0*/
        return result; /*0x675ce0*/
      v3 = v3->next; /*0x675ce2*/
      ++result; /*0x675ce4*/
    }
    while ( next ); /*0x675ce9*/
  }
  PrintError("When trying to get a crime index, the crime was not found in the crime lists."); /*0x675cf0*/
  return 0; /*0x675cfb*/
}
