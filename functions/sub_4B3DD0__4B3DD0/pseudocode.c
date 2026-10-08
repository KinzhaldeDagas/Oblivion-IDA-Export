char __thiscall sub_4B3DD0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  TESFullName *v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v6[0], v6[1]); /*0x4b3deb*/
  TESForm_SetIsLinked(this, 0); /*0x4b3df5*/
  ChunkType = TESFile_GetChunkType(a1); /*0x4b3dfc*/
  if ( ChunkType ) /*0x4b3e03*/
  {
    while ( 1 ) /*0x4b3e10*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x4b3e15*/
      {
        switch ( ChunkType ) /*0x4b3e84*/
        {
          case 0x4C4C5546: /*0x4b3e84*/
            if ( this ) /*0x4b3ec7*/
              v4 = (TESFullName *)((char *)this + 0x24); /*0x4b3ec9*/
            else
              v4 = 0; /*0x4b3ece*/
            TESFullname_Load(v4, a1); /*0x4b3ed2*/
            break; /*0x4b3ed2*/
          case 0x4D414E53: /*0x4b3e84*/
            v7 = 0; /*0x4b3eb5*/
            TESFile_GetChunkData4(a1, (char *)&v7); /*0x4b3eb8*/
            *((_DWORD *)this + 0x15) = v7; /*0x4b3ec0*/
            break;
          case 0x54444F4D: /*0x4b3e84*/
            goto LABEL_12; /*0x4b3e92*/
        }
      }
      else
      {
        switch ( ChunkType ) /*0x4b3e1e*/
        {
          case 0x4C444F4D: /*0x4b3e1e*/
          case 0x42444F4D: /*0x4b3e1e*/
LABEL_12:
            if ( this ) /*0x4b3e96*/
              TESModel_Load((float *)this + 0xC, a1); /*0x4b3e9d*/
            else
              TESModel_Load(0, a1); /*0x4b3ea8*/
            break; /*0x4b3ea2*/
          case 0x44494445: /*0x4b3e1e*/
            _alloca_(v6[0]); /*0x4b3e5a*/
            TESFile_GetChunkData(a1, (char *)v6, 0x200u); /*0x4b3e69*/
            this->vtbl->SetEditorID(this, (const char *)v6); /*0x4b3e79*/
            break;
          case 0x49524353: /*0x4b3e1e*/
            v7 = 0; /*0x4b3e38*/
            TESFile_GetChunkData4(a1, (char *)&v7); /*0x4b3e3b*/
            *((_DWORD *)this + 0x13) = v7; /*0x4b3e43*/
            TESScriptableForm_Link((int)(this + 3), this); /*0x4b3e4a*/
            break;
        }
      }
      if ( TESFile_GetNextChunk(a1) ) /*0x4b3edc*/
      {
        ChunkType = TESFile_GetChunkType(a1); /*0x4b3ee7*/
        if ( ChunkType ) /*0x4b3eee*/
          continue; /*0x4b3eee*/
      }
      return 1; /*0x4b3eee*/
    }
  }
  return 1; /*0x4b3ef9*/
}
