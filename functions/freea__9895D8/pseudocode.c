void __cdecl _freea(void *Memory)
{
  if ( Memory )
  {
    if ( *((_DWORD *)Memory + 0xFFFFFFFE) == 0xDDDD )
      free((char *)Memory + 0xFFFFFFF8);
  }
}
