void __cdecl sub_A233A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B120CC); /*0xa233aa*/
  if ( off_B120D0 ) /*0xa233b6*/
  {
    if ( *off_B120D0 == 0x53 ) /*0xa233bb*/
      FormHeapFree((unsigned int)off_B120D0); /*0xa233be*/
  }
}
