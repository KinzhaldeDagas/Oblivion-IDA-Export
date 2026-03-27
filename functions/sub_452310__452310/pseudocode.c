FreeEntry *__userpurge sub_452310@<eax>(char a1@<bpl>, unsigned __int16 a2)
{
  FreeEntry *result; // eax
  size_t v3; // [esp-8h] [ebp-Ch]
  int v4; // [esp+0h] [ebp-4h]

  HIDWORD(v3) = 1;
  LODWORD(v3) = a2 + 2;
  result = j_MemoryHeap_Alloc(&FormHeap, a1, v3, v4);
  LOWORD(result->prev) = a2;
  return result;
}
