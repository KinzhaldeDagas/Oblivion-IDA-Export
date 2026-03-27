void __cdecl sub_A24760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135D8);
  if ( off_B135DC )
  {
    if ( *off_B135DC == 0x53 )
      FormHeapFree((unsigned int)off_B135DC);
  }
}
