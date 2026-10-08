void __cdecl sub_A19740()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E5C); /*0xa1974a*/
  if ( off_B06E60 ) /*0xa19756*/
  {
    if ( *off_B06E60 == 0x53 ) /*0xa1975b*/
      FormHeapFree((unsigned int)off_B06E60); /*0xa1975e*/
  }
}
