void __cdecl sub_A1CF70()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B9C); /*0xa1cf7a*/
  if ( off_B11BA0[0] ) /*0xa1cf86*/
  {
    if ( *off_B11BA0[0] == 0x53 ) /*0xa1cf8b*/
      FormHeapFree((unsigned int)off_B11BA0[0]); /*0xa1cf8e*/
  }
}
