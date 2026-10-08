// Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
void __cdecl FormHeapFree(unsigned int a1)
{
  if ( a1 ) /*0x401f26*/
    MemoryHeap_Free(&FormHeap, a1); /*0x401f2e*/
}
