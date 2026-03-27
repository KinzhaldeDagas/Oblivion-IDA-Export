void __thiscall sub_517A50(char *this, Data *a1)
{
  if ( a1 )
  {
    if ( TESFile_GetChunkType(a1) == 0x44534C53 )
      TESFile_GetChunkData(a1, this, 0x18u);
  }
}
