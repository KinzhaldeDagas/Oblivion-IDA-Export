void __cdecl sub_A1C8B0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A7C); /*0xa1c8ba*/
  if ( off_B11A80[0] ) /*0xa1c8c6*/
  {
    if ( *off_B11A80[0] == 0x53 ) /*0xa1c8cb*/
      FormHeapFree((unsigned int)off_B11A80[0]); /*0xa1c8ce*/
  }
}
