void __cdecl sub_A190B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D44); /*0xa190ba*/
  if ( off_B06D48 ) /*0xa190c6*/
  {
    if ( *off_B06D48 == 0x53 ) /*0xa190cb*/
      FormHeapFree((unsigned int)off_B06D48); /*0xa190ce*/
  }
}
