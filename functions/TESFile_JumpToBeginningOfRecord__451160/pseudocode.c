// TESFile::TESRewindChunk
char __thiscall TESFile_JumpToBeginningOfRecord(Data *this)
{
  UInt32 currentRecordOffset; // eax
  UInt32 type; // ecx
  UInt32 v4; // eax

  currentRecordOffset = this->currentRecordOffset; /*0x451163*/
  type = this->currentRecord.chunkInfo.type; /*0x451169*/
  this->currentChunkOffset = 0; /*0x451172*/
  this->fetchedChunkDataSize = 0; /*0x451178*/
  v4 = currentRecordOffset + 0x14; /*0x45117e*/
  if ( type == dword_B05E20 || (this->currentRecord.flags & 0x40000) == 0 ) /*0x451193*/
    (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)this->bsFile + 0xC))( /*0x4511a6*/
      this->bsFile,
      v4,
      BSFile_FilePos_Beg);
  this->currentChunk.type = 0; /*0x4511a9*/
  this->currentChunk.length = 0; /*0x4511af*/
  return TESFile_LoadChunkHeader(this); /*0x4511b5*/
}
