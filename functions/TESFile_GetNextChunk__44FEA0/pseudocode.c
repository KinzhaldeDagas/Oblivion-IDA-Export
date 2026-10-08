char __thiscall TESFile_GetNextChunk(Data *this)
{
  UInt32 type; // ecx
  UInt32 length; // edx
  UInt32 currentChunkOffset; // eax
  UInt32 v6; // eax

  type = this->currentRecord.chunkInfo.type; /*0x44fea3*/
  length = this->currentRecord.chunkInfo.length; /*0x44feaf*/
  if ( type != dword_B05E20 && (this->currentRecord.flags & 0x40000) != 0 ) /*0x44fec3*/
    length = this->currentRecordDCLength; /*0x44fec5*/
  this->currentChunkOffset += this->currentChunk.length + 6;// MEF v19 candidate/fix: byte-checked TESFile_GetNextChunk advance. Validate currentChunkOffset + currentChunk.length + 6 against active record/decompressed length; reload EAX with checked offset before 0x44FEF7. /*0x44fed4*/
  currentChunkOffset = this->currentChunkOffset; /*0x44feda*/
  if ( currentChunkOffset < length ) /*0x44fee2*/
  {
    v6 = this->currentRecordOffset + currentChunkOffset + 0x14; /*0x44ff03*/
    if ( type == dword_B05E20 || (this->currentRecord.flags & 0x40000) == 0 ) /*0x44ff0f*/
      (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)this->bsFile + 0xC))( /*0x44ff21*/
        this->bsFile,
        v6,
        BSFile_FilePos_Beg);
    this->fetchedChunkDataSize = 0; /*0x44ff27*/
    this->currentChunk.type = 0; /*0x44ff2d*/
    this->currentChunk.length = 0; /*0x44ff33*/
    TESFile_LoadChunkHeader(this); /*0x44ff39*/
    return 1; /*0x44ff3f*/
  }
  else
  {
    this->currentChunk.type = 0; /*0x44fee6*/
    this->currentChunk.length = 0; /*0x44feec*/
    return 0; /*0x44fee4*/
  }
}
