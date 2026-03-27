void __cdecl sub_A25080()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1484C);
  if ( off_B14850 )
  {
    if ( *off_B14850 == 0x53 )
      FormHeapFree((unsigned int)off_B14850);
  }
}
