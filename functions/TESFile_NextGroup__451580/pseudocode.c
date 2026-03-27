char __thiscall TESFile::NextGroup(Data *this)
{
  char result; // al

  result = 0;
  if ( this->currentRecord.chunkInfo.type == dword_B05E20 )
  {
    this->currentRecord.chunkInfo.type = 0;
    this->currentRecord.chunkInfo.length -= 0x14;
    return TESFile_NextRecord(this);
  }
  return result;
}
