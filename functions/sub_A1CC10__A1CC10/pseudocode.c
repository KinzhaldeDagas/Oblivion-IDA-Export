void __cdecl sub_A1CC10()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B0C); /*0xa1cc1a*/
  if ( off_B11B10[0] ) /*0xa1cc26*/
  {
    if ( *off_B11B10[0] == 0x53 ) /*0xa1cc2b*/
      FormHeapFree((unsigned int)off_B11B10[0]); /*0xa1cc2e*/
  }
}
