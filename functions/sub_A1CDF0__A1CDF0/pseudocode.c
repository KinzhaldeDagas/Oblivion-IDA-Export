void __cdecl sub_A1CDF0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B5C); /*0xa1cdfa*/
  if ( off_B11B60[0] ) /*0xa1ce06*/
  {
    if ( *off_B11B60[0] == 0x53 ) /*0xa1ce0b*/
      FormHeapFree((unsigned int)off_B11B60[0]); /*0xa1ce0e*/
  }
}
