void __cdecl sub_A1D1E0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11C04); /*0xa1d1ea*/
  if ( off_B11C08 ) /*0xa1d1f6*/
  {
    if ( *off_B11C08 == 0x53 ) /*0xa1d1fb*/
      FormHeapFree((unsigned int)off_B11C08); /*0xa1d1fe*/
  }
}
