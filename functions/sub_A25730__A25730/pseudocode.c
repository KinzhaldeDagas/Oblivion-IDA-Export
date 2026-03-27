void __cdecl sub_A25730()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CD4);
  if ( off_B14CD8 )
  {
    if ( *off_B14CD8 == 0x53 )
      FormHeapFree((unsigned int)off_B14CD8);
  }
}
