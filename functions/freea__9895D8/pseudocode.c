void __cdecl _freea(void *Memory)
{
  if ( Memory ) /*0x9895de*/
  {
    if ( *((_DWORD *)Memory + 0xFFFFFFFE) == 0xDDDD ) /*0x9895e9*/
      free((char *)Memory + 0xFFFFFFF8); /*0x9895ec*/
  }
}
