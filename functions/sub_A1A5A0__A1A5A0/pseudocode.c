void __cdecl sub_A1A5A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070E0); /*0xa1a5aa*/
  if ( off_B070E4 ) /*0xa1a5b6*/
  {
    if ( *off_B070E4 == 0x53 ) /*0xa1a5bb*/
      FormHeapFree((unsigned int)off_B070E4); /*0xa1a5be*/
  }
}
