char *__stdcall sub_889630(char *a1)
{
  char *result; // eax

  result = a1;
  if ( a1 )
    return (char *)MemoryHeap_Free_checked(&a1[-(unsigned __int8)a1[0xFFFFFFFF]]);
  return result;
}
