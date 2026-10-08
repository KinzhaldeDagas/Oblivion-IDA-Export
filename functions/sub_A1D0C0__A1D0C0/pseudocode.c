void __cdecl sub_A1D0C0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BD4); /*0xa1d0ca*/
  if ( off_B11BD8[0] ) /*0xa1d0d6*/
  {
    if ( *off_B11BD8[0] == 0x53 ) /*0xa1d0db*/
      FormHeapFree((unsigned int)off_B11BD8[0]); /*0xa1d0de*/
  }
}
