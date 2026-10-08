// Verified: inverse crime-list lookup at manager+28+4*crimeType by16-bit index; returns pointer or NULL with diagnostic. No FormID resolution. Used by AlarmPackage_LoadGame; missing entries are skipped.
Crime *__thiscall ActorProcessManager_GetCrimeByIndex(
        ActorProcessManager *self,
        unsigned int crimeType,
        unsigned __int16 index)
{
  CrimeListNode *v3; // eax
  __int16 v4; // dx
  CrimeListNode *next; // ecx

  v3 = self->crimeLists[crimeType]; /*0x675d04*/
  v4 = 0; /*0x675d08*/
  if ( v3 ) /*0x675d0d*/
  {
    do /*0x675d14*/
    {
      next = v3->next; /*0x675d14*/
      if ( !next && !v3->crime ) /*0x675d1b*/
        break; /*0x675d1b*/
      if ( v4 == index ) /*0x675d22*/
        return v3->crime; /*0x675d40*/
      v3 = v3->next; /*0x675d24*/
      ++v4; /*0x675d26*/
    }
    while ( next ); /*0x675d14*/
  }
  PrintError("When trying to get a crime by its index, the index was larger than the size of the crime list."); /*0x675d2d*/
  return 0; /*0x675d3c*/
}
