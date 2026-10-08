void __cdecl sub_A1CF10()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B8C); /*0xa1cf1a*/
  if ( off_B11B90[0] ) /*0xa1cf26*/
  {
    if ( *off_B11B90[0] == 0x53 ) /*0xa1cf2b*/
      FormHeapFree((unsigned int)off_B11B90[0]); /*0xa1cf2e*/
  }
}
