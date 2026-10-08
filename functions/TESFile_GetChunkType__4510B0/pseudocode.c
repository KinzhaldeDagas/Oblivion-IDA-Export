UInt32 __thiscall TESFile_GetChunkType(Data *this)
{
  if ( this->currentChunk.type || TESFile_LoadChunkHeader(this) ) /*0x4510bc*/
    return this->currentChunk.type; /*0x4510c9*/
  else
    return 0; /*0x4510c5*/
}
