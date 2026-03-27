signed int __thiscall TESFile_Open(Data *this)
{
  BSFile *bsFile; // ecx
  signed int type; // eax
  char *v5; // edi
  char *v6; // edi
  UInt32 flags; // eax
  int v8; // eax
  char RecordType; // al
  bool v10; // al
  BSFile *v11; // ecx
  char v12[8]; // [esp+0h] [ebp-Ch] BYREF

  TESFile_ClearMasters(&this->errorState);
  bsFile = this->bsFile;
  if ( bsFile )
  {
    (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_Beg);
    this->currentRecordOffset = 0;
    this->currentChunkOffset = 0;
    this->fetchedChunkDataSize = 0;
    this->currentRecord.chunkInfo.type = 0;
    this->currentRecord.chunkInfo.length = 0;
    this->currentRecord.flags = 0;
    this->currentRecord.formID = 0;
    this->currentRecord.trackingData = 0;
    TESFile_GetRecordType(this);
  }
  else if ( !TESFile_OpenBSFile_(this, this->filepath, this->name, 0, 0) )
  {
    return 2;
  }
  this->fileSize = (*(int (__thiscall **)(BSFile *))(*(_DWORD *)this->bsFile + 0x1C))(this->bsFile);
  if ( this->currentRecord.chunkInfo.type != dword_B05E14 )
    return 0xB;
  do
  {
    type = this->currentChunk.type;
    if ( type > 0x4D414E53 )
    {
      if ( type == HEDR_ID )
      {
        TESFile_GetChunkData(this, (char *)&this->version, 0xCu);
        if ( this->nextFormID <= 0x7FF )
          this->nextFormID = 0x800;
        this->nextFormID = this->nextFormID & 0xFFFFFF | (this->fileIndex << 0x18);
      }
      else if ( type == MAST_ID )
      {
        v6 = (char *)FormHeapAlloc(this->currentChunk.length);
        TESFile_GetChunkData(this, v6, 0);
        BSSimpleList_PushBack(&this->masterList.node.data, (int)v6);
        ++this->masterCount;
      }
    }
    else
    {
      switch ( type )
      {
        case SNAM_ID:
          _alloca_();
          TESFile_GetChunkData(this, v12, 0x200u);
          BSStringT_Set(&this->description, v12, 0);
          break;
        case DATA_ID:
          v5 = (char *)FormHeapAlloc(8u);
          TESFile_GetChunkData(this, v5, 8u);
          BSSimpleList_PushBack(&this->masterlistSizeInfo.node.data, (int)v5);
          break;
        case CNAM_ID:
          _alloca_();
          TESFile_GetChunkData(this, v12, 0x200u);
          BSStringT_Set(&this->authorName, v12, 0);
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(this) );
  flags = this->currentRecord.flags;
  if ( (flags & 1) != 0 )
    this->fileFlags |= kFlag_IsMaster;
  else
    this->fileFlags &= ~1u;
  if ( (flags & 0x10) != 0 )
    this->fileFlags |= 0x10u;
  else
    this->fileFlags &= ~0x10u;
  if ( (char)flags >= 0 )
    this->fileFlags &= ~0x80u;
  else
    this->fileFlags |= 0x80u;
  v8 = HIBYTE(this->fileFlags) << 0x18;
  HIBYTE(this->fileFlags) = 0;
  this->fileFlags |= v8;
  while ( 1 )
  {
    if ( !this->currentRecord.chunkInfo.type )
    {
      if ( !TESFile_LoadRecordHeader(this) )
        break;
      this->currentChunk.type = 0;
      this->currentChunk.length = 0;
      TESFile_LoadChunkHeader(this);
    }
    if ( TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type) != 1 )
      break;
    TESFile_NextRecordEx(this, 1);
  }
  RecordType = TESFile_GetRecordType(this);
  v10 = RecordType == 2 || !RecordType;
  v11 = this->bsFile;
  this->headerRead = v10;
  if ( v11 )
    (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)v11 + 0xC))(v11, 0, BSFile_FilePos_Beg);
  this->currentRecordOffset = 0;
  this->currentChunkOffset = 0;
  this->fetchedChunkDataSize = 0;
  this->currentRecord.chunkInfo.type = 0;
  this->currentRecord.chunkInfo.length = 0;
  this->currentRecord.flags = 0;
  this->currentRecord.formID = 0;
  this->currentRecord.trackingData = 0;
  TESFile_GetRecordType(this);
  return 0;
}
