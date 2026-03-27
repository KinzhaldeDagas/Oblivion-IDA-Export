char __thiscall sub_5193E0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  char *v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  void *v7; // [esp+Ch] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v6[0], v6[1]);
  do
  {
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > 0x4C4C5546 )
    {
      if ( ChunkType == 0x4E4F4349 )
      {
        if ( this )
          v4 = (char *)this + 0x24;
        else
          v4 = 0;
        TESTexture_Load((int)v4, a1);
      }
      else if ( ChunkType == 0x4F4C5053 )
      {
        v7 = 0;
        TESFile_GetChunkData4(a1, (char *)&v7);
        TESSpellList_AddFormToSpellList((char *)this + 0x38, v7);
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x4C4C5546:
          if ( this )
            TESFullname_Load((TESFullName *)this + 2, a1);
          else
            TESFullname_Load(0, a1);
          break;
        case 0x43534544:
          if ( this )
            TESDescription_Load((int)(this + 2), (int)a1);
          else
            TESDescription_Load(0, (int)a1);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v6, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v6);
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) );
  TESForm_SetIsLinked(this, 0);
  return 1;
}
