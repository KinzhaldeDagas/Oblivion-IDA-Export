void __cdecl sub_A19140()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D5C); /*0xa1914a*/
  if ( off_B06D60 ) /*0xa19156*/
  {
    if ( *off_B06D60 == 0x53 ) /*0xa1915b*/
      FormHeapFree((unsigned int)off_B06D60); /*0xa1915e*/
  }
}
