void __cdecl sub_A189C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowYesToAll_MESSAGES);
  if ( off_B06B24 )
  {
    if ( *off_B06B24 == 0x53 )
      FormHeapFree((unsigned int)off_B06B24);
  }
}
