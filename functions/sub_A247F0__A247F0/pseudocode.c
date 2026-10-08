void __cdecl sub_A247F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135F0); /*0xa247fa*/
  if ( off_B135F4 ) /*0xa24806*/
  {
    if ( *off_B135F4 == 0x53 ) /*0xa2480b*/
      FormHeapFree((unsigned int)off_B135F4); /*0xa2480e*/
  }
}
