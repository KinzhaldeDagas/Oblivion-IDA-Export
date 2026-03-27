void __cdecl sub_A25020()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1483C);
  if ( off_B14840 )
  {
    if ( *off_B14840 == 0x53 )
      FormHeapFree((unsigned int)off_B14840);
  }
}
