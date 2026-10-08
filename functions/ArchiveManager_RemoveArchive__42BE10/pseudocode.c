char __cdecl ArchiveManager_RemoveArchive(int a1)
{
  unsigned int i; // eax

  if ( !MEMORY[0xB338E0] || !a1 ) /*0x42be24*/
    return 0; /*0x42be64*/
  MEMORY[0xB338E4] = 0; /*0x42be27*/
  BSSimpleList_Remove((int *)MEMORY[0xB338E0], a1); /*0x42be2d*/
  for ( i = 0; i < 9; ++i ) /*0x42be32*/
  {
    if ( MEMORY[0xB338E8][i] == a1 ) /*0x42be3a*/
      MEMORY[0xB338E8][i] = 0; /*0x42be3c*/
    if ( dword_B3390C[i] == a1 ) /*0x42be48*/
      dword_B3390C[i] = 0; /*0x42be4a*/
  }
  MEMORY[0xB338E4] = 0; /*0x42be58*/
  return 1; /*0x42be5e*/
}
