void __cdecl sub_A1D180()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BF4); /*0xa1d18a*/
  if ( off_B11BF8 ) /*0xa1d196*/
  {
    if ( *off_B11BF8 == 0x53 ) /*0xa1d19b*/
      FormHeapFree((unsigned int)off_B11BF8); /*0xa1d19e*/
  }
}
