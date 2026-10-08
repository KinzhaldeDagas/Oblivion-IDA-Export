void __cdecl sub_A17270()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B0312C); /*0xa1727a*/
  if ( off_B03130 ) /*0xa17286*/
  {
    if ( *off_B03130 == 0x53 ) /*0xa1728b*/
      FormHeapFree((unsigned int)off_B03130); /*0xa1728e*/
  }
}
