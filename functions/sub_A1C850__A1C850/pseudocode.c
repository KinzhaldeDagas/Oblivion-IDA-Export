void __cdecl sub_A1C850()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11A6C); /*0xa1c85a*/
  if ( off_B11A70[0] ) /*0xa1c866*/
  {
    if ( *off_B11A70[0] == 0x53 ) /*0xa1c86b*/
      FormHeapFree((unsigned int)off_B11A70[0]); /*0xa1c86e*/
  }
}
