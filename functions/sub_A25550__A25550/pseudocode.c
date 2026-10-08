void __cdecl sub_A25550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BA4); /*0xa2555a*/
  if ( off_B14BA8 ) /*0xa25566*/
  {
    if ( *off_B14BA8 == 0x53 ) /*0xa2556b*/
      FormHeapFree((unsigned int)off_B14BA8); /*0xa2556e*/
  }
}
