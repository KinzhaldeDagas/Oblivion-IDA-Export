int __thiscall TESFile_GetRecordType(Data *this)
{
  if ( !this->currentRecord.chunkInfo.type ) /*0x4511c3*/
  {
    if ( !TESFile_LoadRecordHeader(this) ) /*0x4511cc*/
      return 0; /*0x4511d8*/
    this->currentChunk.type = 0; /*0x4511db*/
    this->currentChunk.length = 0; /*0x4511e5*/
    TESFile_LoadChunkHeader(this); /*0x4511ef*/
  }
  return TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type); /*0x4511d7*/
}
