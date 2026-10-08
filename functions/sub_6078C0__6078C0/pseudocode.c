int __cdecl sub_6078C0(int a1)
{
  int result; // eax

  result = a1; /*0x6078c0*/
  if ( a1 ) /*0x6078c6*/
    return MemoryHeap_Free_checked((void *)(a1 - *(unsigned __int8 *)(a1 - 1))); /*0x6078d4*/
  return result; /*0x6078d9*/
}
