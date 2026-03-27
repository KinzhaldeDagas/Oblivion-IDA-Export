Data *__thiscall TESFile_constr(Data *this, LPCSTR lpString2, const char *ArgList, int a4)
{
  this->openGroups[0] = 0;
  this->openGroups[1] = 0;
  this->masterList.node.data = 0;
  this->masterList.node.next = 0;
  this->masterlistSizeInfo.node.data = 0;
  this->masterlistSizeInfo.node.next = 0;
  this->authorName.m_data = 0;
  this->authorName.m_dataLen = 0;
  this->authorName.m_bufLen = 0;
  this->description.m_data = 0;
  this->description.m_dataLen = 0;
  this->description.m_bufLen = 0;
  this->currentRecordDCBuffer = 0;
  this->currentRecordDCLength = 0;
  this->unkFile22C = 0;
  this->unkFile230 = 0;
  this->unkFile234 = 0;
  this->ghostFileParent = 0;
  this->unk008 = 0;
  this->errorState = 0;
  this->fileSize = 0;
  this->currentRecordOffset = 0;
  this->currentChunkOffset = 0;
  this->fetchedChunkDataSize = 0;
  this->fileFlags = 0;
  this->masterFiles = 0;
  this->unkFile00C = 0;
  this->bsFile = 0;
  this->masterCount = 0;
  this->fileIndex = 0xFF;
  this->unkFile238 = 0;
  this->unkFile268.recordOffset = 0;
  this->unkFile280 = 0;
  this->unkFile224 = 0;
  this->bufferSize = dword_B055CC;
  this->currentRecord.chunkInfo.type = 0;
  this->currentRecord.chunkInfo.length = 0;
  this->currentRecord.flags = 0;
  this->currentRecord.formID = 0;
  this->currentRecord.trackingData = 0;
  _memset(&this->findData, 0, sizeof(this->findData));
  this->unkFile3F8 = 0;
  this->unkFile3FC = 0;
  this->currentChunk.length = 0;
  this->currentChunk.type = 0;
  this->version = 0;
  this->formCount = 0;
  this->nextFormID = 0x800;
  if ( TESFile_OpenBSFile_(this, lpString2, ArgList, a4, 0) )
  {
    if ( this->findData.nFileSizeHigh || this->findData.nFileSizeLow )
    {
      if ( TESFile_Open(this) )
        PrintError("File '%s' is not a valid TES file.", ArgList);
    }
    if ( !TESFile_Close(this) )
      PrintError("Could not close file '%s'.", ArgList);
  }
  return this;
}
