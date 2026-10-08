// Stores the encoded group key at TESAnimGroup +0x08. Using the unsigned low group byte without a bounds check, indexes the fixed 43-record table, reads noteTemplateClass at record +0x0C, counts that class in the note-major required-note matrix (max 5), writes requiredNoteCount at +0x0C, frees the old +0x10 time array, allocates count*4, and zero-fills it to +0.0f. Later KF parsing populates and validates the authored times. Corrected: this initializer does not write QNaNs.
void __thiscall TESAnimGroup_InitKeyAndRequiredNotes(CAS_TESAnimGroup_Decoded *this, unsigned __int16 groupKey)
{
  signed int noteCount; // eax
  _BYTE **templateEntry; // ecx
  CAS_u32 count; // eax
  float *newNoteTimes; // eax
  unsigned int byteCount; // [esp-8h] [ebp-Ch]

  this->encodedKey = groupKey; /*0x51aa17*/
  noteCount = 0; /*0x51aa28*/
  templateEntry = (_BYTE **)(4 * *(_DWORD *)(0x24 * (unsigned __int8)groupKey + 0xB102EC) + 0xB10900); /*0x51aa2a*/
  do /*0x51aa41*/
  {
    if ( !**templateEntry ) /*0x51aa33*/
      break; /*0x51aa36*/
    ++noteCount; /*0x51aa38*/
    templateEntry += 8; /*0x51aa3b*/
  }
  while ( noteCount < 5 ); /*0x51aa41*/
  this->requiredNoteCount = noteCount; /*0x51aa43*/
  if ( this->requiredNoteTimes ) /*0x51aa46*/
    FormHeapFree((unsigned int)this->requiredNoteTimes); /*0x51aa4e*/
  count = this->requiredNoteCount; /*0x51aa56*/
  if ( count )
  {
    newNoteTimes = (float *)FormHeapAlloc((unsigned __int64)count >> 0x1E != 0 ? 0xFFFFFFFF : 4 * count);
    byteCount = 4 * this->requiredNoteCount; /*0x51aa7a*/
    this->requiredNoteTimes = newNoteTimes; /*0x51aa7e*/
    _memset((int)newNoteTimes, 0, byteCount); /*0x51aa81*/
  }
  else
  {
    this->requiredNoteTimes = 0; /*0x51aa8d*/
  }
}
