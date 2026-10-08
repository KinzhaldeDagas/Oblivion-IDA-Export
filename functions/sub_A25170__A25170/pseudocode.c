void __cdecl sub_A25170()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14874); /*0xa2517a*/
  if ( off_B14878 ) /*0xa25186*/
  {
    if ( *off_B14878 == 0x53 ) /*0xa2518b*/
      FormHeapFree((unsigned int)off_B14878); /*0xa2518e*/
  }
}
