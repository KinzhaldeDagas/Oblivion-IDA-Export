void __cdecl sub_A1D0F0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BDC); /*0xa1d0fa*/
  if ( off_B11BE0 ) /*0xa1d106*/
  {
    if ( *off_B11BE0 == 0x53 ) /*0xa1d10b*/
      FormHeapFree((unsigned int)off_B11BE0); /*0xa1d10e*/
  }
}
