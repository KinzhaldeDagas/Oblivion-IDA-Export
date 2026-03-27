char __fastcall sub_4AE0A0(TESForm *this, int a2, Data *a1)
{
  signed int ChunkType; // eax
  float *v5; // eax
  int v7[3]; // [esp+0h] [ebp-18h] BYREF
  char Dst[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v7[0], v7[1]);
  TESForm_SetIsLinked(this, 0);
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x49524353 )
      {
        switch ( ChunkType )
        {
          case 0x4C444F4D:
            goto LABEL_16;
          case 0x4C4C5546:
            if ( this == (TESForm *)0xC )
              TESFullname_Load(0, a1);
            else
              TESFullname_Load((TESFullName *)this + 3, a1);
            break;
          case 0x54444F4D:
LABEL_16:
            if ( this == (TESForm *)0xC )
              v5 = 0;
            else
              v5 = (float *)(this + 2);
            TESModel_Load(v5, a1);
            break;
        }
      }
      else if ( ChunkType == 0x49524353 )
      {
        v9 = 0;
        TESFile_GetChunkData4(a1, (char *)&v9);
        *((_DWORD *)this + 0x13) = v9;
        TESScriptableForm_Link((int)(this + 3), this != (TESForm *)0xC ? this : 0);
      }
      else
      {
        if ( ChunkType > 0x44494445 )
        {
          if ( ChunkType == 0x47494650 )
          {
            v9 = 0;
            TESFile_GetChunkData4(a1, (char *)&v9);
            *((_DWORD *)this + 0xFFFFFFFE) = v9;
          }
          goto LABEL_23;
        }
        switch ( ChunkType )
        {
          case 0x44494445:
            _alloca_();
            TESFile_GetChunkData(a1, (char *)v7, 0x200u);
            this->vtbl->SetEditorID(this, (const char *)v7);
            break;
          case 0x42444F4D:
            goto LABEL_16;
          case 0x43504650:
            TESFile_GetChunkData(a1, Dst, 4u);
            *((_DWORD *)this + 0xFFFFFFFF) = *(_DWORD *)Dst;
            break;
        }
      }
LABEL_23:
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
