void __cdecl sub_A250B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14854);
  if ( off_B14858 )
  {
    if ( *off_B14858 == 0x53 )
      FormHeapFree((unsigned int)off_B14858);
  }
}
