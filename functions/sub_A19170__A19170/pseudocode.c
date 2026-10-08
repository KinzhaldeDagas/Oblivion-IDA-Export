void __cdecl sub_A19170()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D64); /*0xa1917a*/
  if ( off_B06D68 ) /*0xa19186*/
  {
    if ( *off_B06D68 == 0x53 ) /*0xa1918b*/
      FormHeapFree((unsigned int)off_B06D68); /*0xa1918e*/
  }
}
