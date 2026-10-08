void __cdecl sub_A194A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06DEC); /*0xa194aa*/
  if ( off_B06DF0 ) /*0xa194b6*/
  {
    if ( *off_B06DF0 == 0x53 ) /*0xa194bb*/
      FormHeapFree((unsigned int)off_B06DF0); /*0xa194be*/
  }
}
