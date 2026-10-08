char __stdcall sub_6A9CD0(char *Str)
{
  char *v1; // eax
  bool v3; // zf
  __int16 v4; // dx
  char **v6; // eax
  unsigned int *v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // et2
  unsigned int *v10; // esi
  unsigned int v11; // edi
  char *v12; // ecx
  char *v13; // edx
  char v14; // al
  char v15; // [esp+3h] [ebp-109h] BYREF
  char Str1[260]; // [esp+4h] [ebp-108h] BYREF

  strcpy(Str1, Str); /*0x6a9cf0*/
  v1 = &v15; /*0x6a9d04*/
  while ( *++v1 ) /*0x6a9d0f*/
    ; /*0x6a9d07*/
  v3 = bInvalidateOlderFiles_Archive == 0; /*0x6a9d11*/
  v4 = word_A52160; /*0x6a9d1e*/
  *(_DWORD *)v1 = dword_A5215C; /*0x6a9d25*/
  *((_WORD *)v1 + 2) = v4; /*0x6a9d27*/
  if ( v3 ) /*0x6a9d2b*/
    return ArchiveManager_GetRandomFilenameForDirectory(Str1, Str, 8); /*0x6a9d52*/
  v6 = ModelLoader_BuildFileListWildcard(Str1, Str, 8, 0); /*0x6a9d61*/
  v7 = (unsigned int *)v6; /*0x6a9d66*/
  if ( !v6 ) /*0x6a9d6d*/
    return 0; /*0x6a9d6d*/
  v8 = 0; /*0x6a9d6f*/
  do /*0x6a9d7e*/
  {
    if ( *v6 ) /*0x6a9d71*/
      ++v8; /*0x6a9d76*/
    v6 = (char **)v6[1]; /*0x6a9d79*/
  }
  while ( v6 ); /*0x6a9d7e*/
  if ( !v8 ) /*0x6a9d82*/
  {
    FormHeapFree((unsigned int)v7); /*0x6a9dd9*/
    return 0; /*0x6a9de1*/
  }
  v9 = Game_RandomLargeInteger(0) % v8; /*0x6a9d90*/
  v10 = v7; /*0x6a9d92*/
  v11 = v9; /*0x6a9d94*/
  do /*0x6a9dc1*/
  {
    if ( !v11 ) /*0x6a9d98*/
    {
      v12 = (char *)*v10; /*0x6a9d9a*/
      v13 = Str; /*0x6a9d9c*/
      do /*0x6a9dac*/
      {
        v14 = *v12; /*0x6a9da0*/
        *v13++ = *v12++; /*0x6a9da2*/
      }
      while ( v14 ); /*0x6a9dac*/
    }
    --v11; /*0x6a9db1*/
    FormHeapFree(*v10); /*0x6a9db4*/
    v10 = (unsigned int *)v10[1]; /*0x6a9db9*/
  }
  while ( v10 ); /*0x6a9dc1*/
  BSSimpleList_Clear(v7); /*0x6a9dc5*/
  FormHeapFree((unsigned int)v7); /*0x6a9dcb*/
  return 1; /*0x6a9d3d*/
}
