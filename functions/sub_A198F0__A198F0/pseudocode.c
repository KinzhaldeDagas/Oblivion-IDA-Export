void __cdecl sub_A198F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EA4); /*0xa198fa*/
  if ( off_B06EA8 ) /*0xa19906*/
  {
    if ( *off_B06EA8 == 0x53 ) /*0xa1990b*/
      FormHeapFree((unsigned int)off_B06EA8); /*0xa1990e*/
  }
}
