ArchiveFile *__cdecl FileFinder_LoadNiFile__(const char *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v6; // eax
  _DWORD *v7; // eax
  char Str1[780]; // [esp+14h] [ebp-31Ch] BYREF
  int v9; // [esp+32Ch] [ebp-4h]

  if ( !MEMORY[0xB33A04] ) /*0x430f3b*/
    return 0; /*0x430f3b*/
  if ( a2 == 1 ) /*0x430f4b*/
  {
    v4 = (_DWORD *)FormHeapAlloc(0x154u); /*0x430f52*/
    v9 = 0; /*0x430f60*/
    if ( v4 ) /*0x430f67*/
      return (ArchiveFile *)BSFile_constr(v4, a1, 1, a3, 0); /*0x430f7b*/
    return 0; /*0x430f67*/
  }
  v6 = ((int (__stdcall *)(const char *, char *, _DWORD, unsigned int))MEMORY[0xB33A04]->vtbl->FindFile)( /*0x430f8f*/
         a1,
         Str1,
         0,
         0xFFFFFFFF);
  if ( !v6 ) /*0x430f93*/
    return 0; /*0x430ff1*/
  if ( v6 == 2 ) /*0x430f98*/
    return ArchiveManager_FindFileInBSA(Str1, a3, a4); /*0x430faf*/
  v7 = (_DWORD *)FormHeapAlloc(0x154u); /*0x430fbe*/
  v9 = 1; /*0x430fcc*/
  if ( !v7 ) /*0x430fd7*/
    return 0; /*0x430f7f*/
  return (ArchiveFile *)BSFile_constr(v7, Str1, a2, a3, 0); /*0x430ff3*/
}
