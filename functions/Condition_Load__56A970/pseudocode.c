void __thiscall Condition_Load(char *this, Data *a1)
{
  bool v3; // bl

  if ( a1 )
  {
    if ( TESFile_GetChunkType(a1) == 0x54445443 || TESFile_GetChunkType(a1) == 0x41445443 )
    {
      v3 = TESFile_GetChunkType(a1) == 0x54445443;
      TESFile_GetChunkData(a1, this, 0x18u);
      *(this + 0x14) = v3;
    }
  }
}
