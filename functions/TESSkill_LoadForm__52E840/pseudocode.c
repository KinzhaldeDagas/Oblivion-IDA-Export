// Oblivion SKIL load. DATA has two event-use floats; the four ANAM/JNAM/ENAM/MNAM chunks are mastery descriptions, not extra use values or major/minor state.
bool __thiscall TESSkill_LoadForm(TESSkill *this, Data *file)
{
  signed int ChunkType; // eax
  char *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(file) != 0xB ) /*0x52e860*/
    return 0; /*0x52e864*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)this, v8[0], v8[1]); /*0x52e86c*/
  ChunkType = TESFile_GetChunkType(file); /*0x52e873*/
  if ( ChunkType ) /*0x52e87a*/
  {
    while ( ChunkType <= 0x4D414E45 ) /*0x52e885*/
    {
      if ( ChunkType == 0x4D414E45 ) /*0x52e88b*/
      {
        TESDescription_Load((int)this + 0x50, (int)file); /*0x52e90c*/
        goto LABEL_27; /*0x52e90c*/
      }
      if ( ChunkType <= 0x44494445 ) /*0x52e892*/
      {
        switch ( ChunkType ) /*0x52e894*/
        {
          case 0x44494445: /*0x52e894*/
            _alloca_(v8[0]); /*0x52e8d8*/
            TESFile_GetChunkData(file, (char *)v8, 0x200u); /*0x52e8e7*/
            (*(void (__thiscall **)(TESSkill *, int *))(*(_DWORD *)this + 0xD8))(this, v8); /*0x52e8f7*/
            break;
          case 0x41544144: /*0x52e894*/
            TESForm_LoadGenericComponents((TESForm *)this, file, (char *)this + 0x2C, 0x14u);// Load 0x14-byte SKIL DATA: actorValue, governingAttribute, specialization, useValue0, useValue1. /*0x52e8c8*/
            break;
          case 0x43534544: /*0x52e894*/
            if ( this ) /*0x52e8aa*/
              TESDescription_Load((int)this + 0x18, (int)file); /*0x52e8b1*/
            else
              TESDescription_Load(0, (int)file); /*0x52e8ba*/
            break;
        }
        goto LABEL_27; /*0x52e8b1*/
      }
      if ( ChunkType == 0x4D414E41 ) /*0x52e900*/
      {
        v5 = (char *)this + 0x40; /*0x52e902*/
LABEL_26:
        TESDescription_Load((int)v5, (int)file); /*0x52e946*/
      }
LABEL_27:
      if ( TESFile_GetNextChunk(file) ) /*0x52e952*/
      {
        ChunkType = TESFile_GetChunkType(file); /*0x52e95d*/
        if ( ChunkType ) /*0x52e964*/
          continue; /*0x52e964*/
      }
      return 1; /*0x52e964*/
    }
    v6 = ChunkType - 0x4D414E4A; /*0x52e90e*/
    if ( v6 ) /*0x52e913*/
    {
      v7 = v6 - 3; /*0x52e915*/
      if ( v7 ) /*0x52e918*/
      {
        if ( v7 == 0x10DF4FC ) /*0x52e91f*/
        {
          if ( this ) /*0x52e923*/
            TESTexture_Load((int)this + 0x20, file); /*0x52e92a*/
          else
            TESTexture_Load(0, file); /*0x52e935*/
        }
      }
      else
      {
        TESDescription_Load((int)this + 0x58, (int)file); /*0x52e941*/
      }
      goto LABEL_27; /*0x52e92f*/
    }
    v5 = (char *)this + 0x48; /*0x52e943*/
    goto LABEL_26; /*0x52e943*/
  }
  return 1; /*0x52e96f*/
}
