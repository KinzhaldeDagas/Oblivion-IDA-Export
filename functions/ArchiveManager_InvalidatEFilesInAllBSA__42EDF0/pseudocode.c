void __cdecl ArchiveManager_InvalidatEFilesInAllBSA(unsigned int *a1, unsigned int *a2, unsigned __int16 a3)
{
  int *v3; // ebx
  int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // [esp+4h] [ebp-8h] BYREF
  signed int v8; // [esp+8h] [ebp-4h] BYREF

  v3 = (int *)ArchiveList;
  if ( ArchiveList )
  {
    do
    {
      if ( !v3[1] && !*v3 )
        break;
      v4 = *v3;
      if ( (a3 & *(_WORD *)(*v3 + 0x174)) != 0 )
      {
        if ( Archive_ContainsFolder(v4, a1, (signed int *)&v7, 0) )
        {
          v5 = v7;
          if ( Archive_FolderContainFile(v4, v7, a2, &v8, 0, 0) )
          {
            v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0x178) + 0x10 * v5 + 0xC) + 0x10 * v8;
            *(_DWORD *)(v6 + 0xC) &= 0x80000000;
          }
        }
      }
      v3 = (int *)v3[1];
    }
    while ( v3 );
  }
}
