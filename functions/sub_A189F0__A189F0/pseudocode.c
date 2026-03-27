void __cdecl sub_A189F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSkipProgramFlows_MESSAGES);
  if ( off_B06B2C )
  {
    if ( *off_B06B2C == 0x53 )
      FormHeapFree((unsigned int)off_B06B2C);
  }
}
