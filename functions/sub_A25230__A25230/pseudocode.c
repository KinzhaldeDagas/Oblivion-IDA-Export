void __cdecl sub_A25230()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14894);
  if ( off_B14898 )
  {
    if ( *off_B14898 == 0x53 )
      FormHeapFree((unsigned int)off_B14898);
  }
}
