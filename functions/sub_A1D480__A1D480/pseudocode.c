void __cdecl sub_A1D480()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B11E2C); /*0xa1d48a*/
  if ( off_B11E30 ) /*0xa1d496*/
  {
    if ( *off_B11E30 == 0x53 ) /*0xa1d49b*/
      FormHeapFree((unsigned int)off_B11E30); /*0xa1d49e*/
  }
}
