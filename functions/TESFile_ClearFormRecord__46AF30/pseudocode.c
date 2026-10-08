int TESFile_ClearFormRecord()
{
  int result; // eax

  result = MemoryHeap_Free_checked(*(void **)&word_B33C0E[3]); /*0x46af3b*/
  *(_DWORD *)&word_B33C0E[3] = 0; /*0x46af40*/
  return result; /*0x46af4a*/
}
