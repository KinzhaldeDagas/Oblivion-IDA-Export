void __cdecl sub_A191D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D74); /*0xa191da*/
  if ( off_B06D78 ) /*0xa191e6*/
  {
    if ( *off_B06D78 == 0x53 ) /*0xa191eb*/
      FormHeapFree((unsigned int)off_B06D78); /*0xa191ee*/
  }
}
