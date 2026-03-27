void ArchiveManager_DisacrdAllBSARetainedFilenames()
{
  int *v0; // edi
  int v1; // esi
  bool v2; // al
  bool v3; // al

  if ( ArchiveList )
  {
    v0 = (int *)ArchiveList;
    do
    {
      v1 = *v0;
      if ( iRetainDirectoryStringTable_Archive == 1 )
        v2 = (*(_DWORD *)(v1 + 0x160) & 8) != 0;
      else
        v2 = iRetainDirectoryStringTable_Archive != 0;
      if ( !v2 )
      {
        if ( (*(_BYTE *)(v1 + 0x194) & 4) == 0 )
        {
          if ( *(_DWORD *)(v1 + 0x198) )
            FormHeapFree(*(_DWORD *)(v1 + 0x198));
          if ( *(_DWORD *)(v1 + 0x19C) )
            FormHeapFree(*(_DWORD *)(v1 + 0x19C));
          *(_DWORD *)(v1 + 0x198) = 0;
          *(_DWORD *)(v1 + 0x19C) = 0;
        }
        *(_BYTE *)(v1 + 0x194) &= ~0x10u;
      }
      if ( iRetainFilenameStringTable_Archive == 1 )
        v3 = (*(_DWORD *)(v1 + 0x160) & 0x10) != 0;
      else
        v3 = iRetainFilenameStringTable_Archive != 0;
      if ( !v3 )
      {
        if ( iRetainFilenameOffsetTable_Archive == 1 )
          Archive_DiscardRetainedFilenames(v1, (*(_DWORD *)(v1 + 0x160) & 0x20) != 0);
        else
          Archive_DiscardRetainedFilenames(v1, iRetainFilenameOffsetTable_Archive != 0);
      }
      v0 = (int *)v0[1];
    }
    while ( v0 );
  }
}
