void __cdecl sub_A24C80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14158); /*0xa24c8a*/
  if ( off_B1415C ) /*0xa24c96*/
  {
    if ( *off_B1415C == 0x53 ) /*0xa24c9b*/
      FormHeapFree((unsigned int)off_B1415C); /*0xa24c9e*/
  }
}
