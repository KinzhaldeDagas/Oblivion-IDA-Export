// TESFile::TESRewindChunk
char __thiscall TESFile_JumpToBeginningOfRecord(Data *this)
{
  UInt32 currentRecordOffset; // eax
  UInt32 type; // ecx
  UInt32 v4; // eax

  currentRecordOffset = this->currentRecordOffset;
  type = this->currentRecord.chunkInfo.type;
  this->currentChunkOffset = 0;
  this->fetchedChunkDataSize = 0;
  v4 = currentRecordOffset + 0x14;
  if ( type == dword_B05E20 || (this->currentRecord.flags & 0x40000) == 0 )
    (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)this->bsFile + 0xC))(
      this->bsFile,
      v4,
      BSFile_FilePos_Beg);
  this->currentChunk.type = 0;
  this->currentChunk.length = 0;
  return TESFile_LoadChunkHeader(this);
}
