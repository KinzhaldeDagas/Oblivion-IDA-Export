ArchiveFile *__cdecl FileFinder_LoadNiFile__(const char *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v6; // eax
  _DWORD *v7; // eax
  char Str1[780]; // [esp+14h] [ebp-31Ch] BYREF
  int v9; // [esp+32Ch] [ebp-4h]

  if ( !OBSE_g_FileFinder )
    return 0;
  if ( a2 == 1 )
  {
    v4 = (_DWORD *)FormHeapAlloc(0x154u);
    v9 = 0;
    if ( v4 )
      return (ArchiveFile *)BSFile_constr(v4, a1, 1, a3, 0);
    return 0;
  }
  v6 = ((int (__stdcall *)(const char *, char *, _DWORD, unsigned int))OBSE_g_FileFinder->vtbl->FindFile)(
         a1,
         Str1,
         0,
         0xFFFFFFFF);
  if ( !v6 )
    return 0;
  if ( v6 == 2 )
    return ArchiveManager_FindFileInBSA(Str1, a3, a4);
  v7 = (_DWORD *)FormHeapAlloc(0x154u);
  v9 = 1;
  if ( !v7 )
    return 0;
  return (ArchiveFile *)BSFile_constr(v7, Str1, a2, a3, 0);
}
