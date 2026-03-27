char __thiscall TESFile_GetNextChunk(Data *this)
{
  UInt32 type; // ecx
  UInt32 length; // edx
  UInt32 currentChunkOffset; // eax
  UInt32 v6; // eax

  type = this->currentRecord.chunkInfo.type;
  length = this->currentRecord.chunkInfo.length;
  if ( type != dword_B05E20 && (this->currentRecord.flags & 0x40000) != 0 )
    length = this->currentRecordDCLength;
  this->currentChunkOffset += this->currentChunk.length + 6;
  currentChunkOffset = this->currentChunkOffset;
  if ( currentChunkOffset < length )
  {
    v6 = this->currentRecordOffset + currentChunkOffset + 0x14;
    if ( type == dword_B05E20 || (this->currentRecord.flags & 0x40000) == 0 )
      (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)this->bsFile + 0xC))(
        this->bsFile,
        v6,
        BSFile_FilePos_Beg);
    this->fetchedChunkDataSize = 0;
    this->currentChunk.type = 0;
    this->currentChunk.length = 0;
    TESFile_LoadChunkHeader(this);
    return 1;
  }
  else
  {
    this->currentChunk.type = 0;
    this->currentChunk.length = 0;
    return 0;
  }
}
