FreeEntry *__userpurge sub_452310@<eax>(char a1@<bpl>, unsigned __int16 a2)
{
  FreeEntry *result; // eax
  size_t v3; // [esp-8h] [ebp-Ch]
  int v4; // [esp+0h] [ebp-4h]

  HIDWORD(v3) = 1; /*0x452319*/
  LODWORD(v3) = a2 + 2; /*0x45231e*/
  result = j_MemoryHeap_Alloc(&FormHeap, a1, v3, v4); /*0x452324*/
  LOWORD(result->prev) = a2; /*0x452329*/
  return result; /*0x45232c*/
}
