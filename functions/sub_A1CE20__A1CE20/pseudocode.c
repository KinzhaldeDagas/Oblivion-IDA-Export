void __cdecl sub_A1CE20()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B64); /*0xa1ce2a*/
  if ( off_B11B68[0] ) /*0xa1ce36*/
  {
    if ( *off_B11B68[0] == 0x53 ) /*0xa1ce3b*/
      FormHeapFree((unsigned int)off_B11B68[0]); /*0xa1ce3e*/
  }
}
