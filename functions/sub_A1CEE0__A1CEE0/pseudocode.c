void __cdecl sub_A1CEE0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B84); /*0xa1ceea*/
  if ( off_B11B88[0] ) /*0xa1cef6*/
  {
    if ( *off_B11B88[0] == 0x53 ) /*0xa1cefb*/
      FormHeapFree((unsigned int)off_B11B88[0]); /*0xa1cefe*/
  }
}
