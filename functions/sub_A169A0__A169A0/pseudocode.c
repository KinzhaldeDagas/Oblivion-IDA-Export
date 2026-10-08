void __cdecl sub_A169A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02D00); /*0xa169aa*/
  if ( off_B02D04 ) /*0xa169b6*/
  {
    if ( *off_B02D04 == 0x53 ) /*0xa169bb*/
      FormHeapFree((unsigned int)off_B02D04); /*0xa169be*/
  }
}
