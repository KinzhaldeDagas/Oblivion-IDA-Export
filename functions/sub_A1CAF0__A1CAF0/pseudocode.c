void __cdecl sub_A1CAF0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11ADC); /*0xa1cafa*/
  if ( off_B11AE0[0] ) /*0xa1cb06*/
  {
    if ( *off_B11AE0[0] == 0x53 ) /*0xa1cb0b*/
      FormHeapFree((unsigned int)off_B11AE0[0]); /*0xa1cb0e*/
  }
}
