void __cdecl sub_A19650()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E34); /*0xa1965a*/
  if ( off_B06E38 ) /*0xa19666*/
  {
    if ( *off_B06E38 == 0x53 ) /*0xa1966b*/
      FormHeapFree((unsigned int)off_B06E38); /*0xa1966e*/
  }
}
