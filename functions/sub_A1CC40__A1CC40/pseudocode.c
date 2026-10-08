void __cdecl sub_A1CC40()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B14); /*0xa1cc4a*/
  if ( off_B11B18[0] ) /*0xa1cc56*/
  {
    if ( *off_B11B18[0] == 0x53 ) /*0xa1cc5b*/
      FormHeapFree((unsigned int)off_B11B18[0]); /*0xa1cc5e*/
  }
}
