int __stdcall sub_889680(int a1, int a2, int a3)
{
  int result; // eax

  result = a1; /*0x889680*/
  if ( a1 ) /*0x889686*/
    return MemoryHeap_Free_checked((void *)(a1 - *(unsigned __int8 *)(a1 - 1))); /*0x889694*/
  return result; /*0x889699*/
}
