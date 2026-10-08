char *__stdcall sub_889630(char *a1)
{
  char *result; // eax

  result = a1; /*0x889630*/
  if ( a1 ) /*0x889636*/
    return (char *)MemoryHeap_Free_checked(&a1[-(unsigned __int8)a1[0xFFFFFFFF]]); /*0x889647*/
  return result; /*0x88964c*/
}
