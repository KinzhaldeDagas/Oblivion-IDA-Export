int __stdcall MemoryHeap_Free_checked(void *a1)
{
  _DWORD *v1; // ecx
  int result; // eax

  result = (int)a1;
  if ( a1 )
    MemoryHeap_Free(v1, (unsigned int)a1);
  return result;
}
