void *__cdecl TESForm_PutCurrentChunkData4(int a1, int a2)
{
  int v2; // esi
  FreeEntry *v3; // eax
  char *v4; // eax
  void *result; // eax
  size_t v6; // [esp-4h] [ebp-8h]

  v2 = TESForm_Static_FormRecordSize;
  LODWORD(v6) = TESForm_Static_FormRecordSize + 0xA;
  TESForm_Static_FormRecordSize = v6;
  v3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, TESForm_Static_FormRecordBuffer, v6);
  TESForm_Static_FormRecordBuffer = v3;
  v4 = (char *)v3 + v2;
  *((_WORD *)v4 + 2) = 4;
  *(_DWORD *)v4 = a1;
  *((_WORD *)v4 + 2) = *((_WORD *)v4 + 2);
  result = TESForm_Static_FormRecordBuffer;
  *(_DWORD *)((char *)TESForm_Static_FormRecordBuffer + v2 + 6) = a2;
  return result;
}
