void __cdecl sub_A1A7F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B0760C); /*0xa1a7fa*/
  if ( off_B07610 ) /*0xa1a806*/
  {
    if ( *off_B07610 == 0x53 ) /*0xa1a80b*/
      FormHeapFree((unsigned int)off_B07610); /*0xa1a80e*/
  }
}
