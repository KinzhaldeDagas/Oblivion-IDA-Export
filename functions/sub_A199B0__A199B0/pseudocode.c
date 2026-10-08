void __cdecl sub_A199B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EC4); /*0xa199ba*/
  if ( off_B06EC8 ) /*0xa199c6*/
  {
    if ( *off_B06EC8 == 0x53 ) /*0xa199cb*/
      FormHeapFree((unsigned int)off_B06EC8); /*0xa199ce*/
  }
}
