void __cdecl FormHeapFree(unsigned int a1)
{
  if ( a1 )
    MemoryHeap_Free(&FormHeap, a1);
}
