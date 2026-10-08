void *__thiscall TESFile_ClearDecompressedBuffer(Data *this)
{
  void *result; // eax

  result = this->currentRecordDCBuffer; /*0x44fb63*/
  if ( result ) /*0x44fb6b*/
  {
    result = (void *)MemoryHeap_Free_checked(this->currentRecordDCBuffer); /*0x44fb73*/
    this->currentRecordDCBuffer = 0; /*0x44fb78*/
    this->currentRecordDCLength = 0; /*0x44fb82*/
  }
  return result; /*0x44fb8c*/
}
