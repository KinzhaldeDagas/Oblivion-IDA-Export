void __cdecl sub_A197D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E74); /*0xa197da*/
  if ( off_B06E78 ) /*0xa197e6*/
  {
    if ( *off_B06E78 == 0x53 ) /*0xa197eb*/
      FormHeapFree((unsigned int)off_B06E78); /*0xa197ee*/
  }
}
