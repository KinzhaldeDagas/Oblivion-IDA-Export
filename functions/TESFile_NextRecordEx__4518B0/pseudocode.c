// NextForm?
char __thiscall TESFile_NextRecordEx(Data *this, char a2)
{
  char result; // al
  UInt32 type; // ecx

  if ( this->currentRecordDCBuffer )
  {
    MemoryHeap_Free_checked(this->currentRecordDCBuffer);
    this->currentRecordDCBuffer = 0;
    this->currentRecordDCLength = 0;
  }
  for ( result = TESFile_NextRecord(this); result; result = TESFile_NextRecord(this) )
  {
    if ( !a2 )
      break;
    type = this->currentRecord.chunkInfo.type;
    if ( type == dword_B05E20 )
      break;
    if ( type == dword_B06138 )
      break;
    if ( (this->currentRecord.flags & kFormFlags_Ignored) == 0 )
      break;
  }
  return result;
}
