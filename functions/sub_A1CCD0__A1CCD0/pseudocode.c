void __cdecl sub_A1CCD0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B2C); /*0xa1ccda*/
  if ( off_B11B30[0] ) /*0xa1cce6*/
  {
    if ( *off_B11B30[0] == 0x53 ) /*0xa1cceb*/
      FormHeapFree((unsigned int)off_B11B30[0]); /*0xa1ccee*/
  }
}
