void __cdecl sub_A19830()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E84); /*0xa1983a*/
  if ( off_B06E88 ) /*0xa19846*/
  {
    if ( *off_B06E88 == 0x53 ) /*0xa1984b*/
      FormHeapFree((unsigned int)off_B06E88); /*0xa1984e*/
  }
}
