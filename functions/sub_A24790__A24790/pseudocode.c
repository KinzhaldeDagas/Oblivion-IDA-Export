void __cdecl sub_A24790()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135E0); /*0xa2479a*/
  if ( off_B135E4 ) /*0xa247a6*/
  {
    if ( *off_B135E4 == 0x53 ) /*0xa247ab*/
      FormHeapFree((unsigned int)off_B135E4); /*0xa247ae*/
  }
}
