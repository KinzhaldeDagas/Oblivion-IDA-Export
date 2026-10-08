void __cdecl sub_A25E00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15750); /*0xa25e0a*/
  if ( off_B15754[0] ) /*0xa25e16*/
  {
    if ( *off_B15754[0] == 0x53 ) /*0xa25e1b*/
      FormHeapFree((unsigned int)off_B15754[0]); /*0xa25e1e*/
  }
}
