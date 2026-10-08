void __cdecl sub_A1CBB0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AFC); /*0xa1cbba*/
  if ( off_B11B00[0] ) /*0xa1cbc6*/
  {
    if ( *off_B11B00[0] == 0x53 ) /*0xa1cbcb*/
      FormHeapFree((unsigned int)off_B11B00[0]); /*0xa1cbce*/
  }
}
