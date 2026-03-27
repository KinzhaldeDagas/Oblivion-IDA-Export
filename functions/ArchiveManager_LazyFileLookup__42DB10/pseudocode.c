int __cdecl ArchiveManager_LazyFileLookup(int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  _DWORD *v4; // ecx
  int result; // eax

  v4 = (_DWORD *)*(&FirstLoadedArchiveByType + a1);
  result = 0;
  if ( v4 )
    return Archive_GetFileEntry(v4, a2, a3, a4);
  v4 = (_DWORD *)dword_B3390C[a1];
  if ( v4 )
    return Archive_GetFileEntry(v4, a2, a3, a4);
  return result;
}
