int __usercall MemoryHeap_FreeUnusedPagesStart@<eax>(DWORD a1@<edi>)
{
  unsigned int i; // esi

  NiEnterCriticalSection( /*0x40274b*/
    (struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection,
    (int)"MemoryPool::FreeUnusedPagesForAllPools()");
  for ( i = 0; i < 0x81; ++i ) /*0x402750*/
  {
    if ( MEMORY[0xB33080][i] ) /*0x402752*/
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)&aFreeunusedpage); /*0x402765*/
      MemoryPool_FreeUnusedPages((_DWORD *)MEMORY[0xB33080][i], a1); /*0x402770*/
      NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x40277a*/
    }
  }
  return NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x40278f*/
}
