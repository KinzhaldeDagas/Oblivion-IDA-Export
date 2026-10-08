void __cdecl sub_A190E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D4C); /*0xa190ea*/
  if ( off_B06D50 ) /*0xa190f6*/
  {
    if ( *off_B06D50 == 0x53 ) /*0xa190fb*/
      FormHeapFree((unsigned int)off_B06D50); /*0xa190fe*/
  }
}
