void __cdecl sub_A1A600()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B070F0); /*0xa1a60a*/
  if ( off_B070F4[0] ) /*0xa1a616*/
  {
    if ( *off_B070F4[0] == 0x53 ) /*0xa1a61b*/
      FormHeapFree((unsigned int)off_B070F4[0]); /*0xa1a61e*/
  }
}
