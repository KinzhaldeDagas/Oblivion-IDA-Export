void __cdecl sub_A1C6D0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A2C); /*0xa1c6da*/
  if ( off_B11A30 ) /*0xa1c6e6*/
  {
    if ( *off_B11A30 == 0x53 ) /*0xa1c6eb*/
      FormHeapFree((unsigned int)off_B11A30); /*0xa1c6ee*/
  }
}
