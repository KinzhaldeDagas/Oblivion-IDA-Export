void __cdecl sub_A18740()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B068D8);
  if ( off_B068DC )
  {
    if ( *off_B068DC == 0x53 )
      FormHeapFree((unsigned int)off_B068DC);
  }
}
