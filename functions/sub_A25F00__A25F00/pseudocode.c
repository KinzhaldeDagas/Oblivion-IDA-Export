void __cdecl sub_A25F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B1582C);
  if ( off_B15830 )
  {
    if ( *off_B15830 == 0x53 )
      FormHeapFree((unsigned int)off_B15830);
  }
}
