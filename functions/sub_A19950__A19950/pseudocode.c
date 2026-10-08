void __cdecl sub_A19950()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EB4); /*0xa1995a*/
  if ( off_B06EB8 ) /*0xa19966*/
  {
    if ( *off_B06EB8 == 0x53 ) /*0xa1996b*/
      FormHeapFree((unsigned int)off_B06EB8); /*0xa1996e*/
  }
}
