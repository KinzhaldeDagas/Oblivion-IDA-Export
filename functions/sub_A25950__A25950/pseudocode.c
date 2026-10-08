void __cdecl sub_A25950()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14EB0); /*0xa2595a*/
  if ( off_B14EB4[0] ) /*0xa25966*/
  {
    if ( *off_B14EB4[0] == 0x53 ) /*0xa2596b*/
      FormHeapFree((unsigned int)off_B14EB4[0]); /*0xa2596e*/
  }
}
