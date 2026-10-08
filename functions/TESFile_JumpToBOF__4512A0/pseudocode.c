int __thiscall TESFile_JumpToBOF(Data *this, char a2)
{
  BSFile *bsFile; // ecx
  int result; // eax

  bsFile = this->bsFile; /*0x4512a3*/
  if ( bsFile ) /*0x4512a8*/
    (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_Beg); /*0x4512b8*/
  result = 0; /*0x4512ba*/
  this->currentRecordOffset = 0; /*0x4512c0*/
  this->currentChunkOffset = 0; /*0x4512ca*/
  this->fetchedChunkDataSize = 0; /*0x4512d4*/
  this->currentRecord.chunkInfo.type = 0; /*0x4512de*/
  this->currentRecord.chunkInfo.length = 0; /*0x4512e4*/
  this->currentRecord.flags = 0; /*0x4512ea*/
  this->currentRecord.formID = 0; /*0x4512f0*/
  this->currentRecord.trackingData = 0; /*0x4512f6*/
  if ( a2 ) /*0x4512fc*/
    return TESFile_GetRecordType(this); /*0x451300*/
  return result; /*0x451305*/
}
