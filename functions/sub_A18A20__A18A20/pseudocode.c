void __cdecl sub_A18A20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSkipInitializationFlows_MESSAGES);
  if ( off_B06B34 )
  {
    if ( *off_B06B34 == 0x53 )
      FormHeapFree((unsigned int)off_B06B34);
  }
}
