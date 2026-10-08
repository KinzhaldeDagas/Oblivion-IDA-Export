void __cdecl sub_A1A5D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070E8); /*0xa1a5da*/
  if ( off_B070EC[0] ) /*0xa1a5e6*/
  {
    if ( *off_B070EC[0] == 0x53 ) /*0xa1a5eb*/
      FormHeapFree((unsigned int)off_B070EC[0]); /*0xa1a5ee*/
  }
}
