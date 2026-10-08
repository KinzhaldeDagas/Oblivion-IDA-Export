void __cdecl sub_A26090()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B16198); /*0xa2609a*/
  if ( off_B1619C ) /*0xa260a6*/
  {
    if ( *off_B1619C == 0x53 ) /*0xa260ab*/
      FormHeapFree((unsigned int)off_B1619C); /*0xa260ae*/
  }
}
