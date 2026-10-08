void __cdecl sub_A1C970()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A9C); /*0xa1c97a*/
  if ( off_B11AA0[0] ) /*0xa1c986*/
  {
    if ( *off_B11AA0[0] == 0x53 ) /*0xa1c98b*/
      FormHeapFree((unsigned int)off_B11AA0[0]); /*0xa1c98e*/
  }
}
