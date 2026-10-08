void __cdecl sub_A1D090()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BCC); /*0xa1d09a*/
  if ( off_B11BD0[0] ) /*0xa1d0a6*/
  {
    if ( *off_B11BD0[0] == 0x53 ) /*0xa1d0ab*/
      FormHeapFree((unsigned int)off_B11BD0[0]); /*0xa1d0ae*/
  }
}
