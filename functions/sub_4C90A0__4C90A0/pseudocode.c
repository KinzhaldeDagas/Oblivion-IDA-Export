char __thiscall sub_4C90A0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  int v5[3]; // [esp+0h] [ebp-14h] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0xE ) /*0x4c90c1*/
    return 0; /*0x4c90c5*/
  TESFile_InitializeFormFromRecord(a1, this, v5[0], v5[1]); /*0x4c90cd*/
  do /*0x4c918e*/
  {
    ChunkType = TESFile_GetChunkType(a1); /*0x4c90d4*/
    if ( ChunkType > 0x4D414E48 ) /*0x4c90de*/
    {
      if ( ChunkType == 0x4D414E53 ) /*0x4c9155*/
      {
        TESFile_GetChunkData(a1, (char *)this + 0x2B, 1u); /*0x4c9187*/
        continue; /*0x4c9187*/
      }
      if ( ChunkType != 0x4E4F4349 ) /*0x4c915c*/
        continue; /*0x4c915c*/
    }
    else
    {
      if ( ChunkType == 0x4D414E48 ) /*0x4c90e0*/
      {
        TESFile_GetChunkData(a1, (char *)this + 0x28, 3u); /*0x4c914e*/
        continue; /*0x4c914e*/
      }
      if ( ChunkType == 0x44494445 ) /*0x4c90e7*/
      {
        _alloca_(v5[0]); /*0x4c9125*/
        TESFile_GetChunkData(a1, (char *)v5, 0x200u); /*0x4c9134*/
        this->vtbl->SetEditorID(this, (const char *)v5); /*0x4c9144*/
        continue; /*0x4c9146*/
      }
      if ( ChunkType != 0x4C444F4D ) /*0x4c90ee*/
      {
        if ( ChunkType == 0x4D414E47 ) /*0x4c90f5*/
        {
          v6 = 0; /*0x4c9101*/
          TESFile_GetChunkData4(a1, (char *)&v6); /*0x4c9108*/
          if ( v6 ) /*0x4c9112*/
            BSSimpleList_PushBack((_DWORD *)this + 0xB, v6); /*0x4c9118*/
        }
        continue; /*0x4c911d*/
      }
    }
    if ( this ) /*0x4c9160*/
      TESTexture_Load((int)(this + 1), a1); /*0x4c9167*/
    else
      TESTexture_Load(0, a1); /*0x4c9175*/
  }
  while ( TESFile_GetNextChunk(a1) ); /*0x4c918e*/
  TESForm_SetIsLinked(this, 0); /*0x4c919f*/
  return 1; /*0x4c91a9*/
}
