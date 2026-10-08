void __cdecl sub_A236C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12608); /*0xa236ca*/
  if ( off_B1260C ) /*0xa236d6*/
  {
    if ( *off_B1260C == 0x53 ) /*0xa236db*/
      FormHeapFree((unsigned int)off_B1260C); /*0xa236de*/
  }
}
