void __cdecl sub_A1D3B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B11DE4); /*0xa1d3ba*/
  if ( off_B11DE8[0] ) /*0xa1d3c6*/
  {
    if ( *off_B11DE8[0] == 0x53 ) /*0xa1d3cb*/
      FormHeapFree((unsigned int)off_B11DE8[0]); /*0xa1d3ce*/
  }
}
