int __cdecl ArchiveManager_LazyFileLookup(int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  _DWORD *v4; // ecx
  int result; // eax

  v4 = (_DWORD *)MEMORY[0xB338E8][a1]; /*0x42db14*/
  result = 0; /*0x42db1b*/
  if ( v4 ) /*0x42db1f*/
    return Archive_GetFileEntry(v4, a2, a3, a4); /*0x42db1f*/
  v4 = (_DWORD *)dword_B3390C[a1]; /*0x42db21*/
  if ( v4 ) /*0x42db2a*/
    return Archive_GetFileEntry(v4, a2, a3, a4); /*0x42db3b*/
  return result; /*0x42db40*/
}
