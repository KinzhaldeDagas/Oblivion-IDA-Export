const char *__userpurge Savegame_Rename@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        int a10,
        char *a11,
        int a12)
{
  const char *v12; // ebx
  int v13; // ebp
  char *v14; // eax
  char v15; // cl
  char *v16; // eax
  char v17; // cl
  int v18; // eax
  CHAR v19; // cl
  unsigned int v20; // eax
  char *v21; // edi
  int v23; // eax
  char v24; // bl
  int v25; // ebp
  int v26; // eax
  char v27; // cl
  unsigned int v28; // eax
  char *v29; // edi
  unsigned int v31; // eax
  char *v32; // edi
  int v34; // edx
  char *v35; // eax
  int v37; // eax
  char v38; // cl
  char *v39; // eax
  int v41; // eax
  char v42; // cl
  char *v43; // eax
  char *v44; // edx
  char v45; // cl
  unsigned int v46; // kr00_4
  const char *result; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  const char *v50; // esi
  void (__thiscall *v51)(const char *, _DWORD, _DWORD); // eax
  size_t v52; // [esp+8h] [ebp-64Ch]
  int v53; // [esp+20h] [ebp-634h]
  int v55; // [esp+28h] [ebp-62Ch] BYREF
  char OldFilename[256]; // [esp+2Ch] [ebp-628h] BYREF
  char Str1[4]; // [esp+12Ch] [ebp-528h] BYREF
  char Str[260]; // [esp+130h] [ebp-524h] BYREF
  char v59[260]; // [esp+234h] [ebp-420h] BYREF
  CHAR FileName[260]; // [esp+338h] [ebp-31Ch] BYREF
  char v61[260]; // [esp+43Ch] [ebp-218h] BYREF
  CHAR PathName[260]; // [esp+540h] [ebp-114h] BYREF
  int v63; // [esp+650h] [ebp-4h]

  v12 = (const char *)a10;
  v13 = a12;
  v55 = a10;
  if ( a10 )
  {
    v14 = (char *)(a10 + 0x3C);
    do
    {
      v15 = *v14;
      v59[(_DWORD)v14 - 0x3C - a10] = *v14;
      ++v14;
    }
    while ( v15 );
  }
  else
  {
    v16 = a11;
    if ( a11 )
    {
      do
      {
        v17 = *v16;
        v16[v61 - a11] = *v16;
        ++v16;
      }
      while ( v17 );
    }
    else
    {
      sub_45D920(a1, a2, st4_0, st5_0, st6_0, a6, a7, a8, a9, (int)v61);
    }
    _sprintf(v59, "%s%s%s.ess", word_B3F280, lpString2, v61);
    if ( !a12 )
    {
      v18 = 0;
      do
      {
        v19 = word_B3F280[v18];
        PathName[v18++] = v19;
      }
      while ( v19 );
      v20 = &lpString2[strlen(lpString2) + 1] - lpString2;
      v21 = &v61[0x103];
      while ( *++v21 )
        ;
      qmemcpy(v21, lpString2, v20);
      CreateDirectoryA(PathName, 0);
      v23 = dword_B05BC4;
      if ( dword_B05BC4 > 0xA )
        v23 = 0xA;
      v53 = v23 - 1;
      if ( v23 - 1 >= 0 )
      {
        v24 = byte_A3AAE4;
        v25 = dword_A3AAE0;
        do
        {
          v26 = 0;
          do
          {
            v27 = word_B3F280[v26];
            OldFilename[v26++] = v27;
          }
          while ( v27 );
          v28 = &lpString2[strlen(lpString2) + 1] - lpString2;
          v29 = (char *)&v55 + 3;
          while ( *++v29 )
            ;
          qmemcpy(v29, lpString2, v28);
          v31 = &v61[strlen(v61) + 1] - v61;
          v32 = (char *)&v55 + 3;
          while ( *++v32 )
            ;
          qmemcpy(v32, v61, v31);
          if ( v53 > 0 )
          {
            v34 = v53;
            do
            {
              v35 = (char *)&v55 + 3;
              while ( *++v35 )
                ;
              --v34;
              *(_DWORD *)v35 = v25;
              v35[4] = v24;
            }
            while ( v34 );
          }
          v37 = 0;
          do
          {
            v38 = OldFilename[v37];
            FileName[v37++] = v38;
          }
          while ( v38 );
          v39 = &v59[0x103];
          while ( *++v39 )
            ;
          *(_DWORD *)v39 = v25;
          v39[4] = v24;
          if ( !v53 )
          {
            v41 = 0;
            do
            {
              v42 = v59[v41];
              OldFilename[v41++] = v42;
            }
            while ( v42 );
          }
          if ( OBSE_g_FileFinder )
          {
            if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, OldFilename, 0, 0, 0xFFFFFFFF) )
            {
              if ( OBSE_g_FileFinder )
              {
                if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, FileName, 0, 0, 0xFFFFFFFF) )
                  DeleteFileA(FileName);
              }
              rename(OldFilename, FileName);
            }
            v25 = dword_A3AAE0;
            v24 = byte_A3AAE4;
          }
          --v53;
        }
        while ( v53 >= 0 );
        v12 = (const char *)v55;
        v13 = a12;
      }
    }
  }
  switch ( v13 )
  {
    case 0:
      if ( v12 )
      {
        v43 = strrchr(v12 + 0x3C, 0x5C) + 1;
        v44 = (char *)(Str - v43);
        do
        {
          v45 = *v43;
          v43[(_DWORD)v44] = *v43;
          ++v43;
        }
        while ( v45 );
        v46 = strlen(Str);
        if ( v46 > 4 )
        {
          LODWORD(v52) = 4;
          if ( !_strnicmp(&Str1[v46], ".ess", v52) )
            Str1[v46] = 0;
        }
        DeleteSavegame(a1, a2, st4_0, st5_0, st6_0, a6, a7, a8, a9, v12, 0);
        LODWORD(v52) = 5;
        if ( !_strnicmp(Str, "Save ", v52) || strstr(Str, "autosave") )
          result = Savegame_Rename((int)a1, a2, st4_0, st5_0, st6_0, a6, a7, a8, a9, 0, 0, 0);
        else
          result = Savegame_Rename((int)a1, a2, st4_0, st5_0, st6_0, a6, a7, a8, a9, 0, Str, 0);
      }
      else
      {
        v48 = (_DWORD *)FormHeapAlloc(0x154u);
        v63 = 0;
        if ( v48 )
          result = (const char *)BSFile_constr(v48, v59, 1, 0x20000, 0);
        else
          result = 0;
      }
      break;
    case 1:
      v49 = (_DWORD *)FormHeapAlloc(0x154u);
      v63 = 1;
      if ( v49 )
        v50 = (const char *)BSFile_constr(v49, v59, 0, 0x20000, 0);
      else
        v50 = 0;
      v51 = *(void (__thiscall **)(const char *, _DWORD, _DWORD))(*(_DWORD *)v50 + 0x18);
      v63 = 0xFFFFFFFF;
      v51(v50, 0, 0);
      result = v50;
      break;
    case 2:
      (*(void (__thiscall **)(const char *, _DWORD, _DWORD))(*(_DWORD *)v12 + 0x18))(v12, 0, 0);
      goto Savegame_Rename___def_45F356;
    default:
Savegame_Rename___def_45F356:
      result = v12;
      break;
  }
  return result;
}
