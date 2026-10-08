unsigned int *sub_748530(unsigned int *a1, unsigned int a2, char *Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+10h] BYREF

  va_start(ArgList, Format);
  *a1 = a2; /*0x74853b*/
  if ( a2 < 0x20 && (unk_B40610[0xC * a2] || dword_B40614[3 * a2] != 0xFFFFFFFF) ) /*0x74855b*/
  {
    if ( Format ) /*0x748562*/
    {
      EnterCriticalSection(&unk_B40790); /*0x748569*/
      sub_748410(a1, __PAIR64__(ArgList, (unsigned int)Format)); /*0x74857b*/
      if ( *(_BYTE *)(0xC * *a1 + 0xB40610) ) /*0x748585*/
      {
        if ( unk_B40608 ) /*0x74858f*/
          unk_B40608(*a1, MEMORY[0xB40408]); /*0x74859f*/
      }
      LeaveCriticalSection(&unk_B40790); /*0x7485a9*/
    }
  }
  return a1; /*0x7485b1*/
}
