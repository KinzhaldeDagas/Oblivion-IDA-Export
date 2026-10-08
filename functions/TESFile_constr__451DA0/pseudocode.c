Data *__thiscall TESFile_constr(Data *this, LPCSTR lpString2, const char *ArgList, int a4)
{
  this->openGroups[0] = 0; /*0x451dcc*/
  this->openGroups[1] = 0; /*0x451dd2*/
  this->masterList.node.data = 0; /*0x451dd8*/
  this->masterList.node.next = 0; /*0x451dde*/
  this->masterlistSizeInfo.node.data = 0; /*0x451de4*/
  this->masterlistSizeInfo.node.next = 0; /*0x451dea*/
  this->authorName.m_data = 0;                  // TESFile_constr initializes authorName data pointer, dataLen, and bufLen to zero. Missing CNAM therefore retains the empty-string constructor default. /*0x451df0*/
  this->authorName.m_dataLen = 0; /*0x451df6*/
  this->authorName.m_bufLen = 0; /*0x451dfd*/
  this->description.m_data = 0;                 // TESFile_constr initializes description data pointer, dataLen, and bufLen to zero. Missing SNAM therefore retains the empty-string constructor default. /*0x451e08*/
  this->description.m_dataLen = 0; /*0x451e0e*/
  this->description.m_bufLen = 0; /*0x451e15*/
  this->currentRecordDCBuffer = 0; /*0x451e1c*/
  this->currentRecordDCLength = 0; /*0x451e22*/
  this->unkFile22C = 0; /*0x451e28*/
  this->unkFile230 = 0; /*0x451e2e*/
  this->unkFile234 = 0; /*0x451e34*/
  this->ghostFileParent = 0; /*0x451e3a*/
  this->unk008 = 0; /*0x451e3d*/
  this->errorState = 0; /*0x451e40*/
  this->fileSize = 0; /*0x451e42*/
  this->currentRecordOffset = 0; /*0x451e48*/
  this->currentChunkOffset = 0; /*0x451e4e*/
  this->fetchedChunkDataSize = 0; /*0x451e54*/
  this->fileFlags = 0; /*0x451e5a*/
  this->masterFiles = 0; /*0x451e60*/
  this->unkFile00C = 0; /*0x451e66*/
  this->bsFile = 0; /*0x451e69*/
  this->masterCount = 0; /*0x451e6c*/
  this->fileIndex = 0xFF; /*0x451e72*/
  this->unkFile238 = 0; /*0x451e79*/
  this->unkFile268.recordOffset = 0; /*0x451e7f*/
  this->unkFile280 = 0; /*0x451e85*/
  this->unkFile224 = 0; /*0x451e8b*/
  this->bufferSize = dword_B055CC; /*0x451e96*/
  this->currentRecord.chunkInfo.type = 0; /*0x451e9e*/
  this->currentRecord.chunkInfo.length = 0; /*0x451ea4*/
  this->currentRecord.flags = 0; /*0x451eaf*/
  this->currentRecord.formID = 0; /*0x451ebc*/
  this->currentRecord.trackingData = 0; /*0x451ec8*/
  _memset((int)&this->findData, 0, sizeof(this->findData)); /*0x451ece*/
  this->unkFile3F8 = 0; /*0x451edd*/
  this->unkFile3FC = 0; /*0x451ee6*/
  this->currentChunk.length = 0; /*0x451eed*/
  this->currentChunk.type = 0; /*0x451ef3*/
  this->version = 0; /*0x451ef9*/
  this->formCount = 0; /*0x451f00*/
  this->nextFormID = 0x800; /*0x451f0e*/
  if ( TESFile_OpenBSFile_(this, lpString2, ArgList, a4, 0) ) /*0x451f18*/
  {
    if ( this->findData.nFileSizeHigh || this->findData.nFileSizeLow ) /*0x451f29*/
    {
      if ( TESFile_Open(this) ) /*0x451f33*/
        PrintError("File '%s' is not a valid TES file.", ArgList); /*0x451f42*/
    }
    if ( !TESFile_Close(this) ) /*0x451f4c*/
      PrintError("Could not close file '%s'.", ArgList); /*0x451f5b*/
  }
  return this; /*0x451f65*/
}
