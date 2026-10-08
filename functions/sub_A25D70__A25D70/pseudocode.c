void __cdecl sub_A25D70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B15370); /*0xa25d7a*/
  if ( off_B15374[0] ) /*0xa25d86*/
  {
    if ( *off_B15374[0] == 0x53 ) /*0xa25d8b*/
      FormHeapFree((unsigned int)off_B15374[0]); /*0xa25d8e*/
  }
}
