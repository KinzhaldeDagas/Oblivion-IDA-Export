char __thiscall sub_4AE700(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  TESFullName *v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v6[0], v6[1]); /*0x4ae71b*/
  TESForm_SetIsLinked(this, 0); /*0x4ae724*/
  ChunkType = TESFile_GetChunkType(a1); /*0x4ae72b*/
  if ( ChunkType ) /*0x4ae732*/
  {
    while ( 1 ) /*0x4ae738*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x4ae73d*/
      {
        switch ( ChunkType ) /*0x4ae7ab*/
        {
          case 0x4C4C5546: /*0x4ae7ab*/
            if ( this ) /*0x4ae7e5*/
              v4 = (TESFullName *)((char *)this + 0x24); /*0x4ae7e7*/
            else
              v4 = 0; /*0x4ae7ec*/
            TESFullname_Load(v4, a1); /*0x4ae7f0*/
            break; /*0x4ae7f0*/
          case 0x4D414E4D: /*0x4ae7ab*/
            TESFile_GetChunkData4(a1, (char *)this + 0x58); /*0x4ae7dc*/
            break;
          case 0x54444F4D: /*0x4ae7ab*/
            goto LABEL_12; /*0x4ae7b9*/
        }
      }
      else
      {
        switch ( ChunkType ) /*0x4ae746*/
        {
          case 0x4C444F4D: /*0x4ae746*/
          case 0x42444F4D: /*0x4ae746*/
LABEL_12:
            if ( this ) /*0x4ae7bd*/
              TESModel_Load((float *)this + 0xC, a1); /*0x4ae7c4*/
            else
              TESModel_Load(0, a1); /*0x4ae7cf*/
            break; /*0x4ae7c9*/
          case 0x44494445: /*0x4ae746*/
            _alloca_(v6[0]); /*0x4ae783*/
            TESFile_GetChunkData(a1, (char *)v6, 0x200u); /*0x4ae792*/
            this->vtbl->SetEditorID(this, (const char *)v6); /*0x4ae7a2*/
            break;
          case 0x49524353: /*0x4ae746*/
            v7 = 0; /*0x4ae760*/
            TESFile_GetChunkData4(a1, (char *)&v7); /*0x4ae767*/
            *((_DWORD *)this + 0x13) = v7; /*0x4ae76f*/
            TESScriptableForm_Link((int)(this + 3), this); /*0x4ae776*/
            break;
        }
      }
      if ( TESFile_GetNextChunk(a1) ) /*0x4ae7fa*/
      {
        ChunkType = TESFile_GetChunkType(a1); /*0x4ae805*/
        if ( ChunkType ) /*0x4ae80c*/
          continue; /*0x4ae80c*/
      }
      return 1; /*0x4ae80c*/
    }
  }
  return 1; /*0x4ae817*/
}
