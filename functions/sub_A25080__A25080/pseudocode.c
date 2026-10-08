void __cdecl sub_A25080()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1484C); /*0xa2508a*/
  if ( off_B14850 ) /*0xa25096*/
  {
    if ( *off_B14850 == 0x53 ) /*0xa2509b*/
      FormHeapFree((unsigned int)off_B14850); /*0xa2509e*/
  }
}
