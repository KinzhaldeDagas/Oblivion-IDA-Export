int TESFile_ClearFormRecord()
{
  int result; // eax

  result = MemoryHeap_Free_checked(TESForm_Static_FormRecordBuffer);
  TESForm_Static_FormRecordBuffer = 0;
  return result;
}
