void __cdecl sub_A19260()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D8C); /*0xa1926a*/
  if ( off_B06D90 ) /*0xa19276*/
  {
    if ( *off_B06D90 == 0x53 ) /*0xa1927b*/
      FormHeapFree((unsigned int)off_B06D90); /*0xa1927e*/
  }
}
