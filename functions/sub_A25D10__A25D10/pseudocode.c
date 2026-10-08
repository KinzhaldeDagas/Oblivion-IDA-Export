void __cdecl sub_A25D10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14F50); /*0xa25d1a*/
  if ( off_B14F54 ) /*0xa25d26*/
  {
    if ( *off_B14F54 == 0x53 ) /*0xa25d2b*/
      FormHeapFree((unsigned int)off_B14F54); /*0xa25d2e*/
  }
}
