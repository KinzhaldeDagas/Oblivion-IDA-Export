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

  strcpy(Str1, Str);
  v1 = &v15;
  while ( *++v1 )
    ;
  v3 = bInvalidateOlderFiles_Archive == 0;
  v4 = word_A52160;
  *(_DWORD *)v1 = dword_A5215C;
  *((_WORD *)v1 + 2) = v4;
  if ( v3 )
    return ArchiveManager_GetRandomFilenameForDirectory(Str1, Str, 8);
  v6 = sub_431970(Str1, Str, 8, 0);
  v7 = (unsigned int *)v6;
  if ( !v6 )
    return 0;
  v8 = 0;
  do
  {
    if ( *v6 )
      ++v8;
    v6 = (char **)v6[1];
  }
  while ( v6 );
  if ( !v8 )
  {
    FormHeapFree((unsigned int)v7);
    return 0;
  }
  v9 = GetRandomLargeInteger_(0) % v8;
  v10 = v7;
  v11 = v9;
  do
  {
    if ( !v11 )
    {
      v12 = (char *)*v10;
      v13 = Str;
      do
      {
        v14 = *v12;
        *v13++ = *v12++;
      }
      while ( v14 );
    }
    --v11;
    FormHeapFree(*v10);
    v10 = (unsigned int *)v10[1];
  }
  while ( v10 );
  BSSimpleList_Clear(v7);
  FormHeapFree((unsigned int)v7);
  return 1;
}
