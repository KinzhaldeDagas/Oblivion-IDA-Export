void __cdecl sub_A18580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06530); /*0xa1858a*/
  if ( off_B06534 ) /*0xa18596*/
  {
    if ( *off_B06534 == 0x53 ) /*0xa1859b*/
      FormHeapFree((unsigned int)off_B06534); /*0xa1859e*/
  }
}
