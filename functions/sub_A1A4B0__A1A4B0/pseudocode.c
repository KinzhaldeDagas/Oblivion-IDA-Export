void __cdecl sub_A1A4B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070B8); /*0xa1a4ba*/
  if ( off_B070BC ) /*0xa1a4c6*/
  {
    if ( *off_B070BC == 0x53 ) /*0xa1a4cb*/
      FormHeapFree((unsigned int)off_B070BC); /*0xa1a4ce*/
  }
}
