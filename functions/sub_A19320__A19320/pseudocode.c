void __cdecl sub_A19320()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06DAC); /*0xa1932a*/
  if ( off_B06DB0 ) /*0xa19336*/
  {
    if ( *off_B06DB0 == 0x53 ) /*0xa1933b*/
      FormHeapFree((unsigned int)off_B06DB0); /*0xa1933e*/
  }
}
