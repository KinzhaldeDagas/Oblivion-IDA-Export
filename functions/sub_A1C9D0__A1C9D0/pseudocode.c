void __cdecl sub_A1C9D0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AAC); /*0xa1c9da*/
  if ( off_B11AB0[0] ) /*0xa1c9e6*/
  {
    if ( *off_B11AB0[0] == 0x53 ) /*0xa1c9eb*/
      FormHeapFree((unsigned int)off_B11AB0[0]); /*0xa1c9ee*/
  }
}
