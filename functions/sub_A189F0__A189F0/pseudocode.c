void __cdecl sub_A189F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSkipProgramFlows_MESSAGES); /*0xa189fa*/
  if ( off_B06B2C ) /*0xa18a06*/
  {
    if ( *off_B06B2C == 0x53 ) /*0xa18a0b*/
      FormHeapFree((unsigned int)off_B06B2C); /*0xa18a0e*/
  }
}
