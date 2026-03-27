char __thiscall sub_42B200(TESFullName *this, Data *a1)
{
  if ( !a1 )
    return 0;
  if ( TESFile_GetChunkType(a1) != 0x4B524D58 )
    return 0;
  if ( !TESFile_GetNextChunk(a1) )
    return 0;
  if ( TESFile_GetChunkType(a1) == 0x4D414E46 )
  {
    TESFile_GetChunkData(a1, (char *)this + 0xC, 1u);
    if ( !TESFile_GetNextChunk(a1) )
      return 0;
  }
  if ( TESFile_GetChunkType(a1) != 0x4C4C5546 )
    return 0;
  TESFullname_Load(this, a1);
  if ( !TESFile_GetNextChunk(a1) || TESFile_GetChunkType(a1) != 0x4D414E54 )
    return 0;
  TESFile_GetChunkData2(a1, (int)this + 0xE);
  return 1;
}
