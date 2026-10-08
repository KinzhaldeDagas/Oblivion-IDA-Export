// MEF data-streaming pass: archive list builder uses fixed 0x8000 heap buffer and case-sensitive .esp-associated BSA discovery. Decoded as future policy/bounds improvement candidate, not included in narrow compatibility patch.
char __usercall ArchiveManager_LoadConfiguredAndPluginArchives@<al>(char a1@<bpl>, int a2@<edi>)
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

  _memset((int)MEMORY[0xB338E8], 0, 0x48u); /*0x42f62d*/
  v26 = 1; /*0x42f63c*/
  if ( !bUseArchives_Archive ) /*0x42f641*/
    return 1; /*0x42f643*/
  ArchiveManager_ReadArchiveInvalidationTXTFile(sInvalidationFile_Archive[0]); /*0x42f664*/
  v3 = 0; /*0x42f66c*/
  v32 = 0; /*0x42f66e*/
  while ( 1 ) /*0x42f678*/
  {
    v4 = v3 + 1; /*0x42f678*/
    v27 = v3 + 1; /*0x42f67e*/
    if ( (unsigned int)(v3 + 1) < 0x18 ) /*0x42f682*/
    {
      v5 = 8 * v3; /*0x42f684*/
      v29 = 2 * v3; /*0x42f68b*/
      do /*0x42f6bb*/
      {
        a1 = 8 * v4; /*0x42f696*/
        if ( CRT_StricmpLocaleDispatch( /*0x42f6af*/
               (unsigned __int8 *)&FileExtensionInfoList[8 * v4],
               (unsigned __int8 *)&FileExtensionInfoList[v5]) < 0 )
        {
          v3 = v4; /*0x42f6b1*/
          v5 = 8 * v4; /*0x42f6b3*/
        }
        ++v4; /*0x42f6b5*/
      }
      while ( (unsigned int)v4 < 0x18 ); /*0x42f6bb*/
      if ( v32 != v3 ) /*0x42f6c1*/
      {
        v6 = *(_DWORD *)&FileExtensionInfoList[v29 * 4]; /*0x42f6ce*/
        v7 = dword_B0436C[v29]; /*0x42f6d4*/
        *(_DWORD *)&FileExtensionInfoList[v29 * 4] = *(_DWORD *)&FileExtensionInfoList[8 * v3]; /*0x42f6da*/
        dword_B0436C[v29] = dword_B0436C[2 * v3]; /*0x42f6e7*/
        *(_DWORD *)&FileExtensionInfoList[8 * v3] = v6; /*0x42f6ed*/
        dword_B0436C[2 * v3] = v7; /*0x42f6f4*/
      }
      v4 = v27; /*0x42f6fb*/
    }
    v32 = v4; /*0x42f702*/
    if ( v4 >= 0x17 ) /*0x42f706*/
      break; /*0x42f706*/
    v3 = v4; /*0x42f674*/
  }
  TickCount = GetTickCount(); /*0x42f717*/
  PrintToLog___("Loading master archives"); /*0x42f71b*/
  v8 = j_MemoryHeap_Alloc(&FormHeap, a1, 0x100008000uLL, a2); /*0x42f72f*/
  v9 = sArchiveList_Archive[0];                 // MEF v46 Oblivion-verified archive startup OOM guard: fixed 0x8000 buffer allocation returned in EAX is unchecked. Failure sets result byte [ESP+13]=0 and rejoins timing/log epilogue at 0x42F9BE before fopen/findfirst. /*0x42f734*/
  v10 = (char *)v8; /*0x42f73a*/
  v11 = v8; /*0x42f73c*/
  do /*0x42f74c*/
  {
    v12 = *v9; /*0x42f740*/
    LOBYTE(v11->prev) = *v9++; /*0x42f742*/
    v11 = (FreeEntry *)((char *)v11 + 1); /*0x42f747*/
  }
  while ( v12 ); /*0x42f74c*/
  _sprintf(Filename, "%sPlugins.txt", (const char *)&MEMORY[0xB3F178]); /*0x42f760*/
  v13 = fopen(Filename, "r");                   // Performance/resource decode: Oblivion opens Plugins.txt here but sub_42F610 has no fclose. Decode-only pending complete CRT-handle cleanup integration. /*0x42f772*/
  v14 = v13; /*0x42f777*/
  v28 = v13; /*0x42f77e*/
  if ( v13 ) /*0x42f782*/
  {
    if ( !feof(v13) ) /*0x42f789*/
    {
      do /*0x42f92d*/
      {
        fgets(Buf, 0x104, v14); /*0x42f7ae*/
        if ( Buf[0] != 0x23 ) /*0x42f7bf*/
        {
          if ( Buf[0] ) /*0x42f7c7*/
          {
            if ( Buf[0] != 0xA ) /*0x42f7cf*/
            {
              v15 = strstr(Buf, ".esp");        // MEF candidate verification 2026-05-30: master archive list builder matches only '.esp' via strstr before rewriting to '*.bsa'. Policy-changing candidate, not a narrow correction. /*0x42f7e2*/
              if ( v15 ) /*0x42f7ec*/
              {
                strcpy(v15, "*.bsa"); /*0x42f7f8*/
                strcpy(FileName, "Data\\"); /*0x42f811*/
                v16 = strlen(Buf) + 1; /*0x42f837*/
                v17 = &v35; /*0x42f842*/
                while ( *++v17 ) /*0x42f84d*/
                  ; /*0x42f845*/
                qmemcpy(v17, Buf, v16); /*0x42f856*/
                v19 = (void *)_findfirst64i32(FileName, (int)v33);// MEF v50 resolved: _findfirst64i32 returns the raw FindFirstFileA handle in EBX; the completion/error path at 0x42F916 now calls Win32 FindClose(EBX). Initial INVALID_HANDLE_VALUE bypasses that hook. /*0x42f871*/
                if ( v19 != (void *)0xFFFFFFFF ) /*0x42f879*/
                {
                  do /*0x42f918*/
                  {                             // MEF v49 normal-length continuation after replayed LF comparison. Existing branch preserves vanilla CR/LF trimming for strlen >= 2.
                    if ( v10[strlen(v10) - 2] == 0xA ) /*0x42f895*/
                      v10[strlen(v10) - 2] = 0; // MEF v49 short-list continuation: append/enumeration path is safe for strlen < 2 once the invalid [EBP+length-2] newline probe is skipped. /*0x42f8ab*/
                    strcat(v10, ", ");          // MEF v47 Oblivion-verified bounded archive append: append literal ', ' plus current 260-byte find-data name only if full NUL-terminated result fits fixed 0x8000 buffer. On rejection leave buffer unchanged, clear result byte, continue same findnext at 0x42F90E. /*0x42f8c5*/
                    strcat(v10, v34); /*0x42f8ff*/
                  }
                  while ( !_findnext64i32(v19, (int)v33) );// MEF v50 Oblivion-verified archive search-handle lifetime fix. EAX is _findnext64i32 result: zero repeats at 0x42F880; nonzero ends this search and EBX still owns the raw FindFirstFileA HANDLE. Close EBX with FindClose, then continue 0x42F91E. The invalid-handle findfirst path already branches directly to 0x42F91E. /*0x42f918*/
                }
                v14 = v28;                      // MEF v50 continuation after successful enumeration handle is closed. Direct failure from _findfirst64i32 reaches here with EBX == INVALID_HANDLE_VALUE and requires no close. /*0x42f91e*/
              }
            }
          }
        }
      }
      while ( !feof(v14) ); /*0x42f92d*/
    }
  }
  for ( i = _mbstok((unsigned __int8 *)v10, asc_A319FC); i; i = _mbstok(0, asc_A319FC) )// MEF v48 continuation: Plugins.txt has been closed; archive-list tokenization and load order remain unchanged. /*0x42f943*/
  {
    for ( j = (const char *)i; ; ++j ) /*0x42f945*/
    {
      v22 = *j; /*0x42f947*/
      if ( *j != 0x20 && v22 != 9 && v22 != 0xA ) /*0x42f953*/
        break; /*0x42f953*/
    }
    Archive = ArchiveManager_LoadArchive(j, 0, 0); /*0x42f95f*/
    if ( Archive ) /*0x42f969*/
    {
      for ( k = 0; k < 9; ++k ) /*0x42f96b*/
      {
        if ( ((unsigned __int16)(1 << k) & *((_WORD *)Archive + 0xBA)) != 0 && !MEMORY[0xB338E8][k] ) /*0x42f980*/
          MEMORY[0xB338E8][k] = (int)Archive; /*0x42f98a*/
      }
    }
    else
    {
      v26 = 0; /*0x42f99b*/
    }
  }
  MemoryHeap_Free_checked(v10); /*0x42f9b9*/
  v31 = GetTickCount() - TickCount; /*0x42f9ca*/
  PrintToLog___("Finished loading master archives in %f seconds", (double)v31 / 1000.0); /*0x42f9eb*/
  return v26; /*0x42f645*/
}
