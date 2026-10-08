void __cdecl sub_A1D060()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BC4); /*0xa1d06a*/
  if ( off_B11BC8[0] ) /*0xa1d076*/
  {
    if ( *off_B11BC8[0] == 0x53 ) /*0xa1d07b*/
      FormHeapFree((unsigned int)off_B11BC8[0]); /*0xa1d07e*/
  }
}
