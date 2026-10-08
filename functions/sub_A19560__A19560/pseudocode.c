void __cdecl sub_A19560()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E0C); /*0xa1956a*/
  if ( off_B06E10 ) /*0xa19576*/
  {
    if ( *off_B06E10 == 0x53 ) /*0xa1957b*/
      FormHeapFree((unsigned int)off_B06E10); /*0xa1957e*/
  }
}
