void __cdecl sub_A25D40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F58); /*0xa25d4a*/
  if ( off_B14F5C[0] ) /*0xa25d56*/
  {
    if ( *off_B14F5C[0] == 0x53 ) /*0xa25d5b*/
      FormHeapFree((unsigned int)off_B14F5C[0]); /*0xa25d5e*/
  }
}
