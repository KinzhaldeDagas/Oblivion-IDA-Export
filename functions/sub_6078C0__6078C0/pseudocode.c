int __cdecl sub_6078C0(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
    return MemoryHeap_Free_checked((void *)(a1 - *(unsigned __int8 *)(a1 - 1)));
  return result;
}
