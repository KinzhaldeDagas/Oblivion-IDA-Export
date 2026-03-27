void __cdecl sub_A25700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CCC);
  if ( off_B14CD0 )
  {
    if ( *off_B14CD0 == 0x53 )
      FormHeapFree((unsigned int)off_B14CD0);
  }
}
