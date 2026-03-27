int __thiscall Archive_InvalidateOlderFiles(int this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int **v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  const char *FolderNames; // ecx
  unsigned int v13; // eax
  const char *v14; // esi
  char *v15; // edi
  unsigned int *v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // ebx
  unsigned int **v20; // ecx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // edx
  HANDLE FirstFileA; // eax
  const char *Close; // eax
  int v27; // [esp+4h] [ebp-174h]
  _DWORD *v28; // [esp+8h] [ebp-170h]
  int v30; // [esp+10h] [ebp-168h]
  signed int v31; // [esp+14h] [ebp-164h]
  int v32; // [esp+18h] [ebp-160h]
  unsigned int v33; // [esp+1Ch] [ebp-15Ch]
  unsigned int v34; // [esp+24h] [ebp-154h]
  unsigned int v35; // [esp+2Ch] [ebp-14Ch]
  char v36; // [esp+33h] [ebp-145h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+34h] [ebp-144h] BYREF

  v2 = ArchiveInvalidatedDirPAths;
  v3 = this;
  v27 = 0;
  if ( !ArchiveInvalidatedDirPAths && !ArchiveInvalidateFilenames )
    return 0;
  if ( (*(_BYTE *)(this + 0x160) & 1) != 0 && (*(_DWORD *)(this + 0x160) & 2) != 0 )
  {
    v31 = 0;
    if ( *(_DWORD *)(this + 0x164) )
    {
      v30 = 0;
      while ( 1 )
      {
        v5 = (_DWORD *)(v30 + *(_DWORD *)(v3 + 0x178));
        v28 = v5;
        if ( v2 && (v6 = *(unsigned __int16 *)(v2 + 0xA), v7 = 0, *(_WORD *)(v2 + 0xA)) )
        {
          v8 = v5[1];
          v34 = *v5;
          v9 = *(unsigned int ***)(v2 + 4);
          while ( 1 )
          {
            v10 = **v9;
            v11 = (*v9)[1];
            if ( v11 >= v8 )
            {
              if ( v11 > v8 || (v5 = v28, v10 >= v34) )
              {
                if ( v11 < v8 || v11 <= v8 && v10 <= v34 )
                  break;
              }
            }
            ++v7;
            ++v9;
            if ( v7 >= v6 )
            {
              v3 = this;
              goto LABEL_20;
            }
          }
          v23 = 0;
          if ( v5[2] )
          {
            v24 = 0;
            do
            {
              *(_DWORD *)(v5[3] + v24 + 0xC) &= 0x80000000;
              ++v23;
              v24 += 0x10;
            }
            while ( v23 < v5[2] );
          }
          v27 += v5[2];
        }
        else
        {
LABEL_20:
          strcpy((char *)&FindFileData, "Data\\");
          FolderNames = (const char *)Archive_LoadFolderNames((_DWORD *)v3, v31);
          v13 = strlen(FolderNames) + 1;
          v14 = FolderNames;
          v15 = &v36;
          while ( *++v15 )
            ;
          qmemcpy(v15, v14, v13);
          if ( _access((const char *)&FindFileData, 0) != 0xFFFFFFFF )
          {
            v33 = 0;
            if ( v5[2] )
            {
              v32 = 0;
              do
              {
                v17 = (unsigned int *)(v32 + v5[3]);
                if ( ArchiveInvalidateFilenames )
                {
                  v18 = 0;
                  if ( *(_WORD *)(ArchiveInvalidateFilenames + 0xA) )
                  {
                    v19 = v17[1];
                    v35 = *v17;
                    v20 = *(unsigned int ***)(ArchiveInvalidateFilenames + 4);
                    while ( 1 )
                    {
                      v21 = **v20;
                      v22 = (*v20)[1];
                      if ( v22 >= v19 )
                      {
                        if ( v22 > v19 || (v5 = v28, v21 >= v35) )
                        {
                          if ( v22 < v19 || v22 <= v19 && v21 <= v35 )
                            break;
                        }
                      }
                      ++v18;
                      ++v20;
                      if ( v18 >= *(unsigned __int16 *)(ArchiveInvalidateFilenames + 0xA) )
                        goto LABEL_41;
                    }
                    v17[3] &= 0x80000000;
                    ++v27;
                  }
                }
LABEL_41:
                v32 += 0x10;
                ++v33;
              }
              while ( v33 < v5[2] );
            }
          }
        }
        v30 += 0x10;
        if ( (unsigned int)++v31 >= *(_DWORD *)(this + 0x164) )
          break;
        v2 = ArchiveInvalidatedDirPAths;
        v3 = this;
      }
    }
  }
  else
  {
    PrintError(
      "bInvalidateOlderFiles is true in the INI file, but the archive doesn't have directory or file strings.  This is go"
      "ing to be really really slow.");
    FirstFileA = FindFirstFileA((LPCSTR)(v3 + 0x3C), &FindFileData);
    if ( FirstFileA == (HANDLE)0xFFFFFFFF )
      Close = (const char *)PrintError("Could not find Archive %s to get file time.", (const char *)(v3 + 0x3C));
    else
      Close = (const char *)FindClose(FirstFileA);
    BSA_InvalidateAgainstLooseFiles(Close, v3, off_B0555C[0], EmptyString, &FindFileData.ftLastWriteTime);
  }
  return v27;
}
