void __cdecl sub_A1C880()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A74); /*0xa1c88a*/
  if ( off_B11A78[0] ) /*0xa1c896*/
  {
    if ( *off_B11A78[0] == 0x53 ) /*0xa1c89b*/
      FormHeapFree((unsigned int)off_B11A78[0]); /*0xa1c89e*/
  }
}
