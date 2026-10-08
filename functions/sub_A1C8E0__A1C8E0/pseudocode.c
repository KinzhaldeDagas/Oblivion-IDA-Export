void __cdecl sub_A1C8E0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A84); /*0xa1c8ea*/
  if ( off_B11A88[0] ) /*0xa1c8f6*/
  {
    if ( *off_B11A88[0] == 0x53 ) /*0xa1c8fb*/
      FormHeapFree((unsigned int)off_B11A88[0]); /*0xa1c8fe*/
  }
}
