void __cdecl sub_A1D120()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BE4); /*0xa1d12a*/
  if ( off_B11BE8 ) /*0xa1d136*/
  {
    if ( *off_B11BE8 == 0x53 ) /*0xa1d13b*/
      FormHeapFree((unsigned int)off_B11BE8); /*0xa1d13e*/
  }
}
