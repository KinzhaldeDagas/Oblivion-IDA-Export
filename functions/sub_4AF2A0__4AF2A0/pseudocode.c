char __thiscall sub_4AF2A0(int this, Data *a2)
{
  signed int ChunkType; // eax
  float *v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int *v7; // [esp+Ch] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x1D )
    return 0;
  *(_DWORD *)(this + 0x3C) = 0;
  *(_DWORD *)(this + 0x40) = 0;
  *(_DWORD *)(this + 0x44) = 0;
  *(_DWORD *)(this + 0x48) = 0;
  *(_DWORD *)(this + 0x4C) = 0;
  *(_DWORD *)(this + 0x50) = 0;
  *(_DWORD *)(this + 0x54) = 0;
  *(_DWORD *)(this + 0x58) = 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( ChunkType <= 0x44494445 )
    {
      switch ( ChunkType )
      {
        case 0x44494445:
          _alloca_();
          v7 = v6;
          TESFile_GetChunkData(a2, (char *)v6, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7);
          break;
        case 0x41544144:
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x3C), 0x20u);
          break;
        case 0x42444F4D:
          goto LABEL_13;
      }
LABEL_17:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
    if ( ChunkType != 0x4C444F4D && ChunkType != 0x54444F4D )
      goto LABEL_17;
LABEL_13:
    if ( this )
      v5 = (float *)(this + 0x24);
    else
      v5 = 0;
    TESModel_Load(v5, a2);
    goto LABEL_17;
  }
  return 1;
}
