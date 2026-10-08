char __thiscall sub_4AC840(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  char *v5; // ecx
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x43 ) /*0x4ac85f*/
    return 0; /*0x4ac863*/
  this->vtbl->Unk_06(this); /*0x4ac86f*/
  TESFile_InitializeFormFromRecord(a2, this, v6[0], v6[1]); /*0x4ac874*/
  TESForm_SetIsLinked(this, 0); /*0x4ac87d*/
  ChunkType = TESFile_GetChunkType(a2); /*0x4ac884*/
  if ( ChunkType ) /*0x4ac88b*/
  {
    while ( 1 ) /*0x4ac891*/
    {
      if ( ChunkType > 0x44494445 ) /*0x4ac896*/
      {
        if ( ChunkType != 0x4E4F4349 ) /*0x4ac8f1*/
          goto LABEL_14; /*0x4ac8f1*/
        v5 = (char *)this + 0xF8; /*0x4ac8f3*/
      }
      else
      {
        if ( ChunkType == 0x44494445 ) /*0x4ac898*/
        {
          _alloca_(v6[0]); /*0x4ac8c9*/
          TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x4ac8d8*/
          this->vtbl->SetEditorID(this, (const char *)v6); /*0x4ac8e8*/
          goto LABEL_14; /*0x4ac8ea*/
        }
        if ( ChunkType != 0x324F4349 ) /*0x4ac89f*/
        {
          if ( ChunkType == 0x41544144 ) /*0x4ac8a6*/
            TESForm_LoadGenericComponents(this, a2, this + 1, 0xE0u); /*0x4ac8b4*/
          goto LABEL_14; /*0x4ac8b9*/
        }
        v5 = (char *)this + 0x104; /*0x4ac8bb*/
      }
      TESTexture_Load((int)v5, a2); /*0x4ac8fb*/
LABEL_14:
      if ( TESFile_GetNextChunk(a2) ) /*0x4ac905*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x4ac910*/
        if ( ChunkType ) /*0x4ac917*/
          continue; /*0x4ac917*/
      }
      return 1; /*0x4ac917*/
    }
  }
  return 1; /*0x4ac922*/
}
