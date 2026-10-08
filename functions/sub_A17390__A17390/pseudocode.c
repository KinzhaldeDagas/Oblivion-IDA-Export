void __cdecl sub_A17390()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0315C); /*0xa1739a*/
  if ( off_B03160[0] ) /*0xa173a6*/
  {
    if ( *off_B03160[0] == 0x53 ) /*0xa173ab*/
      FormHeapFree((unsigned int)off_B03160[0]); /*0xa173ae*/
  }
}
