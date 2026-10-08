void __cdecl sub_A1CD30()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B3C); /*0xa1cd3a*/
  if ( off_B11B40[0] ) /*0xa1cd46*/
  {
    if ( *off_B11B40[0] == 0x53 ) /*0xa1cd4b*/
      FormHeapFree((unsigned int)off_B11B40[0]); /*0xa1cd4e*/
  }
}
