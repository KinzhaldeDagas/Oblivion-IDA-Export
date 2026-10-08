void __cdecl sub_A1C7C0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A54); /*0xa1c7ca*/
  if ( off_B11A58 ) /*0xa1c7d6*/
  {
    if ( *off_B11A58 == 0x53 ) /*0xa1c7db*/
      FormHeapFree((unsigned int)off_B11A58); /*0xa1c7de*/
  }
}
