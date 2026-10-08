void __cdecl sub_A195C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E1C); /*0xa195ca*/
  if ( off_B06E20 ) /*0xa195d6*/
  {
    if ( *off_B06E20 == 0x53 ) /*0xa195db*/
      FormHeapFree((unsigned int)off_B06E20); /*0xa195de*/
  }
}
