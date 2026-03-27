char __thiscall TESFile_LoadRecordHeader(Data *this)
{
  BSFile *bsFile; // eax
  int (__cdecl *v4)(BSFile *, Data::FormInfo *, int, int *, int); // edx
  Data::FormInfo *p_currentRecord; // edi
  UInt32 type; // edi
  _DWORD *MasterByIndex; // eax
  UInt32 formID; // ecx
  int v9; // [esp+4h] [ebp-4h] BYREF

  bsFile = this->bsFile;
  if ( !bsFile )
    return 0;
  v4 = *((int (__cdecl **)(BSFile *, Data::FormInfo *, int, int *, int))bsFile + 1);
  p_currentRecord = &this->currentRecord;
  v9 = 1;
  if ( !v4(bsFile, &this->currentRecord, 0x14, &v9, 1) )
  {
    p_currentRecord->chunkInfo.type = 0;
    this->currentRecord.chunkInfo.length = 0;
    this->currentRecord.flags = 0;
    this->currentRecord.formID = 0;
    this->currentRecord.trackingData = 0;
    return 0;
  }
  type = p_currentRecord->chunkInfo.type;
  if ( type != dword_B05E20 && type != dword_B06138 )
  {
    MasterByIndex = 0;
    if ( this->masterFiles )
      MasterByIndex = TESFile_GetMasterByIndex(this, HIBYTE(this->currentRecord.formID) + 1);
    formID = this->currentRecord.formID;
    if ( MasterByIndex )
    {
      this->currentRecord.formID = formID & 0xFFFFFF | (*((unsigned __int8 *)MasterByIndex + 0x400) << 0x18);
      return 1;
    }
    if ( (this->currentRecord.formID & 0xFF000000) != 0xFF000000 && TESForm_IsFormIDBuiltin(formID & 0xFFFFFF) )
    {
      HIBYTE(this->currentRecord.formID) = 0;
      return 1;
    }
    this->currentRecord.formID = this->currentRecord.formID & 0xFFFFFF | (this->fileIndex << 0x18);
  }
  return 1;
}
