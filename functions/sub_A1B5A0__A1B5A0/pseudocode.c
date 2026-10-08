void __cdecl sub_A1B5A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08188); /*0xa1b5aa*/
  if ( off_B0818C ) /*0xa1b5b6*/
  {
    if ( *off_B0818C == 0x53 ) /*0xa1b5bb*/
      FormHeapFree((unsigned int)off_B0818C); /*0xa1b5be*/
  }
}
