char __thiscall TESFile_NextRecord(Data *this)
{
  UInt32 type; // eax
  UInt32 currentRecordOffset; // eax
  BSFile *bsFile; // eax
  UInt32 v6; // eax
  DWORD LastError; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-4h] BYREF

  type = this->currentRecord.chunkInfo.type; /*0x451314*/
  if ( type == dword_B05E20 || type == dword_B06138 ) /*0x451328*/
    this->currentRecordOffset += 0x14; /*0x45133b*/
  else
    this->currentRecordOffset += this->currentRecord.chunkInfo.length + 0x14;// MEF v19 candidate/fix: byte-checked TESFile_NextRecord length advance. Validate currentRecordOffset + currentRecord.length + 0x14 against fileSize before resuming at 0x451342; invalid data goes to existing stop path 0x451350. /*0x451333*/
  currentRecordOffset = this->currentRecordOffset; /*0x451342*/
  if ( currentRecordOffset < this->fileSize ) /*0x45134e*/
  {
    (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)this->bsFile + 0xC))( /*0x451386*/
      this->bsFile,
      currentRecordOffset,
      BSFile_FilePos_Beg);
    bsFile = this->bsFile; /*0x451388*/
    if ( *((_DWORD *)bsFile + 0xC) == 0xFFFFFFFF ) /*0x451392*/
      v6 = *((_DWORD *)bsFile + 0x52); /*0x451398*/
    else
      v6 = *((_DWORD *)bsFile + 0xC); /*0x451394*/
    this->currentRecordOffset = v6; /*0x4513a1*/
    if ( v6 == 0xFFFFFFFF ) /*0x4513a7*/
    {
      LastError = GetLastError(); /*0x4513b7*/
      FormatMessageA(0x1300, 0, LastError, 0x400, Buffer, 0, 0); /*0x4513c5*/
      PrintError("SetFilePointer() in NextForm failed with error:\n%s", *(const char **)Buffer); /*0x4513d5*/
      LocalFree(*(HLOCAL *)Buffer); /*0x4513e2*/
      return 0; /*0x4513e8*/
    }
    else
    {
      this->currentChunkOffset = 0; /*0x4513ef*/
      this->fetchedChunkDataSize = 0; /*0x4513f9*/
      this->currentRecord.chunkInfo.type = 0; /*0x451403*/
      this->currentRecord.chunkInfo.length = 0; /*0x451409*/
      this->currentRecord.flags = 0; /*0x45140f*/
      this->currentRecord.formID = 0; /*0x451415*/
      this->currentRecord.trackingData = 0; /*0x45141d*/
      TESFile_GetRecordType(this); /*0x451423*/
      if ( this->currentRecord.chunkInfo.type ) /*0x451428*/
      {
        return 1; /*0x45144e*/
      }
      else
      {
        PrintError( /*0x451441*/
          "Trying to load a bad form in TESFile::NextForm.\r\nFile = %s\r\nOffset = %d",
          this->name,
          this->currentRecordOffset);
        return 0; /*0x451449*/
      }
    }
  }
  else
  {
    this->currentRecord.chunkInfo.type = 0; /*0x451352*/
    this->currentRecord.chunkInfo.length = 0; /*0x451358*/
    this->currentRecord.flags = 0; /*0x45135e*/
    this->currentRecord.formID = 0; /*0x451364*/
    this->currentRecord.trackingData = 0; /*0x45136a*/
    return 0; /*0x451350*/
  }
}
