char __thiscall sub_4AC840(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // ecx
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x43 )
    return 0;
  this->vtbl->Unk_06(this);
  TESFile_InitializeFormFromRecord(a2, this, v6[0], v6[1]);
  TESForm_SetIsLinked(this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x44494445 )
      {
        if ( ChunkType != 0x4E4F4349 )
          goto LABEL_14;
        v5 = (int)this + 0xF8;
      }
      else
      {
        if ( ChunkType == 0x44494445 )
        {
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v6, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v6);
          goto LABEL_14;
        }
        if ( ChunkType != 0x324F4349 )
        {
          if ( ChunkType == 0x41544144 )
            TESForm_LoadGenericComponents(this, a2, this + 1, 0xE0u);
          goto LABEL_14;
        }
        v5 = (int)this + 0x104;
      }
      TESTexture_Load(v5, a2);
LABEL_14:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
  }
  return 1;
}
