void __cdecl sub_A1C940()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A94); /*0xa1c94a*/
  if ( off_B11A98[0] ) /*0xa1c956*/
  {
    if ( *off_B11A98[0] == 0x53 ) /*0xa1c95b*/
      FormHeapFree((unsigned int)off_B11A98[0]); /*0xa1c95e*/
  }
}
