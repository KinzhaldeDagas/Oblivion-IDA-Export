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
  int v12[2]; // [esp+0h] [ebp-Ch] BYREF

  TESFile_ClearMasters(&this->errorState); /*0x451a72*/
  bsFile = this->bsFile; /*0x451a77*/
  if ( bsFile ) /*0x451a7e*/
  {
    (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_Beg); /*0x451abc*/
    this->currentRecordOffset = 0; /*0x451ac0*/
    this->currentChunkOffset = 0; /*0x451ac6*/
    this->fetchedChunkDataSize = 0; /*0x451acc*/
    this->currentRecord.chunkInfo.type = 0; /*0x451ad2*/
    this->currentRecord.chunkInfo.length = 0; /*0x451ad8*/
    this->currentRecord.flags = 0; /*0x451ade*/
    this->currentRecord.formID = 0; /*0x451ae4*/
    this->currentRecord.trackingData = 0; /*0x451aec*/
    TESFile_GetRecordType(this); /*0x451af2*/
  }
  else if ( !TESFile_OpenBSFile_(this, this->filepath, this->name, 0, 0) ) /*0x451a8f*/
  {
    return 2; /*0x451aaf*/
  }
  this->fileSize = (*(int (__thiscall **)(BSFile *))(*(_DWORD *)this->bsFile + 0x1C))(this->bsFile); /*0x451b01*/
  if ( this->currentRecord.chunkInfo.type != dword_B05E14 ) /*0x451b13*/
    return 0xB; /*0x451b15*/
  do /*0x451c61*/
  {
    type = this->currentChunk.type;             // Oblivion TESFile_Open TES4-header dispatch recognizes only HEDR, MAST, SNAM, master DATA, and CNAM. There are no ONAM/INTV/INCC/OFST or DELE branches in this loop; unhandled header chunks fall through to TESFile_GetNextChunk. /*0x451b30*/
    if ( type > 0x4D414E53 ) /*0x451b3b*/
    {                                           // Every HEDR occurrence bounded-reads into shared TESFile fields with maxSize=12. Zero is a no-op; short sizes overlay a prefix; >12 copies 11 bytes then zeroes byte 11. Later HEDR therefore replays over constructor/prior state; an exact final chunk replaces all 12 serialized bytes. Then nextFormID is clamped and its owner byte repacked from this->fileIndex at 0x451C36..0x451C59.
      if ( type == HEDR_ID ) /*0x451be1*/
      {
        TESFile_GetChunkData(this, (char *)&this->version, 0xCu);// TES4 HEDR bounded 12-byte field read. Reader semantics: size 0 does not touch destination; short sizes overlay prefix only; size >12 copies 11 bytes plus forced zero at byte 11. Call is reached for each HEDR in stream order. /*0x451c27*/
        if ( this->nextFormID <= 0x7FF )        // After each HEDR read, nextFormID is clamped to at least 0x800, then its high byte is repacked from fileIndex. Repeated HEDR chunks therefore replay over the same state, including this per-occurrence clamp. /*0x451c36*/
          this->nextFormID = 0x800; /*0x451c38*/
        this->nextFormID = this->nextFormID & 0xFFFFFF | (this->fileIndex << 0x18); /*0x451c59*/
      }
      else if ( type == MAST_ID ) /*0x451be8*/
      {
        v6 = (char *)FormHeapAlloc(this->currentChunk.length); /*0x451bf9*/
        TESFile_GetChunkData(this, v6, 0);      // MAST allocates currentChunk.length bytes, then TESFile_GetChunkData(maxSize=0) copies the full chunk without a terminator. The pointer is retained in masterList and later compared as a C string in TESFile_BuildLoadedMasterArray at 0x44FD08. /*0x451c00*/
        BSSimpleList_PushBack(&this->masterList.node.data, (int)v6); /*0x451c0c*/
        ++this->masterCount; /*0x451c11*/
      }
    }
    else
    {
      switch ( type ) /*0x451b41*/
      {
        case SNAM_ID: /*0x451b41*/
          _alloca_(v12[0]);                     // Each SNAM is read into stack storage with maxSize=0x200 then passed to BSStringT_Set(minLength=0) at 0x451BD0. Lengths 1..512 need an embedded NUL; 0 is a no-op; >512 copies 511 bytes and forces NUL. Unterminated <=512-byte input makes C-string assignment dependent on adjacent stack bytes. /*0x451bb3*/
          TESFile_GetChunkData(this, (char *)v12, 0x200u);// TES4 SNAM follows the same 0x200 bounded stack-buffer read and C-string setter at 0x451BD0. For 1..512 bytes, determinism requires an embedded NUL; zero size is a no-op; >512 copies 511 then writes terminator. /*0x451bc2*/
          BSStringT_Set(&this->description, (const char *)v12, 0); /*0x451bd0*/
          break;
        case DATA_ID: /*0x451b41*/
          v5 = (char *)FormHeapAlloc(8u); /*0x451b8e*/
          TESFile_GetChunkData(this, v5, 8u);   // Each DATA occurrence allocates 8 bytes, performs TESFile_GetChunkData(maxSize=8), and appends to the separate masterlistSizeInfo list. It is not validated or paired with an immediately previous MAST. Short reads retain unknown heap suffix bytes; >8 copies 7 and forces byte 7 to zero. /*0x451b95*/
          BSSimpleList_PushBack(&this->masterlistSizeInfo.node.data, (int)v5); /*0x451ba1*/
          break;
        case CNAM_ID: /*0x451b41*/
          _alloca_(v12[0]); /*0x451b5b*/
          TESFile_GetChunkData(this, (char *)v12, 0x200u);// Each CNAM is read into stack storage with maxSize=0x200 then passed to BSStringT_Set(minLength=0). Lengths 1..512 need an embedded NUL; 0 is a no-op; >512 copies 511 bytes and forces NUL. Unterminated <=512-byte input makes C-string assignment dependent on adjacent stack bytes. /*0x451b6a*/
          BSStringT_Set(&this->authorName, (const char *)v12, 0); /*0x451b78*/
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(this) );         // After the TES4-header loop, the reader advances through TES4 group records to the first form and rewinds. Header chunks not matched earlier (including ONAM/INTV/INCC/OFST/DELE) were skipped rather than assigned startup metadata. /*0x451c61*/
  flags = this->currentRecord.flags; /*0x451c6e*/
  if ( (flags & 1) != 0 ) /*0x451c76*/
    this->fileFlags |= kFlag_IsMaster; /*0x451c78*/
  else
    this->fileFlags &= ~1u; /*0x451c81*/
  if ( (flags & 0x10) != 0 ) /*0x451c8a*/
    this->fileFlags |= 0x10u; /*0x451c8c*/
  else
    this->fileFlags &= ~0x10u; /*0x451c95*/
  if ( (char)flags >= 0 ) /*0x451c9e*/
    this->fileFlags &= ~0x80u; /*0x451cac*/
  else
    this->fileFlags |= 0x80u; /*0x451ca0*/
  v8 = HIBYTE(this->fileFlags) << 0x18; /*0x451cbd*/
  HIBYTE(this->fileFlags) = 0; /*0x451cc0*/
  this->fileFlags |= v8; /*0x451cc7*/
  while ( 1 ) /*0x451cd0*/
  {
    if ( !this->currentRecord.chunkInfo.type ) /*0x451cd0*/
    {
      if ( !TESFile_LoadRecordHeader(this) ) /*0x451ce1*/
        break; /*0x451ce1*/
      this->currentChunk.type = 0; /*0x451ce5*/
      this->currentChunk.length = 0; /*0x451ceb*/
      TESFile_LoadChunkHeader(this); /*0x451cf1*/
    }
    if ( TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type) != 1 ) /*0x451d08*/
      break; /*0x451d08*/
    TESFile_NextRecordEx(this, 1); /*0x451d0d*/
  }
  RecordType = TESFile_GetRecordType(this); /*0x451d14*/
  v10 = RecordType == 2 || !RecordType; /*0x451d27*/
  v11 = this->bsFile; /*0x451d29*/
  this->headerRead = v10; /*0x451d2e*/
  if ( v11 ) /*0x451d34*/
    (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)v11 + 0xC))(v11, 0, BSFile_FilePos_Beg); /*0x451d42*/
  this->currentRecordOffset = 0; /*0x451d46*/
  this->currentChunkOffset = 0; /*0x451d4c*/
  this->fetchedChunkDataSize = 0; /*0x451d52*/
  this->currentRecord.chunkInfo.type = 0; /*0x451d58*/
  this->currentRecord.chunkInfo.length = 0; /*0x451d5e*/
  this->currentRecord.flags = 0; /*0x451d64*/
  this->currentRecord.formID = 0; /*0x451d6a*/
  this->currentRecord.trackingData = 0; /*0x451d72*/
  TESFile_GetRecordType(this); /*0x451d78*/
  return 0; /*0x451aa0*/
}
