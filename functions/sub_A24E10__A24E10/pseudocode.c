void __cdecl sub_A24E10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14390);
  if ( off_B14394[0] )
  {
    if ( *off_B14394[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14394[0]);
  }
}
