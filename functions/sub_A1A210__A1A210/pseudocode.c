void __cdecl sub_A1A210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B07048); /*0xa1a21a*/
  if ( off_B0704C ) /*0xa1a226*/
  {
    if ( *off_B0704C == 0x53 ) /*0xa1a22b*/
      FormHeapFree((unsigned int)off_B0704C); /*0xa1a22e*/
  }
}
