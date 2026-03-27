NiD3DShaderProgram *__stdcall CreateVertexShader(
        char *lpFileName,
        _DWORD *a2,
        const char *a3,
        const char *a4,
        int a5,
        int a6)
{
  int v6; // esi
  char TimeForFileOrContainer; // bl
  bool v8; // zf
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  void *v11; // eax
  void (__thiscall ***v12)(_DWORD, _DWORD); // ebx
  int (__thiscall **v13)(void *); // edx
  int v14; // esi
  DWORD dwLowDateTime; // edi
  const char **v16; // ebp
  const char *v17; // eax
  const char *v18; // edx
  unsigned int v19; // eax
  char *v20; // edi
  char *v22; // edi
  const char *v23; // esi
  char v24; // cl
  const char *v25; // eax
  char *v26; // edi
  const char *v28; // ecx
  unsigned int v29; // eax
  const char *v30; // esi
  char *v31; // edi
  char *v33; // eax
  char v35; // dl
  const char *v36; // ebp
  const char *v37; // eax
  void (__thiscall **v38)(_DWORD, int); // edx
  const char **v39; // ebx
  int v40; // ebp
  const char *v41; // eax
  const char *v42; // edx
  unsigned int v43; // eax
  char *v44; // edi
  char *v46; // edi
  const char *v47; // esi
  char v48; // cl
  const char *v49; // eax
  char *v50; // edi
  const char *v52; // ecx
  unsigned int v53; // eax
  const char *v54; // esi
  char *v55; // edi
  char *v57; // eax
  char v59; // cl
  const char *v60; // eax
  FILE *v61; // esi
  int v62; // eax
  const void *v63; // eax
  void *v64; // esi
  _DWORD *v65; // eax
  _BYTE *v66; // eax
  int (__cdecl **v67)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // esi
  NiD3DShaderProgram *v68; // eax
  NiD3DShaderProgram *v69; // eax
  void (__thiscall *v70)(NiD3DShaderProgram *, int); // edx
  size_t v72; // [esp+14h] [ebp-DBCh]
  _BYTE v73[12]; // [esp+1Ch] [ebp-DB4h]
  int v74; // [esp+38h] [ebp-D98h]
  char v75; // [esp+3Bh] [ebp-D95h]
  int Size; // [esp+3Ch] [ebp-D94h] BYREF
  int v77; // [esp+40h] [ebp-D90h] BYREF
  void *v78; // [esp+44h] [ebp-D8Ch]
  int v79; // [esp+48h] [ebp-D88h]
  _DWORD *v80; // [esp+4Ch] [ebp-D84h]
  FILETIME v81; // [esp+50h] [ebp-D80h] BYREF
  const char *v82; // [esp+58h] [ebp-D78h]
  const char *v83; // [esp+5Ch] [ebp-D74h]
  FILETIME v84; // [esp+60h] [ebp-D70h] BYREF
  NiD3DShaderProgram *v85; // [esp+68h] [ebp-D68h]
  int v86; // [esp+6Ch] [ebp-D64h]
  _DWORD *v87; // [esp+70h] [ebp-D60h]
  int v88; // [esp+74h] [ebp-D5Ch]
  int v89; // [esp+78h] [ebp-D58h]
  int v90; // [esp+7Ch] [ebp-D54h] BYREF
  int v91; // [esp+80h] [ebp-D50h] BYREF
  void **v92; // [esp+84h] [ebp-D4Ch] BYREF
  char Str1[4]; // [esp+88h] [ebp-D48h] BYREF
  char Filename[260]; // [esp+8Ch] [ebp-D44h] BYREF
  char v95[259]; // [esp+190h] [ebp-C40h] BYREF
  char v96; // [esp+293h] [ebp-B3Dh] BYREF
  char v97[1300]; // [esp+294h] [ebp-B3Ch] BYREF
  char v98[260]; // [esp+7A8h] [ebp-628h] BYREF
  char v99[1300]; // [esp+8ACh] [ebp-524h] BYREF
  unsigned int v100; // [esp+DCCh] [ebp-4h]

  v6 = 0;
  v83 = lpFileName;
  v80 = a2;
  v82 = a3;
  v86 = (int)a4;
  Size = 0;
  v77 = 0;
  v85 = 0;
  v91 = 0;
  v79 = 0;
  sub_801210(Filename, lpFileName, a4);
  BYTE2(v74) = 1;
  if ( dword_B430B8 )
    v6 = NiTMap_GetAtIndex((_DWORD *)dword_B430B8, (int)a4);
  if ( byte_B2DD4C )
  {
    if ( !v6 )
    {
      v84.dwLowDateTime = 0;
      v84.dwHighDateTime = 0;
      v81.dwLowDateTime = 0;
      v81.dwHighDateTime = 0;
      TimeForFileOrContainer = ArciveManager::GetTimeForFileOrContainer(Filename, &v81, 0x20);
      v75 = ArciveManager::GetTimeForFileOrContainer(lpFileName, &v84, 0x20);
      if ( !TimeForFileOrContainer )
      {
        if ( useHardDriveCache )
        {
          if ( !&CacheOrNullString || !CacheOrNullString )
          {
            strcpy_toB42D80("cache:\\");
            sub_801210(Filename, lpFileName, a4);
          }
          TimeForFileOrContainer = ArciveManager::GetTimeForFileOrContainer(Filename, &v81, 0x20);
        }
      }
      if ( !v75 )
      {
        _sprintf(v95, "SHADER ERROR : error opening HLSL source file : %s", lpFileName);
        if ( dword_B42E8C )
          dword_B42E8C(v95, 0);
      }
      if ( !TimeForFileOrContainer )
        BYTE2(v74) = 0;
      if ( *(_QWORD *)&v84 > *(unsigned __int64 *)&v81 )
        BYTE2(v74) = 0;
    }
  }
  HIBYTE(v74) = 0;
  v78 = 0;
  if ( v6 )
  {
    v78 = (void *)(v6 + 0x104);
LABEL_80:
    v64 = v78;
    goto LABEL_81;
  }
  if ( BYTE2(v74) )
  {
    v66 = sub_431130(Filename, 0, 0x2800, 0x20);
    v67 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v66;
    if ( v66 )
    {
      if ( v66[0x24] )
      {
        v79 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v66 + 0x1C))(v66);
        v78 = (void *)FormHeapAlloc(v79);
        HIBYTE(v74) = 1;
        ReadFile__(v67, (int)v78, v79);
      }
      (*(void (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v67)(v67, 1);
      goto LABEL_80;
    }
    _sprintf(v95, "SHADER ERROR : error opening cache file : %s", Filename);
LABEL_95:
    if ( dword_B42E8C )
      dword_B42E8C(v95, 0);
    return 0;
  }
  v8 = UseHDR == 0;
  v87 = 0;
  if ( !v8 )
  {
    v9 = v80;
    if ( *v80 )
    {
      v10 = v80 + 2;
      do
      {
        v9 = v10;
        v10 += 2;
      }
      while ( *v9 );
    }
    *v9 = &off_A6DFC0;
    v9[1] = EmptyString;
    v87 = v9;
  }
  v11 = sub_431130(lpFileName, 0, 0x2800, 0x20);
  v12 = (void (__thiscall ***)(_DWORD, _DWORD))v11;
  if ( !v11 )
  {
LABEL_75:
    _sprintf(v95, "SHADER ERROR : error opening hlsl file : %s", lpFileName);
    goto LABEL_95;
  }
  v13 = *(int (__thiscall ***)(void *))v11;
  if ( !*((_BYTE *)v11 + 0x24) )
  {
    ((void (__thiscall *)(void *, int))*v13)(v11, 1);
    goto LABEL_75;
  }
  v14 = v13[7](v11);
  v89 = v14;
  dwLowDateTime = FormHeapAlloc(v14);
  v84.dwLowDateTime = dwLowDateTime;
  ReadFile__((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v12, dwLowDateTime, v14);
  v16 = (const char **)(v80 + 1);
  v92 = &ShaderIncludes::`vftable';
  *(_DWORD *)Str1 = lpFileName;
  v97[0] = 0;
  v81.dwLowDateTime = (DWORD)(v80 + 1);
  v88 = 8;
  do
  {
    v17 = v16[0xFFFFFFFF];
    if ( v17 )
    {
      v18 = v16[0xFFFFFFFF];
      v19 = &v17[strlen(v17) + 1] - v18;
      v20 = &v96;
      while ( *++v20 )
        ;
      qmemcpy(v20, v18, 4 * (v19 >> 2));
      v23 = &v18[4 * (v19 >> 2)];
      v22 = &v20[4 * (v19 >> 2)];
      v24 = v19;
      v25 = *v16;
      v8 = *v16 == 0;
      qmemcpy(v22, v23, v24 & 3);
      if ( !v8 )
      {
        if ( *v25 )
        {
          v26 = &v96;
          while ( *++v26 )
            ;
          *(_WORD *)v26 = word_A61F44;
          v28 = v25;
          v29 = strlen(v25) + 1;
          v30 = v28;
          v31 = &v96;
          while ( *++v31 )
            ;
          qmemcpy(v31, v30, v29);
        }
      }
      v33 = &v96;
      while ( *++v33 )
        ;
      v35 = byte_A36132;
      v14 = v89;
      dwLowDateTime = v84.dwLowDateTime;
      *(_WORD *)v33 = word_A36130;
      v33[2] = v35;
    }
    v16 += 2;
    --v88;
  }
  while ( v88 );
  v36 = v82;
  _sprintf(v99, "compiling : %s\n %s %s", v83, v82, v97);
  if ( dword_B42E8C )
    dword_B42E8C(v99, 0);
  v37 = (const char *)D3DXCompileShader_0(
                        dwLowDateTime,
                        v14,
                        (int)v80,
                        (int)&v92,
                        (int)"main",
                        (int)v36,
                        0,
                        (int)&Size,
                        (int)&v77,
                        (int)&v91);
  v38 = *v12;
  v82 = v37;
  (*v38)(v12, 1);
  FormHeapFree(dwLowDateTime);
  if ( v77 )
  {
    if ( !Size )
    {
      v39 = (const char **)v81.dwLowDateTime;
      v97[0] = 0;
      v40 = 0;
      do
      {
        v41 = v39[0xFFFFFFFF];
        if ( !v41 )
          break;
        v42 = v39[0xFFFFFFFF];
        v43 = &v41[strlen(v41) + 1] - v42;
        v44 = &v96;
        while ( *++v44 )
          ;
        qmemcpy(v44, v42, 4 * (v43 >> 2));
        v47 = &v42[4 * (v43 >> 2)];
        v46 = &v44[4 * (v43 >> 2)];
        v48 = v43;
        v49 = *v39;
        v8 = *v39 == 0;
        qmemcpy(v46, v47, v48 & 3);
        if ( !v8 )
        {
          if ( *v49 )
          {
            v50 = &v96;
            while ( *++v50 )
              ;
            *(_WORD *)v50 = word_A61F44;
            v52 = v49;
            v53 = strlen(v49) + 1;
            v54 = v52;
            v55 = &v96;
            while ( *++v55 )
              ;
            qmemcpy(v55, v54, v53);
          }
        }
        v57 = &v96;
        while ( *++v57 )
          ;
        v59 = byte_A36132;
        ++v40;
        v39 += 2;
        *(_WORD *)v57 = word_A36130;
        v57[2] = v59;
      }
      while ( v40 < 8 );
      v60 = (const char *)(*(int (__stdcall **)(int))(*(_DWORD *)v77 + 0xC))(v77);
      _sprintf(v99, "%s\n %s\n %s", v83, v97, v60);
      if ( dword_B42E8C )
        dword_B42E8C(v99, 0);
      (*(void (__stdcall **)(int))(*(_DWORD *)v77 + 8))(v77);
      v77 = 0;
    }
  }
  if ( v82 )
    return 0;
  if ( Size )
  {
    v61 = fopen(Filename, "wb");
    if ( v61 )
    {
      v62 = (*(int (__stdcall **)(int))(*(_DWORD *)Size + 0x10))(Size);
      *(_DWORD *)&v73[4] = v61;
      *(_DWORD *)v73 = 1;
      v79 = v62;
      v72 = __PAIR64__(v62, Size);
      v63 = (const void *)(*(int (**)(void))(*(_DWORD *)Size + 0xC))();
      fwrite(v63, v72, *(size_t *)v73, *(FILE **)&v73[8]);
      fclose(v61);
      sub_42E800(Str1);
      v64 = (void *)(*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v74 + 0xC))(v74, *(_DWORD *)&v73[4]);
    }
    else
    {
      _sprintf(v95, "invalid cache file : %s", Filename);
      if ( dword_B42E8C )
        dword_B42E8C(v95, 0);
      v64 = (void *)(*(int (__stdcall **)(int))(*(_DWORD *)Size + 0xC))(Size);
    }
  }
  else
  {
    v64 = v78;
  }
  v65 = v87;
  if ( v87 )
  {
    *v87 = 0;
    v65[1] = 0;
  }
LABEL_81:
  if ( v64 )
  {
    if ( dword_B430B4 )
    {
      *(_DWORD *)&v73[4] = v79;
      sub_7DAF50((unsigned __int16 *)dword_B430B4, (char *)v86, v64, *(size_t *)&v73[4]);
      goto LABEL_91;
    }
    if ( !dword_B43104->member.device->lpVtbl->CreateVertexShader(dword_B43104->member.device, v64, &v90) )
    {
      v68 = (NiD3DShaderProgram *)FormHeapAlloc(0x38u);
      v86 = (int)v68;
      v100 = 0;
      if ( v68 )
        v69 = sub_780D80(v68, (int)dword_B43104);
      else
        v69 = 0;
      v70 = *(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v69 + 0x44);
      v100 = 0xFFFFFFFF;
      v85 = v69;
      v70(v69, v90);
      goto LABEL_91;
    }
    _sprintf(v98, "SHADER ERROR : failed to create vertex shader : %s", Filename);
    if ( dword_B42E8C )
      dword_B42E8C(v98, 0);
    return 0;
  }
LABEL_91:
  if ( HIBYTE(v74) )
    FormHeapFree((unsigned int)v64);
  return v85;
}
