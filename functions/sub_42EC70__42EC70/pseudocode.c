void __cdecl sub_42EC70(char **a1, char *Str1, const char *a3, int a4)
{
  char *v4; // esi
  char *v5; // eax
  unsigned __int16 FileTypemask; // bp
  _DWORD *v7; // edi
  char **v8; // ecx
  unsigned int v9; // ebx
  char **i; // eax
  unsigned int v11; // esi
  int v12; // eax
  _DWORD *v13; // eax
  size_t v14; // [esp-4h] [ebp-124h]
  size_t v15; // [esp-4h] [ebp-124h]
  _BYTE v16[8]; // [esp+8h] [ebp-118h] BYREF
  int v17[2]; // [esp+10h] [ebp-110h] BYREF
  char Str[260]; // [esp+18h] [ebp-108h] BYREF

  v4 = Str1;
  if ( ArchiveList )
  {
    if ( *Str1 == 0x5C )
      v4 = Str1 + 1;
    LODWORD(v14) = 5;
    if ( !strncmp(v4, "Data\\", v14) || (LODWORD(v15) = 5, !strncmp(v4, "data\\", v15)) )
      v4 += 5;
    strcpy(Str, a3);
    v5 = strrchr(Str, 0x5C);
    if ( v5 )
      v5[1] = 0;
    FileTypemask = a4;
    if ( a4 == 0xFFFF )
      FileTypemask = ArchiveManager_GetFileTypemask(&v4[strlen(v4) - 3]);
    v7 = 0;
    HashFilePAth(v4, (int)v17, (int)v16);
    v8 = a1;
    v9 = 0;
    for ( i = a1; i; i = (char **)i[1] )
    {
      if ( *i )
        ++v9;
    }
    v11 = ArchiveList;
    if ( ArchiveList )
    {
      do
      {
        v12 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 )
        {
          if ( (FileTypemask & *(_WORD *)(v12 + 0x174)) != 0 )
          {
            v13 = sub_42DB50(v12, v9, v7, (unsigned int *)v17, v16, v8, Str);
            v8 = a1;
            v7 = v13;
          }
        }
        v11 = *(_DWORD *)(v11 + 4);
      }
      while ( v11 );
      if ( v7 )
      {
        if ( v9 )
        {
          do
            FormHeapFree(v7[v11++]);
          while ( v11 < v9 );
        }
        FormHeapFree((unsigned int)v7);
      }
    }
  }
}
