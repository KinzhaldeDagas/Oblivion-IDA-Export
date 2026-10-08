void __cdecl sub_A1CCA0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B24); /*0xa1ccaa*/
  if ( off_B11B28[0] ) /*0xa1ccb6*/
  {
    if ( *off_B11B28[0] == 0x53 ) /*0xa1ccbb*/
      FormHeapFree((unsigned int)off_B11B28[0]); /*0xa1ccbe*/
  }
}
