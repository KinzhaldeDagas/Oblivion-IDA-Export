void __cdecl sub_A19AA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EEC); /*0xa19aaa*/
  if ( off_B06EF0 ) /*0xa19ab6*/
  {
    if ( *off_B06EF0 == 0x53 ) /*0xa19abb*/
      FormHeapFree((unsigned int)off_B06EF0); /*0xa19abe*/
  }
}
