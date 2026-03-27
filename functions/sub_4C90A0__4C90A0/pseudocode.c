char __thiscall sub_4C90A0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  int v5[3]; // [esp+0h] [ebp-14h] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0xE )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v5[0], v5[1]);
  do
  {
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > 0x4D414E48 )
    {
      if ( ChunkType == 0x4D414E53 )
      {
        TESFile_GetChunkData(a1, (char *)this + 0x2B, 1u);
        continue;
      }
      if ( ChunkType != 0x4E4F4349 )
        continue;
    }
    else
    {
      if ( ChunkType == 0x4D414E48 )
      {
        TESFile_GetChunkData(a1, (char *)this + 0x28, 3u);
        continue;
      }
      if ( ChunkType == 0x44494445 )
      {
        _alloca_();
        TESFile_GetChunkData(a1, (char *)v5, 0x200u);
        this->vtbl->SetEditorID(this, (const char *)v5);
        continue;
      }
      if ( ChunkType != 0x4C444F4D )
      {
        if ( ChunkType == 0x4D414E47 )
        {
          v6 = 0;
          TESFile_GetChunkData4(a1, (char *)&v6);
          if ( v6 )
            BSSimpleList_PushBack((_DWORD *)this + 0xB, v6);
        }
        continue;
      }
    }
    if ( this )
      TESTexture_Load((int)(this + 1), a1);
    else
      TESTexture_Load(0, a1);
  }
  while ( TESFile_GetNextChunk(a1) );
  TESForm_SetIsLinked(this, 0);
  return 1;
}
