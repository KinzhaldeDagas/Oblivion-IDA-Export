void __cdecl sub_A25E40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15800); /*0xa25e4a*/
  if ( off_B15804[0] ) /*0xa25e56*/
  {
    if ( *off_B15804[0] == 0x53 ) /*0xa25e5b*/
      FormHeapFree((unsigned int)off_B15804[0]); /*0xa25e5e*/
  }
}
