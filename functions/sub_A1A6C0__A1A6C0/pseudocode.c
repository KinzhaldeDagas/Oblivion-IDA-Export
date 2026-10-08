void __cdecl sub_A1A6C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B07280); /*0xa1a6ca*/
  if ( off_B07284[0] ) /*0xa1a6d6*/
  {
    if ( *off_B07284[0] == 0x53 ) /*0xa1a6db*/
      FormHeapFree((unsigned int)off_B07284[0]); /*0xa1a6de*/
  }
}
