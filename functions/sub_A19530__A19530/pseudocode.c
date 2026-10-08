void __cdecl sub_A19530()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E04); /*0xa1953a*/
  if ( off_B06E08 ) /*0xa19546*/
  {
    if ( *off_B06E08 == 0x53 ) /*0xa1954b*/
      FormHeapFree((unsigned int)off_B06E08); /*0xa1954e*/
  }
}
