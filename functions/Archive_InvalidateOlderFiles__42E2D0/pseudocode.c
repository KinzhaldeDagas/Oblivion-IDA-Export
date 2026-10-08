int __thiscall Archive_InvalidateOlderFiles(int this)
{
  int v1; // eax
  int v2; // edi
  _DWORD *v4; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int **v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  const char *FolderNames; // ecx
  unsigned int v12; // eax
  const char *v13; // esi
  char *v14; // edi
  unsigned int *v16; // edx
  unsigned int v17; // edi
  unsigned int v18; // ebx
  unsigned int **v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edx
  HANDLE FirstFileA; // eax
  const char *Close; // eax
  int v26; // [esp+4h] [ebp-174h]
  _DWORD *v27; // [esp+8h] [ebp-170h]
  int v29; // [esp+10h] [ebp-168h]
  signed int v30; // [esp+14h] [ebp-164h]
  int v31; // [esp+18h] [ebp-160h]
  unsigned int v32; // [esp+1Ch] [ebp-15Ch]
  unsigned int v33; // [esp+24h] [ebp-154h]
  unsigned int v34; // [esp+2Ch] [ebp-14Ch]
  char v35; // [esp+33h] [ebp-145h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+34h] [ebp-144h] BYREF

  v1 = MEMORY[0xB33934]; /*0x42e2e4*/
  v2 = this; /*0x42e2ea*/
  v26 = 0; /*0x42e2f4*/
  if ( !MEMORY[0xB33934] && !MEMORY[0xB33930] ) /*0x42e300*/
    return 0; /*0x42e302*/
  if ( (*(_BYTE *)(this + 0x160) & 1) != 0 && (*(_DWORD *)(this + 0x160) & 2) != 0 ) /*0x42e333*/
  {
    v30 = 0; /*0x42e33f*/
    if ( *(_DWORD *)(this + 0x164) ) /*0x42e339*/
    {
      v29 = 0; /*0x42e34b*/
      while ( 1 ) /*0x42e368*/
      {
        v4 = (_DWORD *)(v29 + *(_DWORD *)(v2 + 0x178)); /*0x42e35e*/
        v27 = v4; /*0x42e364*/
        if ( v1 && (v5 = *(unsigned __int16 *)(v1 + 0xA), v6 = 0, *(_WORD *)(v1 + 0xA)) ) /*0x42e36a*/
        {
          v7 = v4[1]; /*0x42e377*/
          v33 = *v4; /*0x42e37a*/
          v8 = *(unsigned int ***)(v1 + 4); /*0x42e37e*/
          while ( 1 ) /*0x42e383*/
          {
            v9 = **v8; /*0x42e383*/
            v10 = (*v8)[1]; /*0x42e385*/
            if ( v10 >= v7 ) /*0x42e38a*/
            {
              if ( v10 > v7 || (v4 = v27, v9 >= v33) ) /*0x42e396*/
              {
                if ( v10 < v7 || v10 <= v7 && v9 <= v33 ) /*0x42e3a6*/
                  break; /*0x42e3a6*/
              }
            }
            ++v6; /*0x42e3ac*/
            ++v8; /*0x42e3af*/
            if ( v6 >= v5 ) /*0x42e3b4*/
            {
              v2 = this; /*0x42e3b6*/
              goto LABEL_20; /*0x42e3b6*/
            }
          }
          v22 = 0; /*0x42e4a1*/
          if ( v4[2] ) /*0x42e4a3*/
          {
            v23 = 0; /*0x42e4a8*/
            do /*0x42e4c6*/
            {
              *(_DWORD *)(v4[3] + v23 + 0xC) &= 0x80000000; /*0x42e4b3*/
              ++v22; /*0x42e4bd*/
              v23 += 0x10; /*0x42e4c0*/
            }
            while ( v22 < v4[2] ); /*0x42e4c6*/
          }
          v26 += v4[2]; /*0x42e4cb*/
        }
        else
        {
LABEL_20:
          strcpy((char *)&FindFileData, "Data\\"); /*0x42e3ba*/
          FolderNames = (const char *)Archive_LoadFolderNames((_DWORD *)v2, v30);// MEF v39 caller proof: Archive_InvalidateOlderFiles immediately performs a strlen-like scan on Archive_LoadFolderNames result without null/length guard. /*0x42e3db*/
          v12 = strlen(FolderNames) + 1; /*0x42e3ed*/
          v13 = FolderNames; /*0x42e3ef*/
          v14 = &v35; /*0x42e3f1*/
          while ( *++v14 ) /*0x42e3fc*/
            ; /*0x42e3f4*/
          qmemcpy(v14, v13, v12); /*0x42e403*/
          if ( _access((const char *)&FindFileData, 0) != 0xFFFFFFFF ) /*0x42e41f*/
          {
            v32 = 0; /*0x42e428*/
            if ( v4[2] ) /*0x42e425*/
            {
              v31 = 0; /*0x42e432*/
              do /*0x42e4f0*/
              {
                v16 = (unsigned int *)(v31 + v4[3]); /*0x42e448*/
                if ( MEMORY[0xB33930] ) /*0x42e44e*/
                {
                  v17 = 0; /*0x42e458*/
                  if ( *(_WORD *)(MEMORY[0xB33930] + 0xA) ) /*0x42e454*/
                  {
                    v18 = v16[1]; /*0x42e464*/
                    v34 = *v16; /*0x42e467*/
                    v19 = *(unsigned int ***)(MEMORY[0xB33930] + 4); /*0x42e46b*/
                    while ( 1 ) /*0x42e472*/
                    {
                      v20 = **v19; /*0x42e472*/
                      v21 = (*v19)[1]; /*0x42e474*/
                      if ( v21 >= v18 ) /*0x42e479*/
                      {
                        if ( v21 > v18 || (v4 = v27, v20 >= v34) ) /*0x42e485*/
                        {
                          if ( v21 < v18 || v21 <= v18 && v20 <= v34 ) /*0x42e491*/
                            break; /*0x42e491*/
                        }
                      }
                      ++v17; /*0x42e493*/
                      ++v19; /*0x42e496*/
                      if ( v17 >= *(unsigned __int16 *)(MEMORY[0xB33930] + 0xA) ) /*0x42e49d*/
                        goto LABEL_41; /*0x42e49d*/
                    }
                    v16[3] &= 0x80000000; /*0x42e4d1*/
                    ++v26; /*0x42e4d8*/
                  }
                }
LABEL_41:
                v31 += 0x10; /*0x42e4dd*/
                ++v32; /*0x42e4ec*/
              }
              while ( v32 < v4[2] ); /*0x42e4f0*/
            }
          }
        }
        v29 += 0x10; /*0x42e4fe*/
        if ( (unsigned int)++v30 >= *(_DWORD *)(this + 0x164) ) /*0x42e510*/
          break; /*0x42e510*/
        v1 = MEMORY[0xB33934]; /*0x42e351*/
        v2 = this; /*0x42e356*/
      }
    }
  }
  else
  {
    PrintError( /*0x42e51f*/
      "bInvalidateOlderFiles is true in the INI file, but the archive doesn't have directory or file strings.  This is go"
      "ing to be really really slow.");
    FirstFileA = FindFirstFileA((LPCSTR)(v2 + 0x3C), &FindFileData); /*0x42e530*/
    if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x42e539*/
      Close = (const char *)PrintError("Could not find Archive %s to get file time.", (const char *)(v2 + 0x3C)); /*0x42e541*/
    else
      Close = (const char *)FindClose(FirstFileA); /*0x42e54c*/
    BSA_InvalidateAgainstLooseFiles(Close, v2, off_B0555C[0], EmptyString, &FindFileData.ftLastWriteTime); /*0x42e565*/
  }
  return v26; /*0x42e304*/
}
