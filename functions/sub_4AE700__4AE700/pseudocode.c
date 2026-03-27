char __thiscall sub_4AE700(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  TESFullName *v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v6[0], v6[1]);
  TESForm_SetIsLinked(this, 0);
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C444F4D )
      {
        switch ( ChunkType )
        {
          case 0x4C4C5546:
            if ( this )
              v4 = (TESFullName *)((char *)this + 0x24);
            else
              v4 = 0;
            TESFullname_Load(v4, a1);
            break;
          case 0x4D414E4D:
            TESFile_GetChunkData4(a1, (char *)this + 0x58);
            break;
          case 0x54444F4D:
            goto LABEL_12;
        }
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x4C444F4D:
          case 0x42444F4D:
LABEL_12:
            if ( this )
              TESModel_Load((float *)this + 0xC, a1);
            else
              TESModel_Load(0, a1);
            break;
          case 0x44494445:
            _alloca_();
            TESFile_GetChunkData(a1, (char *)v6, 0x200u);
            this->vtbl->SetEditorID(this, (const char *)v6);
            break;
          case 0x49524353:
            v7 = 0;
            TESFile_GetChunkData4(a1, (char *)&v7);
            *((_DWORD *)this + 0x13) = v7;
            TESScriptableForm_Link((int)(this + 3), this);
            break;
        }
      }
      if ( TESFile_GetNextChunk(a1) )
      {
        ChunkType = TESFile_GetChunkType(a1);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
  }
  return 1;
}
