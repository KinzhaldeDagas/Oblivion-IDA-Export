// Verified: clears embedded TESRegionDataSound.sounds linked list and frees each owned OblivionTESRegionSoundRecord.
bool __thiscall TESRegionDataSound_ClearRecords(TESRegionDataSound *self)
{
  TESRegionSoundNode *p_sounds; // edi
  unsigned int *v2; // eax
  unsigned int v3; // esi
  unsigned int *v4; // ecx

  p_sounds = &self->sounds; /*0x4a5391*/
  v2 = (unsigned int *)&self->sounds; /*0x4a5394*/
  if ( self != (TESRegionDataSound *)0xFFFFFFF4 ) /*0x4a5398*/
  {
    do /*0x4a53d5*/
    {
      v3 = *v2; /*0x4a53a0*/
      if ( !*v2 ) /*0x4a53a0*/
        break; /*0x4a53a4*/
      v4 = (unsigned int *)v2[1]; /*0x4a53a6*/
      if ( v4 ) /*0x4a53ab*/
      {
        v2[1] = v4[1]; /*0x4a53b0*/
        *v2 = *v4; /*0x4a53b6*/
        FormHeapFree((unsigned int)v4); /*0x4a53b8*/
      }
      else
      {
        *v2 = 0; /*0x4a53c2*/
      }
      FormHeapFree(v3); /*0x4a53c9*/
      v2 = (unsigned int *)p_sounds; /*0x4a53ce*/
    }
    while ( p_sounds ); /*0x4a53d5*/
  }
  return !p_sounds->next && !p_sounds->record; /*0x4a53e8*/
}
