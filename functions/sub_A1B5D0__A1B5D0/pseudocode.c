void __cdecl sub_A1B5D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08190); /*0xa1b5da*/
  if ( off_B08194[0] ) /*0xa1b5e6*/
  {
    if ( *off_B08194[0] == 0x53 ) /*0xa1b5eb*/
      FormHeapFree((unsigned int)off_B08194[0]); /*0xa1b5ee*/
  }
}
