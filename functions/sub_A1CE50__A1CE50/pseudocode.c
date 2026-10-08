void __cdecl sub_A1CE50()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B6C); /*0xa1ce5a*/
  if ( off_B11B70[0] ) /*0xa1ce66*/
  {
    if ( *off_B11B70[0] == 0x53 ) /*0xa1ce6b*/
      FormHeapFree((unsigned int)off_B11B70[0]); /*0xa1ce6e*/
  }
}
