char __cdecl sub_42E800(char *Str1)
{
  char *v1; // esi
  int *v2; // edi
  int v3; // esi
  unsigned int v4; // ebx
  int v6; // eax
  size_t v7; // [esp-4h] [ebp-2Ch]
  size_t v8; // [esp-4h] [ebp-2Ch]
  unsigned int v9; // [esp+10h] [ebp-18h] BYREF
  signed int v10; // [esp+14h] [ebp-14h] BYREF
  int v11[2]; // [esp+18h] [ebp-10h] BYREF
  int v12[2]; // [esp+20h] [ebp-8h] BYREF

  if ( !ArchiveList )
    return 0;
  v1 = Str1;
  if ( *Str1 == 0x5C )
    v1 = Str1 + 1;
  LODWORD(v7) = 5;
  if ( !strncmp(v1, "Data\\", v7) || (LODWORD(v8) = 5, !strncmp(v1, "data\\", v8)) )
    v1 += 5;
  HashFilePAth(v1, (int)v11, (int)v12);
  v2 = (int *)ArchiveList;
  if ( !ArchiveList )
    return 0;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( Archive_ContainsFolder(v3, (unsigned int *)v11, (signed int *)&v9, 0) )
      {
        v4 = v9;
        if ( Archive_FolderContainFile(v3, v9, (unsigned int *)v12, &v10, 0, 0) )
          break;
      }
    }
    v2 = (int *)v2[1];
    if ( !v2 )
      return 0;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 0x178) + 0x10 * v4 + 0xC) + 0x10 * v10;
  *(_DWORD *)(v6 + 0xC) &= 0x80000000;
  return 1;
}
