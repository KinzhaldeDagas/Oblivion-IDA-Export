void __cdecl sub_A19860()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E8C); /*0xa1986a*/
  if ( off_B06E90 ) /*0xa19876*/
  {
    if ( *off_B06E90 == 0x53 ) /*0xa1987b*/
      FormHeapFree((unsigned int)off_B06E90); /*0xa1987e*/
  }
}
