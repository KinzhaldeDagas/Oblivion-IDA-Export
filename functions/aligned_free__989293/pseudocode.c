void __cdecl _aligned_free(void *Memory)
{
  if ( Memory )
    free(*(void **)(((unsigned int)Memory & 0xFFFFFFFC) - 4));
}
