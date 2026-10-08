void __cdecl sub_A1D1B0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BFC); /*0xa1d1ba*/
  if ( off_B11C00 ) /*0xa1d1c6*/
  {
    if ( *off_B11C00 == 0x53 ) /*0xa1d1cb*/
      FormHeapFree((unsigned int)off_B11C00); /*0xa1d1ce*/
  }
}
