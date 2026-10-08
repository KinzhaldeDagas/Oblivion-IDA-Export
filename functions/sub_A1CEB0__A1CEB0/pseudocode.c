void __cdecl sub_A1CEB0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B7C); /*0xa1ceba*/
  if ( off_B11B80[0] ) /*0xa1cec6*/
  {
    if ( *off_B11B80[0] == 0x53 ) /*0xa1cecb*/
      FormHeapFree((unsigned int)off_B11B80[0]); /*0xa1cece*/
  }
}
