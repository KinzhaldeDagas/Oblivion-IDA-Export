void __cdecl sub_A25980()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B14EB8);
  if ( off_B14EBC )
  {
    if ( *off_B14EBC == 0x53 )
      FormHeapFree((unsigned int)off_B14EBC);
  }
}
