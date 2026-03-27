void __thiscall sub_52E0D0(char *this, Data *a1)
{
  if ( a1 )
  {
    if ( TESFile_GetChunkType(a1) == 0x54445254 )
      TESFile_GetChunkData(a1, this, 0x10u);
  }
}
