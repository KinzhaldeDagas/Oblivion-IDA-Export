void __cdecl sub_A25730()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CD4); /*0xa2573a*/
  if ( off_B14CD8 ) /*0xa25746*/
  {
    if ( *off_B14CD8 == 0x53 ) /*0xa2574b*/
      FormHeapFree((unsigned int)off_B14CD8); /*0xa2574e*/
  }
}
