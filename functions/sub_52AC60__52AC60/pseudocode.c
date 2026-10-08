void __thiscall sub_52AC60(char *this, Data *a1)
{
  char v3; // dl
  char Dst[8]; // [esp+8h] [ebp-8h] BYREF

  if ( a1 ) /*0x52ac6d*/
  {
    if ( TESFile_GetChunkType(a1) == 0x58444E49 ) /*0x52ac7b*/
    {
      if ( a1->currentChunk.length == 8 ) /*0x52ac86*/
      {
        TESFile_GetChunkData(a1, Dst, 8u); /*0x52ac8f*/
        v3 = Dst[0]; /*0x52ac98*/
        *(this + 1) = Dst[1]; /*0x52ac9c*/
        *this = v3; /*0x52ac9f*/
      }
      else
      {
        TESFile_GetChunkData(a1, this, 2u); /*0x52acac*/
      }
    }
  }
}
