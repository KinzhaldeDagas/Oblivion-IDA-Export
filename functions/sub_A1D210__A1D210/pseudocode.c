void __cdecl sub_A1D210()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11C0C); /*0xa1d21a*/
  if ( off_B11C10[0] ) /*0xa1d226*/
  {
    if ( *off_B11C10[0] == 0x53 ) /*0xa1d22b*/
      FormHeapFree((unsigned int)off_B11C10[0]); /*0xa1d22e*/
  }
}
