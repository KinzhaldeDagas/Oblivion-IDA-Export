// Destroys every registered small MemoryPool; invoked during FormHeap shutdown.
void MemoryPool_DestroyAll()
{
  unsigned int i; // esi
  unsigned int v1; // edi

  for ( i = 0; i < 0x81; ++i ) /*0x4027a2*/
  {
    v1 = MEMORY[0xB33080][i]; /*0x4027a4*/
    if ( v1 ) /*0x4027ac*/
    {
      MemoryPool_Destroy((_RTL_CRITICAL_SECTION_0 *)MEMORY[0xB33080][i]); /*0x4027b0*/
      FormHeapFree(v1); /*0x4027b6*/
    }
  }
}
