void __cdecl sub_A1D150()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BEC); /*0xa1d15a*/
  if ( off_B11BF0 ) /*0xa1d166*/
  {
    if ( *off_B11BF0 == 0x53 ) /*0xa1d16b*/
      FormHeapFree((unsigned int)off_B11BF0); /*0xa1d16e*/
  }
}
