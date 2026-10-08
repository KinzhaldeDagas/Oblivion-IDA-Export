Archive *__thiscall Archive::Archive(Archive *this, const char *ArgList, int a3, char a4, char a5)
{
  const char *v5; // ebx
  char *v7; // edi
  unsigned int v8; // ebp
  bool v9; // zf
  void (__cdecl *v10)(Archive *, char *, int, int *, int); // edx
  int v11; // ebp
  void *v12; // eax
  void *v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // edi
  int v20; // edi
  int v21; // ebx
  void (__cdecl *v22)(Archive *, unsigned __int8 *, int, int *, int); // edx
  int v23; // ebp
  void *v24; // eax
  void *v25; // edi
  void (__cdecl *v26)(Archive *, void *, int, int *, int); // eax
  unsigned int v27; // eax
  bool v28; // cf
  int v29; // edi
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // ebp
  unsigned int i; // ecx
  unsigned int v34; // eax
  int v35; // edx
  DWORD v36; // edi
  int v37; // ebp
  int v38; // eax
  int v39; // ebx
  int v40; // edi
  int v42; // [esp-4h] [ebp-17Ch]
  unsigned int v43; // [esp+4h] [ebp-174h]
  unsigned __int8 v44; // [esp+1Fh] [ebp-159h] BYREF
  unsigned int v45; // [esp+20h] [ebp-158h]
  int v46; // [esp+24h] [ebp-154h] BYREF
  int v47; // [esp+28h] [ebp-150h] BYREF
  const char *v48; // [esp+2Ch] [ebp-14Ch]
  DWORD TickCount; // [esp+30h] [ebp-148h]
  Archive *v50; // [esp+34h] [ebp-144h]
  int v51[12]; // [esp+38h] [ebp-140h] BYREF
  _BYTE destination[256]; // [esp+68h] [ebp-110h] BYREF
  int v53; // [esp+174h] [ebp-4h]

  v5 = ArgList; /*0x42eebb*/
  v7 = (char *)this + 0x154; /*0x42eec4*/
  v50 = this; /*0x42eecc*/
  v48 = ArgList; /*0x42eed0*/
  BSArchive__constr((_DWORD *)this + 0x55); /*0x42eed4*/
  v8 = 0; /*0x42eee0*/
  *((_DWORD *)v7 + 9) = 0; /*0x42eee8*/
  BSFile_constr(this, ArgList, 0, a3, 0); /*0x42eeeb*/
  v53 = 0; /*0x42eef6*/
  *(_DWORD *)this = &Archive::`vftable'{for `Archive'}; /*0x42eefd*/
  NiInitalizeCriticalSection((LPCRITICAL_SECTION)this + 0x10); /*0x42ef03*/
  v9 = *((_BYTE *)this + 0x24) == 0; /*0x42ef0b*/
  LOBYTE(v53) = 1; /*0x42ef0f*/
  *((_DWORD *)this + 0x63) = 0xFFFFFFFF; /*0x42ef17*/
  *((_DWORD *)this + 0x64) = 0xFFFFFFFF; /*0x42ef1d*/
  *((_DWORD *)this + 0x5E) = 0; /*0x42ef23*/
  *((_DWORD *)this + 0x66) = 0; /*0x42ef29*/
  *((_DWORD *)this + 0x67) = 0; /*0x42ef2f*/
  *((_DWORD *)this + 0x68) = 0; /*0x42ef35*/
  *((_DWORD *)this + 0x69) = 0; /*0x42ef3b*/
  *((_BYTE *)this + 0x194) = 0; /*0x42ef41*/
  *((_DWORD *)this + 0x6A) = 0; /*0x42ef48*/
  *((_DWORD *)this + 0x62) = 0; /*0x42ef4e*/
  *((_BYTE *)this + 0x1AC) = 0; /*0x42ef54*/
  if ( !v9 )
  {
    if ( a4 ) /*0x42ef69*/
      *((_BYTE *)this + 0x194) = 8; /*0x42ef6b*/
    BSFile_SetByteSwap(this, 0); /*0x42ef75*/
    v10 = *((void (__cdecl **)(Archive *, char *, int, int *, int))this + 1); /*0x42ef7a*/
    v46 = 1; /*0x42ef88*/
    v10(this, v7, 0x24, &v46, 1); /*0x42ef90*/
    if ( *(_UNKNOWN **)v7 == &loc_415342 && *((_DWORD *)this + 0x56) <= 0x67u )
    {
      if ( (*((_BYTE *)this + 0x194) & 8) == 0 )
      {
        TickCount = GetTickCount(); /*0x42efc7*/
        PrintToLog___("Loading archive %s", ArgList); /*0x42efcb*/
        v11 = *((_DWORD *)this + 0x59); /*0x42efd0*/
        v12 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v11 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v11);
        v13 = v12; /*0x42efee*/
        v47 = (int)v12; /*0x42eff3*/
        LOBYTE(v53) = 2; /*0x42eff9*/
        if ( v12 ) /*0x42f001*/
          sub_401080(v12, 0x10, v11, (void *(__thiscall *)(void *))BSAEntry_constr); /*0x42f00c*/
        else
          v13 = 0; /*0x42f013*/
        v43 = 0x10 * *((_DWORD *)this + 0x59); /*0x42f01e*/
        LOBYTE(v53) = 1; /*0x42f022*/
        *((_DWORD *)this + 0x5E) = v13; /*0x42f02a*/
        Archive_ReadBytes(this, v13, v43); /*0x42f030*/
        if ( (*((_BYTE *)this + 0x160) & 1) != 0 )
        {
          if ( sub_42BD70(this) )
          {
            v14 = *((_DWORD *)this + 0x5B); /*0x42f049*/
            *((_BYTE *)this + 0x194) |= 0x10u; /*0x42f04f*/
            v15 = FormHeapAlloc(v14); /*0x42f057*/
            v16 = *((_DWORD *)this + 0x59); /*0x42f05c*/
            *((_DWORD *)this + 0x66) = v15; /*0x42f062*/
            *((_DWORD *)this + 0x67) = FormHeapAlloc((unsigned __int64)v16 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v16);
          }
        }
        if ( (*((_DWORD *)this + 0x58) & 2) != 0 )
        {
          if ( sub_42BD70(this) )
          {
            v17 = *((_DWORD *)this + 0x5C); /*0x42f0a0*/
            *((_BYTE *)this + 0x194) |= 0x20u; /*0x42f0a6*/
            v18 = FormHeapAlloc(v17); /*0x42f0ae*/
            v19 = *((_DWORD *)this + 0x59); /*0x42f0b3*/
            *((_DWORD *)this + 0x68) = v18; /*0x42f0b9*/
            *((_DWORD *)this + 0x69) = FormHeapAlloc((unsigned __int64)v19 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v19);
          }
        }
        v20 = 0; /*0x42f0e0*/
        v9 = *((_DWORD *)this + 0x59) == 0; /*0x42f0e2*/
        v46 = 0; /*0x42f0e8*/
        v45 = 0; /*0x42f0ec*/
        if ( !v9 )
        {
          v21 = 0; /*0x42f0f6*/
          while ( 1 )
          {
            if ( (*((_BYTE *)this + 0x160) & 1) != 0 ) /*0x42f10b*/
            {
              v22 = *((void (__cdecl **)(Archive *, unsigned __int8 *, int, int *, int))this + 1); /*0x42f10d*/
              v47 = 1; /*0x42f11f*/
              v22(this, &v44, 1, &v47, 1); /*0x42f127*/
              if ( sub_42BD70(this) ) /*0x42f12e*/
              {
                Archive_ReadBytes(this, (void *)(v20 + *((_DWORD *)this + 0x66)), v44); /*0x42f148*/
                *(_DWORD *)(*((_DWORD *)this + 0x67) + 4 * v45) = v20; /*0x42f157*/
                v46 = v44 + v20; /*0x42f161*/
              }
              else
              {
                Archive_ReadBytes(this, destination, v44); /*0x42f174*/
              }
            }
            v23 = *(_DWORD *)(*((_DWORD *)this + 0x5E) + v21 + 8); /*0x42f17f*/
            v24 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v23 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v23);
            v25 = v24; /*0x42f19b*/
            v47 = (int)v24; /*0x42f1a0*/
            LOBYTE(v53) = 3; /*0x42f1a6*/
            if ( v24 ) /*0x42f1ae*/
              sub_401080(v24, 0x10, v23, (void *(__thiscall *)(void *))BSAEntry_constr); /*0x42f1b9*/
            else
              v25 = 0; /*0x42f1c0*/
            v26 = *((void (__cdecl **)(Archive *, void *, int, int *, int))this + 1); /*0x42f1d3*/
            v42 = 0x10 * *(_DWORD *)(*((_DWORD *)this + 0x5E) + v21 + 8); /*0x42f1d9*/
            LOBYTE(v53) = 1; /*0x42f1dc*/
            v47 = 1; /*0x42f1e4*/
            v26(this, v25, v42, &v47, 1); /*0x42f1ec*/
            v27 = v45; /*0x42f1ee*/
            *(_DWORD *)(*((_DWORD *)this + 0x5E) + v21 + 0xC) = v25; /*0x42f1f8*/
            ++v27; /*0x42f1fc*/
            v21 += 0x10; /*0x42f202*/
            v28 = v27 < *((_DWORD *)this + 0x59); /*0x42f205*/
            v45 = v27; /*0x42f20b*/
            if ( !v28 ) /*0x42f20f*/
              break; /*0x42f20f*/
            v20 = v46; /*0x42f100*/
          }
          v5 = v48; /*0x42f215*/
        }
        v29 = 0; /*0x42f221*/
        if ( (*((_DWORD *)this + 0x58) & 2) != 0 )
        {
          v30 = *((_DWORD *)this + 0xC); /*0x42f22c*/
          if ( v30 == 0xFFFFFFFF ) /*0x42f232*/
            v30 = *((_DWORD *)this + 0x52); /*0x42f234*/
          *((_DWORD *)this + 0x62) = v30; /*0x42f23c*/
          if ( sub_42BD70(this) )
          {
            Archive_ReadBytes(this, *((void **)this + 0x68), *((_DWORD *)this + 0x5C)); /*0x42f25f*/
            v31 = 0; /*0x42f264*/
            v9 = *((_DWORD *)this + 0x59) == 0; /*0x42f266*/
            v45 = 0; /*0x42f26c*/
            if ( !v9 )
            {
              v32 = 0; /*0x42f276*/
              do
              {
                *(_DWORD *)(*((_DWORD *)this + 0x69) + 4 * v31) = FormHeapAlloc(
                                                                    (unsigned __int64)*(unsigned int *)(*((_DWORD *)this + 0x5E) + v32 + 8) >> 0x1E != 0
                                                                  ? 0xFFFFFFFF
                                                                  : 4 * *(_DWORD *)(*((_DWORD *)this + 0x5E) + v32 + 8));
                for ( i = 0; i < *(_DWORD *)(*((_DWORD *)this + 0x5E) + v32 + 8); ++i ) /*0x42f2b4*/
                {
                  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0x69) + 4 * v31) + 4 * i) = v29; /*0x42f2c9*/
                  v34 = strlen((const char *)(v29 + *((_DWORD *)this + 0x68))); /*0x42f2d4*/
                  v31 = v45; /*0x42f2e2*/
                  v29 += v34 + 1; /*0x42f2e6*/
                }
                ++v31; /*0x42f2f9*/
                v32 += 0x10; /*0x42f2fc*/
                v28 = v31 < *((_DWORD *)this + 0x59); /*0x42f2ff*/
                v45 = v31; /*0x42f305*/
              }
              while ( v28 );
            }
            v5 = v48; /*0x42f30f*/
          }
        }
        TickCount = GetTickCount() - TickCount; /*0x42f31f*/
        PrintToLog___( /*0x42f34f*/
          "Finished loading archive %s containing %i directories and %i files in %f seconds",
          v5,
          *((_DWORD *)this + 0x59),
          *((_DWORD *)this + 0x5A),
          (double)TickCount / 1000.0);
        v8 = 0; /*0x42f357*/
      }
      if ( _stat64i32((const unsigned __int8 *)this + 0x3C, (int)v51) == 0xFFFFFFFF ) /*0x42f36d*/
        PrintError("Could not find Archive %s to get filetime.", (const char *)this + 0x3C); /*0x42f375*/
      v9 = (*((_BYTE *)this + 0x194) & 8) == 0; /*0x42f37d*/
      v35 = v51[9]; /*0x42f388*/
      *((_DWORD *)this + 0x60) = v51[8]; /*0x42f38c*/
      *((_DWORD *)this + 0x61) = v35; /*0x42f392*/
      if ( v9 ) /*0x42f398*/
      {
        if ( bInvalidateOlderFiles_Archive ) /*0x42f3a5*/
        {
          v36 = GetTickCount(); /*0x42f3b3*/
          PrintToLog___("Invalidating files in archive %s", v5); /*0x42f3b5*/
          v37 = Archive_InvalidateOlderFiles((int)this); /*0x42f3c4*/
          TickCount = GetTickCount() - v36; /*0x42f3d0*/
          PrintToLog___( /*0x42f3f3*/
            "Finished invalidating %i files in archive %s in %f seconds",
            v37,
            v5,
            (double)TickCount / 1000.0);
          v8 = 0; /*0x42f3fb*/
        }
        if ( a5 ) /*0x42f405*/
        {
          v38 = 0; /*0x42f407*/
          v9 = *((_DWORD *)this + 0x59) == 0; /*0x42f409*/
          v46 = 0; /*0x42f40f*/
          if ( !v9 ) /*0x42f413*/
          {
            while ( 1 ) /*0x42f422*/
            {
              if ( *((_DWORD *)this + 0x59) ) /*0x42f422*/
              {
                v39 = 0x10 * v38; /*0x42f42d*/
                v40 = 0; /*0x42f430*/
                do /*0x42f45e*/
                {
                  ArchiveManager_InvalidatEFilesInAllBSA( /*0x42f44a*/
                    (unsigned int *)(v39 + *((_DWORD *)this + 0x5E)),
                    (unsigned int *)(v40 + *(_DWORD *)(*((_DWORD *)this + 0x5E) + v39 + 0xC)),
                    *((_WORD *)this + 0xBA));
                  ++v8; /*0x42f44f*/
                  v40 += 0x10; /*0x42f455*/
                }
                while ( v8 < *((_DWORD *)this + 0x59) ); /*0x42f45e*/
                v38 = v46; /*0x42f460*/
              }
              v28 = (unsigned int)++v38 < *((_DWORD *)this + 0x59); /*0x42f467*/
              v46 = v38; /*0x42f46d*/
              if ( !v28 ) /*0x42f471*/
                break; /*0x42f471*/
              v8 = 0; /*0x42f420*/
            }
          }
        }
      }
      sub_4303F0((HINSTANCE *)this, (HINSTANCE)0x2800); /*0x42f47a*/
    }
    else
    {
      *((_BYTE *)this + 0x194) |= 1u; /*0x42f481*/
    }
  }
  return this; /*0x42f48a*/
}
