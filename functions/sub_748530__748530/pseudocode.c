unsigned int *sub_748530(unsigned int *a1, unsigned int a2, char *Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+10h] BYREF

  va_start(ArgList, Format);
  *a1 = a2;
  if ( a2 < 0x20 && (byte_B40610[0xC * a2] || dword_B40614[3 * a2] != 0xFFFFFFFF) )
  {
    if ( Format )
    {
      EnterCriticalSection(&stru_B40790);
      sub_748410(a1, __PAIR64__(ArgList, (unsigned int)Format));
      if ( *(_BYTE *)(0xC * *a1 + 0xB40610) )
      {
        if ( dword_B40608 )
          dword_B40608(*a1, DstBuf);
      }
      LeaveCriticalSection(&stru_B40790);
    }
  }
  return a1;
}
