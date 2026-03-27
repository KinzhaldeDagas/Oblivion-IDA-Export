Archive *__thiscall Archive::Archive(Archive *this, const char *ArgList, int a3, char a4, char a5)
{
  const char *v5; // ebx
  char *v7; // edi
  unsigned int v8; // ebp
  bool v9; // zf
  void (__cdecl *v10)(Archive *, char *, int, int *, int); // edx
  int v11; // ebp
  void *v12; // eax
  int v13; // edi
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
  int v43; // [esp+4h] [ebp-174h]
  unsigned __int8 v44; // [esp+1Fh] [ebp-159h] BYREF
  unsigned int v45; // [esp+20h] [ebp-158h]
  int v46; // [esp+24h] [ebp-154h] BYREF
  int v47; // [esp+28h] [ebp-150h] BYREF
  const char *v48; // [esp+2Ch] [ebp-14Ch]
  DWORD TickCount; // [esp+30h] [ebp-148h]
  Archive *v50; // [esp+34h] [ebp-144h]
  int v51[12]; // [esp+38h] [ebp-140h] BYREF
  _BYTE v52[256]; // [esp+68h] [ebp-110h] BYREF
  int v53; // [esp+174h] [ebp-4h]

  v5 = ArgList;
  v7 = (char *)this + 0x154;
  v50 = this;
  v48 = ArgList;
  BSArchive__constr((_DWORD *)this + 0x55);
  v8 = 0;
  *((_DWORD *)v7 + 9) = 0;
  BSFile_constr(this, ArgList, 0, a3, 0);
  v53 = 0;
  *(_DWORD *)this = &Archive::`vftable'{for `Archive'};
  NiInitalizeCriticalSection((LPCRITICAL_SECTION)this + 0x10);
  v9 = *((_BYTE *)this + 0x24) == 0;
  LOBYTE(v53) = 1;
  *((_DWORD *)this + 0x63) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x64) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x5E) = 0;
  *((_DWORD *)this + 0x66) = 0;
  *((_DWORD *)this + 0x67) = 0;
  *((_DWORD *)this + 0x68) = 0;
  *((_DWORD *)this + 0x69) = 0;
  *((_BYTE *)this + 0x194) = 0;
  *((_DWORD *)this + 0x6A) = 0;
  *((_DWORD *)this + 0x62) = 0;
  *((_BYTE *)this + 0x1AC) = 0;
  if ( !v9 )
  {
    if ( a4 )
      *((_BYTE *)this + 0x194) = 8;
    BSFile_SetByteSwap(this, 0);
    v10 = *((void (__cdecl **)(Archive *, char *, int, int *, int))this + 1);
    v46 = 1;
    v10(this, v7, 0x24, &v46, 1);
    if ( *(_UNKNOWN **)v7 == &loc_415342 && *((_DWORD *)this + 0x56) <= 0x67u )
    {
      if ( (*((_BYTE *)this + 0x194) & 8) == 0 )
      {
        TickCount = GetTickCount();
        PrintToLog___("Loading archive %s", ArgList);
        v11 = *((_DWORD *)this + 0x59);
        v12 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v11 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v11);
        v13 = (int)v12;
        v47 = (int)v12;
        LOBYTE(v53) = 2;
        if ( v12 )
          sub_401080(v12, 0x10, v11, (void *(__thiscall *)(void *))BSAEntry_constr);
        else
          v13 = 0;
        v43 = 0x10 * *((_DWORD *)this + 0x59);
        LOBYTE(v53) = 1;
        *((_DWORD *)this + 0x5E) = v13;
        ReadFile__((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this, v13, v43);
        if ( (*((_BYTE *)this + 0x160) & 1) != 0 )
        {
          if ( sub_42BD70(this) )
          {
            v14 = *((_DWORD *)this + 0x5B);
            *((_BYTE *)this + 0x194) |= 0x10u;
            v15 = FormHeapAlloc(v14);
            v16 = *((_DWORD *)this + 0x59);
            *((_DWORD *)this + 0x66) = v15;
            *((_DWORD *)this + 0x67) = FormHeapAlloc((unsigned __int64)v16 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v16);
          }
        }
        if ( (*((_DWORD *)this + 0x58) & 2) != 0 )
        {
          if ( sub_42BD70(this) )
          {
            v17 = *((_DWORD *)this + 0x5C);
            *((_BYTE *)this + 0x194) |= 0x20u;
            v18 = FormHeapAlloc(v17);
            v19 = *((_DWORD *)this + 0x59);
            *((_DWORD *)this + 0x68) = v18;
            *((_DWORD *)this + 0x69) = FormHeapAlloc((unsigned __int64)v19 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v19);
          }
        }
        v20 = 0;
        v9 = *((_DWORD *)this + 0x59) == 0;
        v46 = 0;
        v45 = 0;
        if ( !v9 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( (*((_BYTE *)this + 0x160) & 1) != 0 )
            {
              v22 = *((void (__cdecl **)(Archive *, unsigned __int8 *, int, int *, int))this + 1);
              v47 = 1;
              v22(this, &v44, 1, &v47, 1);
              if ( sub_42BD70(this) )
              {
                ReadFile__(
                  (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this,
                  v20 + *((_DWORD *)this + 0x66),
                  v44);
                *(_DWORD *)(*((_DWORD *)this + 0x67) + 4 * v45) = v20;
                v46 = v44 + v20;
              }
              else
              {
                ReadFile__((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this, (int)v52, v44);
              }
            }
            v23 = *(_DWORD *)(*((_DWORD *)this + 0x5E) + v21 + 8);
            v24 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v23 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v23);
            v25 = v24;
            v47 = (int)v24;
            LOBYTE(v53) = 3;
            if ( v24 )
              sub_401080(v24, 0x10, v23, (void *(__thiscall *)(void *))BSAEntry_constr);
            else
              v25 = 0;
            v26 = *((void (__cdecl **)(Archive *, void *, int, int *, int))this + 1);
            v42 = 0x10 * *(_DWORD *)(*((_DWORD *)this + 0x5E) + v21 + 8);
            LOBYTE(v53) = 1;
            v47 = 1;
            v26(this, v25, v42, &v47, 1);
            v27 = v45;
            *(_DWORD *)(*((_DWORD *)this + 0x5E) + v21 + 0xC) = v25;
            ++v27;
            v21 += 0x10;
            v28 = v27 < *((_DWORD *)this + 0x59);
            v45 = v27;
            if ( !v28 )
              break;
            v20 = v46;
          }
          v5 = v48;
        }
        v29 = 0;
        if ( (*((_DWORD *)this + 0x58) & 2) != 0 )
        {
          v30 = *((_DWORD *)this + 0xC);
          if ( v30 == 0xFFFFFFFF )
            v30 = *((_DWORD *)this + 0x52);
          *((_DWORD *)this + 0x62) = v30;
          if ( sub_42BD70(this) )
          {
            ReadFile__(
              (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this,
              *((_DWORD *)this + 0x68),
              *((_DWORD *)this + 0x5C));
            v31 = 0;
            v9 = *((_DWORD *)this + 0x59) == 0;
            v45 = 0;
            if ( !v9 )
            {
              v32 = 0;
              do
              {
                *(_DWORD *)(*((_DWORD *)this + 0x69) + 4 * v31) = FormHeapAlloc(
                                                                    (unsigned __int64)*(unsigned int *)(*((_DWORD *)this + 0x5E) + v32 + 8) >> 0x1E != 0
                                                                  ? 0xFFFFFFFF
                                                                  : 4 * *(_DWORD *)(*((_DWORD *)this + 0x5E) + v32 + 8));
                for ( i = 0; i < *(_DWORD *)(*((_DWORD *)this + 0x5E) + v32 + 8); ++i )
                {
                  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0x69) + 4 * v31) + 4 * i) = v29;
                  v34 = strlen((const char *)(v29 + *((_DWORD *)this + 0x68)));
                  v31 = v45;
                  v29 += v34 + 1;
                }
                ++v31;
                v32 += 0x10;
                v28 = v31 < *((_DWORD *)this + 0x59);
                v45 = v31;
              }
              while ( v28 );
            }
            v5 = v48;
          }
        }
        TickCount = GetTickCount() - TickCount;
        PrintToLog___(
          "Finished loading archive %s containing %i directories and %i files in %f seconds",
          v5,
          *((_DWORD *)this + 0x59),
          *((_DWORD *)this + 0x5A),
          (double)TickCount / 1000.0);
        v8 = 0;
      }
      if ( _stat64i32((LPCSTR)this + 0x3C, (int)v51) == 0xFFFFFFFF )
        PrintError("Could not find Archive %s to get filetime.", (const char *)this + 0x3C);
      v9 = (*((_BYTE *)this + 0x194) & 8) == 0;
      v35 = v51[9];
      *((_DWORD *)this + 0x60) = v51[8];
      *((_DWORD *)this + 0x61) = v35;
      if ( v9 )
      {
        if ( bInvalidateOlderFiles_Archive )
        {
          v36 = GetTickCount();
          PrintToLog___("Invalidating files in archive %s", v5);
          v37 = Archive_InvalidateOlderFiles((int)this);
          TickCount = GetTickCount() - v36;
          PrintToLog___(
            "Finished invalidating %i files in archive %s in %f seconds",
            v37,
            v5,
            (double)TickCount / 1000.0);
          v8 = 0;
        }
        if ( a5 )
        {
          v38 = 0;
          v9 = *((_DWORD *)this + 0x59) == 0;
          v46 = 0;
          if ( !v9 )
          {
            while ( 1 )
            {
              if ( *((_DWORD *)this + 0x59) )
              {
                v39 = 0x10 * v38;
                v40 = 0;
                do
                {
                  ArchiveManager_InvalidatEFilesInAllBSA(
                    (unsigned int *)(v39 + *((_DWORD *)this + 0x5E)),
                    (unsigned int *)(v40 + *(_DWORD *)(*((_DWORD *)this + 0x5E) + v39 + 0xC)),
                    *((_WORD *)this + 0xBA));
                  ++v8;
                  v40 += 0x10;
                }
                while ( v8 < *((_DWORD *)this + 0x59) );
                v38 = v46;
              }
              v28 = (unsigned int)++v38 < *((_DWORD *)this + 0x59);
              v46 = v38;
              if ( !v28 )
                break;
              v8 = 0;
            }
          }
        }
      }
      sub_4303F0((HINSTANCE *)this, (HINSTANCE)0x2800);
    }
    else
    {
      *((_BYTE *)this + 0x194) |= 1u;
    }
  }
  return this;
}
