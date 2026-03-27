// attributes: thunk
FreeEntry *__userpurge j_MemoryHeap_Alloc@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, size_t Size, int a4)
{
  return MemoryHeap_Allocate(this, a2, Size, a4);
}
