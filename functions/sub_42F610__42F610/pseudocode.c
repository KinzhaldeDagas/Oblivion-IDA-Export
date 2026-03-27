char __usercall sub_42F610@<al>(char a1@<bpl>, int a2@<edi>)
{
  int v3; // edi
  int v4; // esi
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  FreeEntry *v8; // eax
  char *v9; // ecx
  char *v10; // ebp
  FreeEntry *v11; // edx
  char v12; // al
  FILE *v13; // eax
  FILE *v14; // esi
  char *v15; // eax
  unsigned int v16; // eax
  char *v17; // edi
  void *v19; // ebx
  unsigned __int8 *i; // eax
  const char *j; // ecx
  char v22; // al
  Archive *Archive; // eax
  int k; // ecx
  char v26; // [esp+1Bh] [ebp-445h]
  int v27; // [esp+1Ch] [ebp-444h]
  FILE *v28; // [esp+1Ch] [ebp-444h]
  int v29; // [esp+20h] [ebp-440h]
  DWORD TickCount; // [esp+20h] [ebp-440h]
  unsigned int v31; // [esp+20h] [ebp-440h]
  int v32; // [esp+24h] [ebp-43Ch]
  int v33[9]; // [esp+28h] [ebp-438h] BYREF
  char v34[259]; // [esp+4Ch] [ebp-414h] BYREF
  char v35; // [esp+14Fh] [ebp-311h] BYREF
  CHAR FileName[260]; // [esp+150h] [ebp-310h] BYREF
  char Buf[260]; // [esp+254h] [ebp-20Ch] BYREF
  char Filename[260]; // [esp+358h] [ebp-108h] BYREF

  _memset(&FirstLoadedArchiveByType, 0, 0x48);
  v26 = 1;
  if ( !bUseArchives_Archive )
    return 1;
  ArchiveManager_ReadArchiveInvalidationTXTFile(sInvalidationFile_Archive[0]);
  v3 = 0;
  v32 = 0;
  while ( 1 )
  {
    v4 = v3 + 1;
    v27 = v3 + 1;
    if ( (unsigned int)(v3 + 1) < 0x18 )
    {
      v5 = 8 * v3;
      v29 = 2 * v3;
      do
      {
        a1 = 8 * v4;
        if ( _strcmp(&FileExtensionInfoList[8 * v4], &FileExtensionInfoList[v5]) < 0 )
        {
          v3 = v4;
          v5 = 8 * v4;
        }
        ++v4;
      }
      while ( (unsigned int)v4 < 0x18 );
      if ( v32 != v3 )
      {
        v6 = *(_DWORD *)&FileExtensionInfoList[v29 * 4];
        v7 = dword_B0436C[v29];
        *(_DWORD *)&FileExtensionInfoList[v29 * 4] = *(_DWORD *)&FileExtensionInfoList[8 * v3];
        dword_B0436C[v29] = dword_B0436C[2 * v3];
        *(_DWORD *)&FileExtensionInfoList[8 * v3] = v6;
        dword_B0436C[2 * v3] = v7;
      }
      v4 = v27;
    }
    v32 = v4;
    if ( v4 >= 0x17 )
      break;
    v3 = v4;
  }
  TickCount = GetTickCount();
  PrintToLog___("Loading master archives");
  v8 = j_MemoryHeap_Alloc(&FormHeap, a1, 0x100008000uLL, a2);
  v9 = sArchiveList_Archive[0];
  v10 = (char *)v8;
  v11 = v8;
  do
  {
    v12 = *v9;
    LOBYTE(v11->prev) = *v9++;
    v11 = (FreeEntry *)((char *)v11 + 1);
  }
  while ( v12 );
  _sprintf(Filename, "%sPlugins.txt", (const char *)&AppDataPath);
  v13 = fopen(Filename, "r");
  v14 = v13;
  v28 = v13;
  if ( v13 )
  {
    if ( !feof(v13) )
    {
      do
      {
        fgets(Buf, 0x104, v14);
        if ( Buf[0] != 0x23 )
        {
          if ( Buf[0] )
          {
            if ( Buf[0] != 0xA )
            {
              v15 = strstr(Buf, ".esp");
              if ( v15 )
              {
                strcpy(v15, "*.bsa");
                strcpy(FileName, "Data\\");
                v16 = strlen(Buf) + 1;
                v17 = &v35;
                while ( *++v17 )
                  ;
                qmemcpy(v17, Buf, v16);
                v19 = (void *)_findfirst64i32(FileName, (int)v33);
                if ( v19 != (void *)0xFFFFFFFF )
                {
                  do
                  {
                    if ( v10[strlen(v10) - 2] == 0xA )
                      v10[strlen(v10) - 2] = 0;
                    strcat(v10, ", ");
                    strcat(v10, v34);
                  }
                  while ( !_findnext64i32(v19, (int)v33) );
                }
                v14 = v28;
              }
            }
          }
        }
      }
      while ( !feof(v14) );
    }
  }
  for ( i = _mbstok((unsigned __int8 *)v10, (const unsigned __int8 *)&byte_A319FC);
        i;
        i = _mbstok(0, (const unsigned __int8 *)&byte_A319FC) )
  {
    for ( j = (const char *)i; ; ++j )
    {
      v22 = *j;
      if ( *j != 0x20 && v22 != 9 && v22 != 0xA )
        break;
    }
    Archive = ArchiveManager_LoadArchive(j, 0, 0);
    if ( Archive )
    {
      for ( k = 0; k < 9; ++k )
      {
        if ( ((unsigned __int16)(1 << k) & *((_WORD *)Archive + 0xBA)) != 0 && !*(&FirstLoadedArchiveByType + k) )
          *(&FirstLoadedArchiveByType + k) = (int)Archive;
      }
    }
    else
    {
      v26 = 0;
    }
  }
  MemoryHeap_Free_checked(v10);
  v31 = GetTickCount() - TickCount;
  PrintToLog___("Finished loading master archives in %f seconds", (double)v31 / 1000.0);
  return v26;
}
