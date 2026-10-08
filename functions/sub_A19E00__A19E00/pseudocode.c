void __cdecl sub_A19E00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06F7C); /*0xa19e0a*/
  if ( off_B06F80 ) /*0xa19e16*/
  {
    if ( *off_B06F80 == 0x53 ) /*0xa19e1b*/
      FormHeapFree((unsigned int)off_B06F80); /*0xa19e1e*/
  }
}
