void __cdecl sub_A250E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1485C);
  if ( off_B14860 )
  {
    if ( *off_B14860 == 0x53 )
      FormHeapFree((unsigned int)off_B14860);
  }
}
