// NextForm?
char __thiscall TESFile_NextRecordEx(Data *this, char a2)
{
  char result; // al
  UInt32 type; // ecx

  if ( this->currentRecordDCBuffer ) /*0x4518b3*/
  {
    MemoryHeap_Free_checked(this->currentRecordDCBuffer); /*0x4518c3*/
    this->currentRecordDCBuffer = 0; /*0x4518c8*/
    this->currentRecordDCLength = 0; /*0x4518d2*/
  }
  for ( result = TESFile_NextRecord(this); result; result = TESFile_NextRecord(this) ) /*0x4518e5*/
  {
    if ( !a2 ) /*0x4518ec*/
      break; /*0x4518ec*/
    type = this->currentRecord.chunkInfo.type; /*0x4518ee*/
    if ( type == dword_B05E20 ) /*0x4518fa*/
      break; /*0x4518fa*/
    if ( type == dword_B06138 ) /*0x451902*/
      break; /*0x451902*/
    if ( (this->currentRecord.flags & kFormFlags_Ignored) == 0 ) /*0x45190e*/
      break; /*0x45190e*/
  }
  return result; /*0x45191b*/
}
