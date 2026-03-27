int __stdcall sub_889680(int a1, int a2, int a3)
{
  int result; // eax

  result = a1;
  if ( a1 )
    return MemoryHeap_Free_checked((void *)(a1 - *(unsigned __int8 *)(a1 - 1)));
  return result;
}
