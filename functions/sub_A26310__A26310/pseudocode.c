void __cdecl sub_A26310()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1625C); /*0xa2631a*/
  if ( off_B16260 ) /*0xa26326*/
  {
    if ( *off_B16260 == 0x53 ) /*0xa2632b*/
      FormHeapFree((unsigned int)off_B16260); /*0xa2632e*/
  }
}
