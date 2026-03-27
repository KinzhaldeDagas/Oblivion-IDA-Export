void __cdecl sub_A25B00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14EF8);
  if ( off_B14EFC )
  {
    if ( *off_B14EFC == 0x53 )
      FormHeapFree((unsigned int)off_B14EFC);
  }
}
