void __cdecl sub_A17000()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDebugTextTopBottomOffset);
  if ( off_B02E20 )
  {
    if ( *off_B02E20 == 0x53 )
      FormHeapFree((unsigned int)off_B02E20);
  }
}
