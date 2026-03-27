char __thiscall sub_4B9B30(int this, Data *a1)
{
  signed int ChunkType; // eax
  int v5[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x1C )
    return 0;
  TESFile_InitializeFormFromRecord(a1, (TESForm *)this, v5[0], v5[1]);
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4C444F4D )
      {
        if ( ChunkType == 0x4C544D44 )
        {
          sub_4B3460((char *)this, a1);
        }
        else if ( ChunkType == 0x54444F4D )
        {
          goto LABEL_11;
        }
      }
      else
      {
        if ( ChunkType == 0x4C444F4D || ChunkType == 0x42444F4D )
        {
LABEL_11:
          if ( this )
            TESModel_Load((float *)(this + 0x24), a1);
          else
            TESModel_Load(0, a1);
          goto LABEL_15;
        }
        if ( ChunkType == 0x44494445 )
        {
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v5, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v5);
        }
      }
LABEL_15:
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
