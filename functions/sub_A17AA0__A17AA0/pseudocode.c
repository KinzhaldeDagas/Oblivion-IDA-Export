void __cdecl sub_A17AA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iRetainFilenameOffsetTable_Archive);
  if ( off_B0444C[0] )
  {
    if ( *off_B0444C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B0444C[0]);
  }
}
