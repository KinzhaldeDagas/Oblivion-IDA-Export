char __thiscall TESFile_NextRecord(Data *this)
{
  UInt32 type; // eax
  UInt32 currentRecordOffset; // eax
  BSFile *bsFile; // eax
  UInt32 v6; // eax
  DWORD LastError; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-4h] BYREF

  type = this->currentRecord.chunkInfo.type;
  if ( type == dword_B05E20 || type == dword_B06138 )
    this->currentRecordOffset += 0x14;
  else
    this->currentRecordOffset += this->currentRecord.chunkInfo.length + 0x14;
  currentRecordOffset = this->currentRecordOffset;
  if ( currentRecordOffset < this->fileSize )
  {
    (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)this->bsFile + 0xC))(
      this->bsFile,
      currentRecordOffset,
      BSFile_FilePos_Beg);
    bsFile = this->bsFile;
    if ( *((_DWORD *)bsFile + 0xC) == 0xFFFFFFFF )
      v6 = *((_DWORD *)bsFile + 0x52);
    else
      v6 = *((_DWORD *)bsFile + 0xC);
    this->currentRecordOffset = v6;
    if ( v6 == 0xFFFFFFFF )
    {
      LastError = GetLastError();
      FormatMessageA(0x1300, 0, LastError, 0x400, Buffer, 0, 0);
      PrintError("SetFilePointer() in NextForm failed with error:\n%s", *(const char **)Buffer);
      LocalFree(*(HLOCAL *)Buffer);
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
      if ( this->currentRecord.chunkInfo.type )
      {
        return 1;
      }
      else
      {
        PrintError(
          "Trying to load a bad form in TESFile::NextForm.\r\nFile = %s\r\nOffset = %d",
          this->name,
          this->currentRecordOffset);
        return 0;
      }
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
