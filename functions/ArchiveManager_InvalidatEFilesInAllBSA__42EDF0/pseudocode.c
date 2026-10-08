void __cdecl ArchiveManager_InvalidatEFilesInAllBSA(unsigned int *a1, unsigned int *a2, unsigned __int16 a3)
{
  int *v3; // ebx
  int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // [esp+4h] [ebp-8h] BYREF
  signed int v8; // [esp+8h] [ebp-4h] BYREF

  v3 = (int *)MEMORY[0xB338E0]; /*0x42edf4*/
  if ( MEMORY[0xB338E0] ) /*0x42edfc*/
  {
    do /*0x42ee71*/
    {
      if ( !v3[1] && !*v3 ) /*0x42ee0b*/
        break; /*0x42ee0e*/
      v4 = *v3; /*0x42ee10*/
      if ( (a3 & *(_WORD *)(*v3 + 0x174)) != 0 ) /*0x42ee1e*/
      {
        if ( Archive_ContainsFolder(v4, a1, (signed int *)&v7, 0) ) /*0x42ee2e*/
        {
          v5 = v7; /*0x42ee37*/
          if ( Archive_FolderContainFile(v4, v7, a2, &v8, 0, 0) ) /*0x42ee48*/
          {
            v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0x178) + 0x10 * v5 + 0xC) + 0x10 * v8; /*0x42ee61*/
            *(_DWORD *)(v6 + 0xC) &= 0x80000000; /*0x42ee65*/
          }
        }
      }
      v3 = (int *)v3[1]; /*0x42ee6c*/
    }
    while ( v3 ); /*0x42ee71*/
  }
}
