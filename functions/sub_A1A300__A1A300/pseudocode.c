void __cdecl sub_A1A300()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07070); /*0xa1a30a*/
  if ( off_B07074 ) /*0xa1a316*/
  {
    if ( *off_B07074 == 0x53 ) /*0xa1a31b*/
      FormHeapFree((unsigned int)off_B07074); /*0xa1a31e*/
  }
}
