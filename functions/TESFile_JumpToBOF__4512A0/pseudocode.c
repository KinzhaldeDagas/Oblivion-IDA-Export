int __thiscall TESFile_JumpToBOF(Data *this, char a2)
{
  BSFile *bsFile; // ecx
  int result; // eax

  bsFile = this->bsFile;
  if ( bsFile )
    (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_Beg);
  result = 0;
  this->currentRecordOffset = 0;
  this->currentChunkOffset = 0;
  this->fetchedChunkDataSize = 0;
  this->currentRecord.chunkInfo.type = 0;
  this->currentRecord.chunkInfo.length = 0;
  this->currentRecord.flags = 0;
  this->currentRecord.formID = 0;
  this->currentRecord.trackingData = 0;
  if ( a2 )
    return TESFile_GetRecordType(this);
  return result;
}
