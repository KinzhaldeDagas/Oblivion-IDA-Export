void __cdecl sub_A26740()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B23C50); /*0xa2674a*/
  if ( off_B23C54 ) /*0xa26756*/
  {
    if ( *off_B23C54 == 0x53 ) /*0xa2675b*/
      FormHeapFree((unsigned int)off_B23C54); /*0xa2675e*/
  }
}
