UInt32 __thiscall TESFile_GetChunkType(Data *this)
{
  if ( this->currentChunk.type || TESFile_LoadChunkHeader(this) )
    return this->currentChunk.type;
  else
    return 0;
}
