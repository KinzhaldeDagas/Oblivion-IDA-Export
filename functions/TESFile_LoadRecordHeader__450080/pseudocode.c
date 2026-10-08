char __thiscall TESFile_LoadRecordHeader(Data *this)
{
  BSFile *bsFile; // eax
  int (__cdecl *v4)(BSFile *, Data::FormInfo *, int, int *, int); // edx
  Data::FormInfo *p_currentRecord; // edi
  UInt32 type; // edi
  _DWORD *MasterByIndex; // eax
  UInt32 formID; // ecx
  int v9; // [esp+4h] [ebp-4h] BYREF

  bsFile = this->bsFile; /*0x450084*/
  if ( !bsFile ) /*0x450089*/
    return 0; /*0x45008f*/
  v4 = *((int (__cdecl **)(BSFile *, Data::FormInfo *, int, int *, int))bsFile + 1); /*0x450090*/
  p_currentRecord = &this->currentRecord; /*0x45009d*/
  v9 = 1; /*0x4500a5*/
  if ( !v4(bsFile, &this->currentRecord, 0x14, &v9, 1) ) /*0x4500ad*/
  {
    p_currentRecord->chunkInfo.type = 0; /*0x4500b6*/
    this->currentRecord.chunkInfo.length = 0; /*0x4500b8*/
    this->currentRecord.flags = 0; /*0x4500bb*/
    this->currentRecord.formID = 0; /*0x4500be*/
    this->currentRecord.trackingData = 0; /*0x4500c1*/
    return 0; /*0x4500c9*/
  }
  type = p_currentRecord->chunkInfo.type; /*0x4500ca*/
  if ( type != dword_B05E20 && type != dword_B06138 ) /*0x4500de*/
  {
    MasterByIndex = 0; /*0x4500e4*/
    if ( this->masterFiles ) /*0x4500e6*/
      MasterByIndex = TESFile_GetMasterByIndex(this, HIBYTE(this->currentRecord.formID) + 1);// Oblivion record-header FormID resolution indexes masters with HIBYTE(FormID)+1. A duplicated MAST filename still has a distinct slot, but BuildLoadedMasterArray may put the same first-matched TESFile pointer in each duplicate slot. /*0x4500fb*/
    formID = this->currentRecord.formID; /*0x450100*/
    if ( MasterByIndex ) /*0x45011c*/
    {
      this->currentRecord.formID = formID & 0xFFFFFF | (*((unsigned __int8 *)MasterByIndex + 0x400) << 0x18); /*0x450131*/
      return 1; /*0x45013b*/
    }
    if ( (this->currentRecord.formID & 0xFF000000) != 0xFF000000 && TESForm_IsFormIDBuiltin(formID & 0xFFFFFF) ) /*0x450147*/
    {
      HIBYTE(this->currentRecord.formID) = 0; /*0x450154*/
      return 1; /*0x45015f*/
    }
    this->currentRecord.formID = this->currentRecord.formID & 0xFFFFFF | (this->fileIndex << 0x18); /*0x450178*/
  }
  return 1; /*0x45008d*/
}
