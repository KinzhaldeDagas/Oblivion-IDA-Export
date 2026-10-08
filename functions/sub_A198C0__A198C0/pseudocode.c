void __cdecl sub_A198C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E9C); /*0xa198ca*/
  if ( off_B06EA0 ) /*0xa198d6*/
  {
    if ( *off_B06EA0 == 0x53 ) /*0xa198db*/
      FormHeapFree((unsigned int)off_B06EA0); /*0xa198de*/
  }
}
