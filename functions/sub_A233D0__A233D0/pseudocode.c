void __cdecl sub_A233D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B120D4); /*0xa233da*/
  if ( off_B120D8 ) /*0xa233e6*/
  {
    if ( *off_B120D8 == 0x53 ) /*0xa233eb*/
      FormHeapFree((unsigned int)off_B120D8); /*0xa233ee*/
  }
}
