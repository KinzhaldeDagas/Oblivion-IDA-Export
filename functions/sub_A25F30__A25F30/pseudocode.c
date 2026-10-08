void __cdecl sub_A25F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15834); /*0xa25f3a*/
  if ( off_B15838[0] ) /*0xa25f46*/
  {
    if ( *off_B15838[0] == 0x53 ) /*0xa25f4b*/
      FormHeapFree((unsigned int)off_B15838[0]); /*0xa25f4e*/
  }
}
