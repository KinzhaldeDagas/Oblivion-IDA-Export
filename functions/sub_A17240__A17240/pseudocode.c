void __cdecl sub_A17240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B03124); /*0xa1724a*/
  if ( off_B03128 ) /*0xa17256*/
  {
    if ( *off_B03128 == 0x53 ) /*0xa1725b*/
      FormHeapFree((unsigned int)off_B03128); /*0xa1725e*/
  }
}
