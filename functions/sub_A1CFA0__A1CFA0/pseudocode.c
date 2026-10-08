void __cdecl sub_A1CFA0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BA4); /*0xa1cfaa*/
  if ( off_B11BA8[0] ) /*0xa1cfb6*/
  {
    if ( *off_B11BA8[0] == 0x53 ) /*0xa1cfbb*/
      FormHeapFree((unsigned int)off_B11BA8[0]); /*0xa1cfbe*/
  }
}
