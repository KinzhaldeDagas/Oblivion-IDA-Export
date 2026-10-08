void __cdecl sub_A1D000()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BB4); /*0xa1d00a*/
  if ( off_B11BB8[0] ) /*0xa1d016*/
  {
    if ( *off_B11BB8[0] == 0x53 ) /*0xa1d01b*/
      FormHeapFree((unsigned int)off_B11BB8[0]); /*0xa1d01e*/
  }
}
