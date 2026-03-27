void __cdecl sub_A25A70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14EE0);
  if ( off_B14EE4 )
  {
    if ( *off_B14EE4 == 0x53 )
      FormHeapFree((unsigned int)off_B14EE4);
  }
}
