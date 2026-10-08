void __cdecl sub_A25230()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14894); /*0xa2523a*/
  if ( off_B14898 ) /*0xa25246*/
  {
    if ( *off_B14898 == 0x53 ) /*0xa2524b*/
      FormHeapFree((unsigned int)off_B14898); /*0xa2524e*/
  }
}
