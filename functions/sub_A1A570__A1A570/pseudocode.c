void __cdecl sub_A1A570()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B070D8);
  if ( off_B070DC )
  {
    if ( *off_B070DC == 0x53 )
      FormHeapFree((unsigned int)off_B070DC);
  }
}
