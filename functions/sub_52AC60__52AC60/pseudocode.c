void __thiscall sub_52AC60(char *this, Data *a1)
{
  char v3; // dl
  char Dst[8]; // [esp+8h] [ebp-8h] BYREF

  if ( a1 )
  {
    if ( TESFile_GetChunkType(a1) == 0x58444E49 )
    {
      if ( a1->currentChunk.length == 8 )
      {
        TESFile_GetChunkData(a1, Dst, 8u);
        v3 = Dst[0];
        *(this + 1) = Dst[1];
        *this = v3;
      }
      else
      {
        TESFile_GetChunkData(a1, this, 2u);
      }
    }
  }
}
