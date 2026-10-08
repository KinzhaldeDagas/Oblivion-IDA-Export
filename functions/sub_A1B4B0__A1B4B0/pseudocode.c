void __cdecl sub_A1B4B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08160); /*0xa1b4ba*/
  if ( off_B08164 ) /*0xa1b4c6*/
  {
    if ( *off_B08164 == 0x53 ) /*0xa1b4cb*/
      FormHeapFree((unsigned int)off_B08164); /*0xa1b4ce*/
  }
}
