void __cdecl sub_A1BBC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iNumHavokThreads);
  if ( off_B097DC )
  {
    if ( *off_B097DC == 0x53 )
      FormHeapFree((unsigned int)off_B097DC);
  }
}
