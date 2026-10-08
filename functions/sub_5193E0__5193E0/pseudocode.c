char __thiscall sub_5193E0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  char *v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  void *v7; // [esp+Ch] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v6[0], v6[1]); /*0x5193fb*/
  do /*0x5194c6*/
  {
    ChunkType = TESFile_GetChunkType(a1); /*0x519402*/
    if ( ChunkType > 0x4C4C5546 ) /*0x51940c*/
    {
      if ( ChunkType == 0x4E4F4349 ) /*0x519486*/
      {
        if ( this ) /*0x5194b1*/
          v4 = (char *)this + 0x24; /*0x5194b3*/
        else
          v4 = 0; /*0x5194b8*/
        TESTexture_Load((int)v4, a1); /*0x5194bc*/
      }
      else if ( ChunkType == 0x4F4C5053 ) /*0x51948d*/
      {
        v7 = 0; /*0x519495*/
        TESFile_GetChunkData4(a1, (char *)&v7); /*0x51949c*/
        TESSpellList_AddFormToSpellList((char *)this + 0x38, v7); /*0x5194a8*/
      }
    }
    else
    {
      switch ( ChunkType ) /*0x51940e*/
      {
        case 0x4C4C5546: /*0x51940e*/
          if ( this ) /*0x519468*/
            TESFullname_Load((TESFullName *)this + 2, a1); /*0x51946f*/
          else
            TESFullname_Load(0, a1); /*0x51947a*/
          break;
        case 0x43534544: /*0x51940e*/
          if ( this ) /*0x51944d*/
            TESDescription_Load((int)(this + 2), (int)a1); /*0x519454*/
          else
            TESDescription_Load(0, (int)a1); /*0x51945f*/
          break;
        case 0x44494445: /*0x51940e*/
          _alloca_(v6[0]); /*0x519428*/
          TESFile_GetChunkData(a1, (char *)v6, 0x200u); /*0x519437*/
          this->vtbl->SetEditorID(this, (const char *)v6); /*0x519447*/
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) ); /*0x5194c6*/
  TESForm_SetIsLinked(this, 0); /*0x5194d7*/
  return 1; /*0x5194e1*/
}
