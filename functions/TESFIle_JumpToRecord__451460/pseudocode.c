char __thiscall TESFIle_JumpToRecord(Data *this, char *Buffer)
{
  char *v3; // eax
  bool v4; // cf
  BSFile *bsFile; // eax
  UInt32 v7; // eax
  DWORD LastError; // eax

  if ( this->currentRecordDCBuffer )
  {
    MemoryHeap_Free_checked(this->currentRecordDCBuffer);
    this->currentRecordDCBuffer = 0;
    this->currentRecordDCLength = 0;
  }
  v3 = Buffer;
  v4 = (unsigned int)Buffer < this->fileSize;
  this->currentRecordOffset = (UInt32)Buffer;
  if ( v4 )
  {
    (*(void (__thiscall **)(BSFile *, char *, int))(*(_DWORD *)this->bsFile + 0xC))(
      this->bsFile,
      v3,
      BSFile_FilePos_Beg);
    bsFile = this->bsFile;
    if ( *((_DWORD *)bsFile + 0xC) == 0xFFFFFFFF )
      v7 = *((_DWORD *)bsFile + 0x52);
    else
      v7 = *((_DWORD *)bsFile + 0xC);
    this->currentRecordOffset = v7;
    if ( v7 == 0xFFFFFFFF )
    {
      LastError = GetLastError();
      FormatMessageA(0x1300, 0, LastError, 0x400, (LPSTR)&Buffer, 0, 0);
      PrintError("SetFilePointer() in SetOffset failed with error:\n%s", Buffer);
      LocalFree(Buffer);
      return 0;
    }
    else
    {
      this->currentChunkOffset = 0;
      this->fetchedChunkDataSize = 0;
      this->currentRecord.chunkInfo.type = 0;
      this->currentRecord.chunkInfo.length = 0;
      this->currentRecord.flags = 0;
      this->currentRecord.formID = 0;
      this->currentRecord.trackingData = 0;
      TESFile_GetRecordType(this);
      return 1;
    }
  }
  else
  {
    this->currentRecord.chunkInfo.type = 0;
    this->currentRecord.chunkInfo.length = 0;
    this->currentRecord.flags = 0;
    this->currentRecord.formID = 0;
    this->currentRecord.trackingData = 0;
    return 0;
  }
}
