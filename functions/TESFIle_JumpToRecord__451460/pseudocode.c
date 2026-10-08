char __thiscall TESFIle_JumpToRecord(Data *this, char *Buffer)
{
  char *v3; // eax
  bool v4; // cf
  BSFile *bsFile; // eax
  UInt32 v7; // eax
  DWORD LastError; // eax

  if ( this->currentRecordDCBuffer ) /*0x451463*/
  {
    MemoryHeap_Free_checked(this->currentRecordDCBuffer); /*0x451476*/
    this->currentRecordDCBuffer = 0; /*0x45147b*/
    this->currentRecordDCLength = 0; /*0x451481*/
  }
  v3 = Buffer;                                  // MEF v20 fix: validate TESFIle_JumpToRecord target before committing currentRecordOffset. Invalid targets clear record metadata without poisoning parser offset state. /*0x451487*/
  v4 = (unsigned int)Buffer < this->fileSize; /*0x45148b*/
  this->currentRecordOffset = (UInt32)Buffer;   // EngineIssues review: TESFIle_JumpToRecord commits requested target to currentRecordOffset before validating target < fileSize; failed jumps can poison parser state. /*0x451491*/
  if ( v4 ) /*0x451497*/
  {
    (*(void (__thiscall **)(BSFile *, char *, int))(*(_DWORD *)this->bsFile + 0xC))( /*0x4514d1*/
      this->bsFile,
      v3,
      BSFile_FilePos_Beg);
    bsFile = this->bsFile; /*0x4514d3*/
    if ( *((_DWORD *)bsFile + 0xC) == 0xFFFFFFFF ) /*0x4514dd*/
      v7 = *((_DWORD *)bsFile + 0x52); /*0x4514e3*/
    else
      v7 = *((_DWORD *)bsFile + 0xC); /*0x4514df*/
    this->currentRecordOffset = v7; /*0x4514ec*/
    if ( v7 == 0xFFFFFFFF ) /*0x4514f2*/
    {
      LastError = GetLastError(); /*0x451500*/
      FormatMessageA(0x1300, 0, LastError, 0x400, (LPSTR)&Buffer, 0, 0); /*0x45150d*/
      PrintError("SetFilePointer() in SetOffset failed with error:\n%s", Buffer); /*0x45151d*/
      LocalFree(Buffer); /*0x45152a*/
      return 0; /*0x451531*/
    }
    else
    {
      this->currentChunkOffset = 0; /*0x451539*/
      this->fetchedChunkDataSize = 0; /*0x45153f*/
      this->currentRecord.chunkInfo.type = 0; /*0x451545*/
      this->currentRecord.chunkInfo.length = 0; /*0x45154b*/
      this->currentRecord.flags = 0; /*0x451551*/
      this->currentRecord.formID = 0; /*0x451557*/
      this->currentRecord.trackingData = 0; /*0x45155f*/
      TESFile_GetRecordType(this); /*0x451565*/
      return 1; /*0x45156b*/
    }
  }
  else
  {
    this->currentRecord.chunkInfo.type = 0; /*0x45149b*/
    this->currentRecord.chunkInfo.length = 0; /*0x4514a1*/
    this->currentRecord.flags = 0; /*0x4514a7*/
    this->currentRecord.formID = 0; /*0x4514ad*/
    this->currentRecord.trackingData = 0; /*0x4514b3*/
    return 0; /*0x451499*/
  }
}
