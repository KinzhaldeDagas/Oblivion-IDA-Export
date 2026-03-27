void __cdecl sub_A25AD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14EF0);
  if ( off_B14EF4 )
  {
    if ( *off_B14EF4 == 0x53 )
      FormHeapFree((unsigned int)off_B14EF4);
  }
}
