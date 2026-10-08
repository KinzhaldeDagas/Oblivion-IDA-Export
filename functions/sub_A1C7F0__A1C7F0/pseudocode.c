void __cdecl sub_A1C7F0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A5C); /*0xa1c7fa*/
  if ( off_B11A60[0] ) /*0xa1c806*/
  {
    if ( *off_B11A60[0] == 0x53 ) /*0xa1c80b*/
      FormHeapFree((unsigned int)off_B11A60[0]); /*0xa1c80e*/
  }
}
