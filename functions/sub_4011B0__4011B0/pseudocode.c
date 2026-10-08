// Checks whether an address lies in this pool's backing range: base at +0x40 through base + size at +0x110. Called by MemoryHeap_Free before dispatching to MemoryPool_Free.
BOOL __thiscall MemoryPool_ContainsAddress(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *(this + 0x10); /*0x4011b0*/
  return a2 >= v2 && a2 < v2 + *(this + 0x44); /*0x4011cc*/
}
