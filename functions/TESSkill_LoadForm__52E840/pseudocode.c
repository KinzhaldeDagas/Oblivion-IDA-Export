char __thiscall TESSkill_LoadForm(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a2) != 0xB )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v8[0], v8[1]);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( ChunkType <= 0x4D414E45 )
    {
      if ( ChunkType == 0x4D414E45 )
      {
        TESDescription_Load((int)this + 0x50, (int)a2);
        goto LABEL_27;
      }
      if ( ChunkType <= 0x44494445 )
      {
        switch ( ChunkType )
        {
          case 0x44494445:
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v8, 0x200u);
            this->vtbl->SetEditorID(this, (const char *)v8);
            break;
          case 0x41544144:
            TESForm_LoadGenericComponents(this, a2, (char *)this + 0x2C, 0x14u);
            break;
          case 0x43534544:
            if ( this )
              TESDescription_Load((int)(this + 1), (int)a2);
            else
              TESDescription_Load(0, (int)a2);
            break;
        }
        goto LABEL_27;
      }
      if ( ChunkType == 0x4D414E41 )
      {
        v5 = (int)this + 0x40;
LABEL_26:
        TESDescription_Load(v5, (int)a2);
      }
LABEL_27:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
    v6 = ChunkType - 0x4D414E4A;
    if ( v6 )
    {
      v7 = v6 - 3;
      if ( v7 )
      {
        if ( v7 == 0x10DF4FC )
        {
          if ( this )
            TESTexture_Load((int)this + 0x20, a2);
          else
            TESTexture_Load(0, a2);
        }
      }
      else
      {
        TESDescription_Load((int)this + 0x58, (int)a2);
      }
      goto LABEL_27;
    }
    v5 = (int)(this + 3);
    goto LABEL_26;
  }
  return 1;
}
