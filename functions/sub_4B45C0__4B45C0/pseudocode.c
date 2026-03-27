char __thiscall sub_4B45C0(int this, Data *a2)
{
  signed int ChunkType; // eax
  TESFullName *v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x13 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
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
              v5 = (TESFullName *)(this + 0x24);
            else
              v5 = 0;
            TESFullname_Load(v5, a2);
            break;
          case 0x4E4F4349:
            if ( this )
              TESTexture_Load(this + 0x48, a2);
            else
              TESTexture_Load(0, a2);
            break;
          case 0x54444F4D:
LABEL_18:
            if ( this )
              TESModel_Load((float *)(this + 0x30), a2);
            else
              TESModel_Load(0, a2);
            break;
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D )
          goto LABEL_18;
        if ( ChunkType > 0x44494445 )
        {
          if ( ChunkType == 0x49524353 )
          {
            v7 = 0;
            TESFile_GetChunkData4(a2, (char *)&v7);
            *(_DWORD *)(this + 0x58) = v7;
            TESScriptableForm_Link(this + 0x54, (TESForm *)this);
          }
          goto LABEL_28;
        }
        switch ( ChunkType )
        {
          case 0x44494445:
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v6, 0x200u);
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6);
            break;
          case 0x41544144:
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x78), 1u);
            break;
          case 0x42444F4D:
            goto LABEL_18;
        }
      }
LABEL_28:
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
