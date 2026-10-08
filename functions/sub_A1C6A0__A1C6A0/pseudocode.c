void __cdecl sub_A1C6A0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&fGetUpTime); /*0xa1c6aa*/
  if ( off_B11A28 ) /*0xa1c6b6*/
  {
    if ( *off_B11A28 == 0x53 ) /*0xa1c6bb*/
      FormHeapFree((unsigned int)off_B11A28); /*0xa1c6be*/
  }
}
