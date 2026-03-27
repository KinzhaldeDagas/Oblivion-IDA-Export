int __thiscall TESFile_GetRecordType(Data *this)
{
  if ( !this->currentRecord.chunkInfo.type )
  {
    if ( !TESFile_LoadRecordHeader(this) )
      return 0;
    this->currentChunk.type = 0;
    this->currentChunk.length = 0;
    TESFile_LoadChunkHeader(this);
  }
  return TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type);
}
