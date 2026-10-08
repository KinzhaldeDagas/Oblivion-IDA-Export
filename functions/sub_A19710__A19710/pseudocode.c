void __cdecl sub_A19710()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E54); /*0xa1971a*/
  if ( off_B06E58 ) /*0xa19726*/
  {
    if ( *off_B06E58 == 0x53 ) /*0xa1972b*/
      FormHeapFree((unsigned int)off_B06E58); /*0xa1972e*/
  }
}
