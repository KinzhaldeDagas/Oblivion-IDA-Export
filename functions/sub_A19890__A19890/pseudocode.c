void __cdecl sub_A19890()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E94); /*0xa1989a*/
  if ( off_B06E98 ) /*0xa198a6*/
  {
    if ( *off_B06E98 == 0x53 ) /*0xa198ab*/
      FormHeapFree((unsigned int)off_B06E98); /*0xa198ae*/
  }
}
