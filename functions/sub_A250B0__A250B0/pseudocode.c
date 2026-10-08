void __cdecl sub_A250B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14854); /*0xa250ba*/
  if ( off_B14858 ) /*0xa250c6*/
  {
    if ( *off_B14858 == 0x53 ) /*0xa250cb*/
      FormHeapFree((unsigned int)off_B14858); /*0xa250ce*/
  }
}
