void __cdecl sub_A25F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B1582C); /*0xa25f0a*/
  if ( off_B15830 ) /*0xa25f16*/
  {
    if ( *off_B15830 == 0x53 ) /*0xa25f1b*/
      FormHeapFree((unsigned int)off_B15830); /*0xa25f1e*/
  }
}
