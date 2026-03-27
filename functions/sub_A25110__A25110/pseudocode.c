void __cdecl sub_A25110()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14864);
  if ( off_B14868 )
  {
    if ( *off_B14868 == 0x53 )
      FormHeapFree((unsigned int)off_B14868);
  }
}
