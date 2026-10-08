void __cdecl sub_A1C910()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A8C); /*0xa1c91a*/
  if ( off_B11A90[0] ) /*0xa1c926*/
  {
    if ( *off_B11A90[0] == 0x53 ) /*0xa1c92b*/
      FormHeapFree((unsigned int)off_B11A90[0]); /*0xa1c92e*/
  }
}
