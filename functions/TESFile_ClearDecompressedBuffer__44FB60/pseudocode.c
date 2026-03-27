void *__thiscall TESFile_ClearDecompressedBuffer(Data *this)
{
  void *result; // eax

  result = this->currentRecordDCBuffer;
  if ( result )
  {
    result = (void *)MemoryHeap_Free_checked(this->currentRecordDCBuffer);
    this->currentRecordDCBuffer = 0;
    this->currentRecordDCLength = 0;
  }
  return result;
}
