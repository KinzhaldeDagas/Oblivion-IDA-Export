void __cdecl sub_A1A480()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070B0); /*0xa1a48a*/
  if ( off_B070B4 ) /*0xa1a496*/
  {
    if ( *off_B070B4 == 0x53 ) /*0xa1a49b*/
      FormHeapFree((unsigned int)off_B070B4); /*0xa1a49e*/
  }
}
