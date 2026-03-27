char __cdecl ArchiveManager_RemoveArchive(int a1)
{
  unsigned int i; // eax

  if ( !ArchiveList || !a1 )
    return 0;
  ArchiveProvidedLastFile = 0;
  BSSimpleList_Remove((_DWORD *)ArchiveList, a1);
  for ( i = 0; i < 9; ++i )
  {
    if ( *(int *)((char *)&FirstLoadedArchiveByType + i * 4) == a1 )
      *(int *)((char *)&FirstLoadedArchiveByType + i * 4) = 0;
    if ( dword_B3390C[i] == a1 )
      dword_B3390C[i] = 0;
  }
  ArchiveProvidedLastFile = 0;
  return 1;
}
