void __cdecl sub_A1D030()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BBC); /*0xa1d03a*/
  if ( off_B11BC0[0] ) /*0xa1d046*/
  {
    if ( *off_B11BC0[0] == 0x53 ) /*0xa1d04b*/
      FormHeapFree((unsigned int)off_B11BC0[0]); /*0xa1d04e*/
  }
}
