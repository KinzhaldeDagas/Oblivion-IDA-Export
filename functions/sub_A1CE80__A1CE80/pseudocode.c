void __cdecl sub_A1CE80()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B74); /*0xa1ce8a*/
  if ( off_B11B78[0] ) /*0xa1ce96*/
  {
    if ( *off_B11B78[0] == 0x53 ) /*0xa1ce9b*/
      FormHeapFree((unsigned int)off_B11B78[0]); /*0xa1ce9e*/
  }
}
