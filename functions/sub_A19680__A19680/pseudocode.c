void __cdecl sub_A19680()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E3C); /*0xa1968a*/
  if ( off_B06E40 ) /*0xa19696*/
  {
    if ( *off_B06E40 == 0x53 ) /*0xa1969b*/
      FormHeapFree((unsigned int)off_B06E40); /*0xa1969e*/
  }
}
