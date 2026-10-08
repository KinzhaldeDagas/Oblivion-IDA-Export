void __cdecl sub_A1C9A0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AA4); /*0xa1c9aa*/
  if ( off_B11AA8[0] ) /*0xa1c9b6*/
  {
    if ( *off_B11AA8[0] == 0x53 ) /*0xa1c9bb*/
      FormHeapFree((unsigned int)off_B11AA8[0]); /*0xa1c9be*/
  }
}
