void __cdecl sub_A25AA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14EE8);
  if ( off_B14EEC )
  {
    if ( *off_B14EEC == 0x53 )
      FormHeapFree((unsigned int)off_B14EEC);
  }
}
