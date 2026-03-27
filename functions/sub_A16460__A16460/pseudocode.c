void __cdecl sub_A16460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBackgroundKey);
  if ( off_B02C38 )
  {
    if ( *off_B02C38 == 0x53 )
      FormHeapFree((unsigned int)off_B02C38);
  }
}
