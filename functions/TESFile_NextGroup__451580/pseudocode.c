// MEF v20 fix: TESFile::NextGroup short-GRUP guard. Reject lengths below 0x14 before subtracting the group header and tail-calling TESFile_NextRecord.
char __thiscall TESFile::NextGroup(Data *this)
{
  char result; // al

  result = 0; /*0x451586*/
  if ( this->currentRecord.chunkInfo.type == dword_B05E20 ) /*0x45158e*/
  {
    this->currentRecord.chunkInfo.type = 0;     // EngineIssues review: TESFile::NextGroup subtracts 0x14 from group length without checking length >= 0x14 before handing off to TESFile_NextRecord. /*0x451590*/
    this->currentRecord.chunkInfo.length -= 0x14; /*0x451596*/
    return TESFile_NextRecord(this); /*0x45159d*/
  }
  return result; /*0x4515a2*/
}
