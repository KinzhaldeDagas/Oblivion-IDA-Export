void __cdecl sub_A261B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161C8); /*0xa261ba*/
  if ( off_B161CC ) /*0xa261c6*/
  {
    if ( *off_B161CC == 0x53 ) /*0xa261cb*/
      FormHeapFree((unsigned int)off_B161CC); /*0xa261ce*/
  }
}
