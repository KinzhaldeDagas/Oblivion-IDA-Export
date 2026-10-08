void __cdecl _aligned_free(void *Memory)
{
  if ( Memory ) /*0x989299*/
    free(*(void **)(((unsigned int)Memory & 0xFFFFFFFC) - 4)); /*0x9892a1*/
}
