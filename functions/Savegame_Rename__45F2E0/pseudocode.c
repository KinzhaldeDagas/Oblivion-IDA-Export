BSFile *__thiscall TESSaveLoadGame_ResolveSaveFile(
        TESSaveLoadGame_SerializationView *this,
        BSFile *existingFile,
        const char *stem,
        int mode)
{
  int v4; // edi
  int v5; // esi
  double v6; // st0
  double v7; // st1
  double v8; // st2
  double v9; // st3
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v13; // st7
  const char *v14; // ebx
  int v15; // ebp
  char *v16; // eax
  char v17; // cl
  const char *v18; // eax
  char v19; // cl
  int v20; // eax
  CHAR v21; // cl
  unsigned int v22; // eax
  char *v23; // edi
  int v25; // eax
  char v26; // bl
  int v27; // ebp
  int v28; // eax
  char v29; // cl
  unsigned int v30; // eax
  char *v31; // edi
  unsigned int v33; // eax
  char *v34; // edi
  int v36; // edx
  char *v37; // eax
  int v39; // eax
  char v40; // cl
  char *v41; // eax
  int v43; // eax
  char v44; // cl
  char *v45; // eax
  char *v46; // edx
  char v47; // cl
  unsigned int v48; // kr00_4
  BSFile *result; // eax
  _DWORD *v50; // eax
  _DWORD *v51; // eax
  BSFile *v52; // esi
  void (__thiscall *v53)(BSFile *, _DWORD, _DWORD); // eax
  size_t v54; // [esp+8h] [ebp-64Ch]
  int v55; // [esp+20h] [ebp-634h]
  BSFile *v57; // [esp+28h] [ebp-62Ch] BYREF
  char OldFilename[256]; // [esp+2Ch] [ebp-628h] BYREF
  char Str1[4]; // [esp+12Ch] [ebp-528h] BYREF
  char Str[260]; // [esp+130h] [ebp-524h] BYREF
  char v61[260]; // [esp+234h] [ebp-420h] BYREF
  CHAR FileName[260]; // [esp+338h] [ebp-31Ch] BYREF
  char v63[260]; // [esp+43Ch] [ebp-218h] BYREF
  CHAR PathName[260]; // [esp+540h] [ebp-114h] BYREF
  int v65; // [esp+650h] [ebp-4h]

  v14 = (const char *)existingFile; /*0x45f31b*/
  v15 = mode; /*0x45f324*/
  v57 = existingFile; /*0x45f32f*/
  if ( existingFile ) /*0x45f333*/
  {
    v16 = (char *)existingFile + 0x3C; /*0x45f335*/
    do /*0x45f34b*/
    {
      v17 = *v16; /*0x45f341*/
      v16[v61 - ((char *)existingFile + 0x3C)] = *v16; /*0x45f343*/
      ++v16; /*0x45f346*/
    }
    while ( v17 ); /*0x45f34b*/
  }
  else
  {
    v18 = stem; /*0x45f35d*/
    if ( stem ) /*0x45f366*/
    {
      do /*0x45f38a*/
      {
        v19 = *v18; /*0x45f380*/
        v18[v63 - stem] = *v18; /*0x45f382*/
        ++v18; /*0x45f385*/
      }
      while ( v19 ); /*0x45f38a*/
    }
    else
    {
      sub_45D920(this, v13, v10, v11, v12, v9, v6, v7, v8, (int)v63); /*0x45f370*/
    }
    _sprintf(v4, v5, v61, "%s%s%s.ess", unk_B3F280, lpString2, v63);// ContinueFromLastSave decode: Savegame_Rename builds full path as GameSaveRoot + SaveSubdir + stem + .ess using globals 0x00B3F280 and *(0x00B05564). /*0x45f3ad*/
    if ( !mode ) /*0x45f3b7*/
    {
      v20 = 0; /*0x45f3b9*/
      do /*0x45f3d2*/
      {
        v21 = unk_B3F280[v20]; /*0x45f3c0*/
        PathName[v20++] = v21; /*0x45f3c6*/
      }
      while ( v21 ); /*0x45f3d2*/
      v22 = &lpString2[strlen(lpString2) + 1] - lpString2; /*0x45f3f0*/
      v23 = &v63[0x103]; /*0x45f3f2*/
      while ( *++v23 ) /*0x45f3fd*/
        ; /*0x45f3f5*/
      qmemcpy(v23, lpString2, v22); /*0x45f406*/
      CreateDirectoryA(PathName, 0); /*0x45f419*/
      v25 = dword_B05BC4; /*0x45f41f*/
      if ( dword_B05BC4 > 0xA ) /*0x45f427*/
        v25 = 0xA; /*0x45f429*/
      v55 = v25 - 1; /*0x45f431*/
      if ( v25 - 1 >= 0 ) /*0x45f435*/
      {
        v26 = byte_A3AAE4; /*0x45f43b*/
        v27 = dword_A3AAE0; /*0x45f441*/
        do /*0x45f5d9*/
        {
          v28 = 0; /*0x45f450*/
          do /*0x45f461*/
          {
            v29 = unk_B3F280[v28]; /*0x45f452*/
            OldFilename[v28++] = v29; /*0x45f458*/
          }
          while ( v29 ); /*0x45f461*/
          v30 = &lpString2[strlen(lpString2) + 1] - lpString2; /*0x45f47d*/
          v31 = (char *)&v57 + 3; /*0x45f47f*/
          while ( *++v31 ) /*0x45f48a*/
            ; /*0x45f482*/
          qmemcpy(v31, lpString2, v30); /*0x45f493*/
          v33 = &v63[strlen(v63) + 1] - v63; /*0x45f4b2*/
          v34 = (char *)&v57 + 3; /*0x45f4b6*/
          while ( *++v34 ) /*0x45f4c8*/
            ; /*0x45f4c0*/
          qmemcpy(v34, v63, v33); /*0x45f4cf*/
          if ( v55 > 0 ) /*0x45f4dd*/
          {
            v36 = v55; /*0x45f4df*/
            do /*0x45f502*/
            {
              v37 = (char *)&v57 + 3; /*0x45f4e7*/
              while ( *++v37 ) /*0x45f4f8*/
                ; /*0x45f4f0*/
              --v36; /*0x45f4fa*/
              *(_DWORD *)v37 = v27; /*0x45f4fd*/
              v37[4] = v26; /*0x45f4ff*/
            }
            while ( v36 ); /*0x45f502*/
          }
          v39 = 0; /*0x45f504*/
          do /*0x45f520*/
          {
            v40 = OldFilename[v39]; /*0x45f510*/
            FileName[v39++] = v40; /*0x45f514*/
          }
          while ( v40 ); /*0x45f520*/
          v41 = &v61[0x103]; /*0x45f529*/
          while ( *++v41 ) /*0x45f538*/
            ; /*0x45f530*/
          *(_DWORD *)v41 = v27; /*0x45f53f*/
          v41[4] = v26; /*0x45f541*/
          if ( !v55 ) /*0x45f544*/
          {
            v43 = 0; /*0x45f546*/
            do /*0x45f560*/
            {
              v44 = v61[v43]; /*0x45f550*/
              OldFilename[v43++] = v44; /*0x45f557*/
            }
            while ( v44 ); /*0x45f560*/
          }
          if ( MEMORY[0xB33A04] ) /*0x45f562*/
          {
            if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], OldFilename, 0, 0, 0xFFFFFFFF) ) /*0x45f57c*/
            {
              if ( MEMORY[0xB33A04] ) /*0x45f582*/
              {
                if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], FileName, 0, 0, 0xFFFFFFFF) ) /*0x45f59f*/
                  DeleteFileA(FileName); /*0x45f5ad*/
              }
              rename(OldFilename, FileName); /*0x45f5c0*/
            }
            v27 = dword_A3AAE0; /*0x45f5c8*/
            v26 = byte_A3AAE4; /*0x45f5ce*/
          }
          --v55; /*0x45f5d4*/
        }
        while ( v55 >= 0 ); /*0x45f5d9*/
        v14 = (const char *)v57; /*0x45f5df*/
        v15 = mode; /*0x45f5e3*/
      }
    }
  }
  switch ( v15 ) /*0x45f356*/
  {
    case 0: /*0x45f356*/
      if ( v14 ) /*0x45f5f1*/
      {
        v45 = strrchr(v14 + 0x3C, 0x5C) + 1; /*0x45f602*/
        v46 = (char *)(Str - v45); /*0x45f60f*/
        do /*0x45f61b*/
        {
          v47 = *v45; /*0x45f611*/
          v45[(_DWORD)v46] = *v45; /*0x45f613*/
          ++v45; /*0x45f616*/
        }
        while ( v47 ); /*0x45f61b*/
        v48 = strlen(Str); /*0x45f61d*/
        if ( v48 > 4 ) /*0x45f635*/
        {
          LODWORD(v54) = 4; /*0x45f637*/
          if ( !_strnicmp(&Str1[v48], ".ess", v54) ) /*0x45f646*/
            Str1[v48] = 0; /*0x45f652*/
        }
        DeleteSavegame(this, v13, v10, v11, v12, v9, v6, v7, v8, v14, 0); /*0x45f65d*/
        LODWORD(v54) = 5; /*0x45f662*/
        if ( !_strnicmp(Str, "Save ", v54) || strstr(Str, "autosave") ) /*0x45f68a*/
          result = TESSaveLoadGame_ResolveSaveFile(this, 0, 0, 0); /*0x45f6b4*/
        else
          result = TESSaveLoadGame_ResolveSaveFile(this, 0, Str, 0); /*0x45f6a2*/
      }
      else
      {
        v50 = (_DWORD *)FormHeapAlloc(0x154u); /*0x45f6c3*/
        v65 = 0; /*0x45f6d1*/
        if ( v50 ) /*0x45f6dc*/
          result = (BSFile *)BSFile_constr(v50, v61, 1, 0x20000, 0); /*0x45f6f1*/
        else
          result = 0; /*0x45f6f8*/
      }
      break; /*0x45f6a7*/
    case 1: /*0x45f356*/
      v51 = (_DWORD *)FormHeapAlloc(0x154u); /*0x45f701*/
      v65 = 1; /*0x45f70f*/
      if ( v51 ) /*0x45f71a*/
        v52 = (BSFile *)BSFile_constr(v51, v61, 0, 0x20000, 0); /*0x45f734*/
      else
        v52 = 0; /*0x45f738*/
      v53 = *(void (__thiscall **)(BSFile *, _DWORD, _DWORD))(*(_DWORD *)v52 + 0x18); /*0x45f73c*/
      v65 = 0xFFFFFFFF; /*0x45f745*/
      v53(v52, 0, 0); /*0x45f750*/
      result = v52; /*0x45f752*/
      break; /*0x45f754*/
    case 2: /*0x45f356*/
      (*(void (__thiscall **)(const char *, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x18))(v14, 0, 0); /*0x45f761*/
      goto Savegame_Rename___def_45F356; /*0x45f761*/
    default:
Savegame_Rename___def_45F356:
      result = (BSFile *)v14; /*0x45f763*/
      break; /*0x45f763*/
  }
  return result; /*0x45f765*/
}
