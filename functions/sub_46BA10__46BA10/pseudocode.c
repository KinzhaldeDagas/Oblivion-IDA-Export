char *__cdecl sub_46BA10(int a1)
{
  int v1; // esi
  FreeEntry *v2; // eax
  char *v3; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]

  v1 = TESForm_Static_FormRecordSize;
  LODWORD(v5) = TESForm_Static_FormRecordSize + 6;
  TESForm_Static_FormRecordSize = v5;
  v2 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, TESForm_Static_FormRecordBuffer, v5);
  TESForm_Static_FormRecordBuffer = v2;
  v3 = (char *)v2 + v1;
  *((_WORD *)v3 + 2) = 0;
  *(_DWORD *)v3 = a1;
  *((_WORD *)v3 + 2) = *((_WORD *)v3 + 2);
  LODWORD(v6) = 0;
  return (char *)memcpy((char *)TESForm_Static_FormRecordBuffer + v1 + 6, 0, v6);
}
