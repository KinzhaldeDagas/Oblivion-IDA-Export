// Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
float __thiscall TESAnimGroup_GetRequiredNoteTime(CAS_TESAnimGroup_Decoded *this, int noteIndex)
{
  CAS_u32 requiredNoteCount; // ecx
  float *requiredNoteTimes; // eax

  if ( noteIndex < 0 ) /*0x51ae2a*/
  {
    PrintError( /*0x51ae47*/
      "Invalid anim group action (action %d too small) in %s (%04X).",
      noteIndex,
      *(const char **)(0x24 * (unsigned __int8)this->encodedKey + 0xB102E0),
      this->encodedKey);
    return 0.0; /*0x51ae53*/
  }
  requiredNoteCount = this->requiredNoteCount; /*0x51ae56*/
  if ( noteIndex >= requiredNoteCount ) /*0x51ae5b*/
  {
    PrintError( /*0x51ae79*/
      "Invalid anim group action (action %d too big %d max) in %s (%04x).",
      noteIndex,
      requiredNoteCount,
      *(const char **)(0x24 * (unsigned __int8)this->encodedKey + 0xB102E0),
      this->encodedKey);
    return 0.0; /*0x51ae85*/
  }
  requiredNoteTimes = this->requiredNoteTimes; /*0x51ae88*/
  if ( !requiredNoteTimes ) /*0x51ae8d*/
    return 0.0; /*0x51ae8d*/
  if ( _isnan(requiredNoteTimes[noteIndex]) ) /*0x51ae98*/
  {
    PrintError("Time %d in group %04X is QNAN", noteIndex, this->encodedKey); /*0x51aeaf*/
    return 0.0; /*0x51aeb7*/
  }
  else
  {
    return this->requiredNoteTimes[noteIndex]; /*0x51aec1*/
  }
}
