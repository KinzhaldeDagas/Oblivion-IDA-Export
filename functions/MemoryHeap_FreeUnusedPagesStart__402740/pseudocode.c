int __usercall MemoryHeap_FreeUnusedPagesStart@<eax>(DWORD a1@<edi>)
{
  unsigned int i; // esi

  NiEnterCriticalSection(
    (struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection,
    (int)"MemoryPool::FreeUnusedPagesForAllPools()");
  for ( i = 0; i < 0x81; ++i )
  {
    if ( g_HeapPoolsBySize[i] )
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)&aFreeunusedpage);
      sub_402640((_DWORD *)g_HeapPoolsBySize[i], a1);
      NiLeaveCriticalSection_0(&HeapCriticalSection);
    }
  }
  return NiLeaveCriticalSection_0(&HeapCriticalSection);
}
