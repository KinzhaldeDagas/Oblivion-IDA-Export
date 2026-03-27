char __thiscall sub_51FEA0(int this, Data *a2)
{
  signed int ChunkType; // eax
  TESFullName *v5; // eax
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a2) != 7 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
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
              v5 = (TESFullName *)(this + 0x18);
            else
              v5 = 0;
            TESFullname_Load(v5, a2);
            break;
          case 0x4E4F4349:
            if ( this )
              TESTexture_Load(this + 0x3C, a2);
            else
              TESTexture_Load(0, a2);
            break;
          case 0x54444F4D:
LABEL_14:
            if ( this )
              TESModel_Load((float *)(this + 0x24), a2);
            else
              TESModel_Load(0, a2);
            break;
        }
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x4C444F4D:
            goto LABEL_14;
          case 0x41544144:
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x48), 1u);
            break;
          case 0x42444F4D:
            goto LABEL_14;
          case 0x44494445:
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v6, 0x200u);
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6);
            break;
        }
      }
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
