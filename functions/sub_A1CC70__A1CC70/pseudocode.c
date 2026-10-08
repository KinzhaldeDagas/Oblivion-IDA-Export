void __cdecl sub_A1CC70()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B1C); /*0xa1cc7a*/
  if ( off_B11B20[0] ) /*0xa1cc86*/
  {
    if ( *off_B11B20[0] == 0x53 ) /*0xa1cc8b*/
      FormHeapFree((unsigned int)off_B11B20[0]); /*0xa1cc8e*/
  }
}
