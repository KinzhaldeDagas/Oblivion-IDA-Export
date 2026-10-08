void __cdecl sub_A19500()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06DFC); /*0xa1950a*/
  if ( off_B06E00 ) /*0xa19516*/
  {
    if ( *off_B06E00 == 0x53 ) /*0xa1951b*/
      FormHeapFree((unsigned int)off_B06E00); /*0xa1951e*/
  }
}
