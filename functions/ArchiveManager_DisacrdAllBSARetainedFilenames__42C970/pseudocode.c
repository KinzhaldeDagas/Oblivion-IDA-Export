void ArchiveManager_DisacrdAllBSARetainedFilenames()
{
  int *v0; // edi
  int v1; // esi
  bool v2; // al
  bool v3; // al

  if ( MEMORY[0xB338E0] ) /*0x42c97b*/
  {
    v0 = (int *)MEMORY[0xB338E0]; /*0x42c982*/
    do /*0x42ca49*/
    {
      v1 = *v0; /*0x42c998*/
      if ( iRetainDirectoryStringTable_Archive == 1 ) /*0x42c99a*/
        v2 = (*(_DWORD *)(v1 + 0x160) & 8) != 0; /*0x42c9a5*/
      else
        v2 = iRetainDirectoryStringTable_Archive != 0; /*0x42c9ab*/
      if ( !v2 ) /*0x42c9b0*/
      {
        if ( (*(_BYTE *)(v1 + 0x194) & 4) == 0 ) /*0x42c9b9*/
        {
          if ( *(_DWORD *)(v1 + 0x198) ) /*0x42c9bb*/
            FormHeapFree(*(_DWORD *)(v1 + 0x198)); /*0x42c9c6*/
          if ( *(_DWORD *)(v1 + 0x19C) ) /*0x42c9ce*/
            FormHeapFree(*(_DWORD *)(v1 + 0x19C)); /*0x42c9d9*/
          *(_DWORD *)(v1 + 0x198) = 0; /*0x42c9e1*/
          *(_DWORD *)(v1 + 0x19C) = 0; /*0x42c9e7*/
        }
        *(_BYTE *)(v1 + 0x194) &= ~0x10u; /*0x42c9ed*/
      }
      if ( iRetainFilenameStringTable_Archive == 1 ) /*0x42c9fc*/
        v3 = (*(_DWORD *)(v1 + 0x160) & 0x10) != 0; /*0x42ca07*/
      else
        v3 = iRetainFilenameStringTable_Archive != 0; /*0x42ca0d*/
      if ( !v3 ) /*0x42ca12*/
      {
        if ( iRetainFilenameOffsetTable_Archive == 1 ) /*0x42ca1c*/
          Archive_DiscardRetainedFilenames(v1, (*(_DWORD *)(v1 + 0x160) & 0x20) != 0); /*0x42ca2d*/
        else
          Archive_DiscardRetainedFilenames(v1, iRetainFilenameOffsetTable_Archive != 0); /*0x42ca3f*/
      }
      v0 = (int *)v0[1]; /*0x42ca44*/
    }
    while ( v0 ); /*0x42ca49*/
  }
}
