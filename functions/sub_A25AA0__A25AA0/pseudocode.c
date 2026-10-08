void __cdecl sub_A25AA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14EE8); /*0xa25aaa*/
  if ( off_B14EEC ) /*0xa25ab6*/
  {
    if ( *off_B14EEC == 0x53 ) /*0xa25abb*/
      FormHeapFree((unsigned int)off_B14EEC); /*0xa25abe*/
  }
}
