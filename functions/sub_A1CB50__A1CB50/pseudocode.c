void __cdecl sub_A1CB50()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AEC); /*0xa1cb5a*/
  if ( off_B11AF0[0] ) /*0xa1cb66*/
  {
    if ( *off_B11AF0[0] == 0x53 ) /*0xa1cb6b*/
      FormHeapFree((unsigned int)off_B11AF0[0]); /*0xa1cb6e*/
  }
}
