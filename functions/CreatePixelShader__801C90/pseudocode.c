NiD3DShaderProgram *__stdcall CreatePixelShader(
        char *lpFileName,
        _DWORD *a2,
        char *Str1,
        const char *a4,
        int a5,
        int a6)
{
  int v6; // esi
  char v7; // bl
  bool v8; // zf
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _BYTE *v11; // eax
  int (__cdecl **v12)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ebp
  int v13; // esi
  const char **v14; // ebx
  const char *v15; // eax
  const char *v16; // edx
  unsigned int v17; // eax
  char *v18; // edi
  char *v20; // edi
  const char *v21; // esi
  char v22; // cl
  const char *v23; // eax
  char *v24; // edi
  const char *v26; // ecx
  unsigned int v27; // eax
  const char *v28; // esi
  char *v29; // edi
  char *v31; // eax
  char v33; // cl
  const char *v34; // esi
  DWORD dwLowDateTime; // esi
  const char **v36; // ebp
  int v37; // ebx
  const char *v38; // eax
  const char *v39; // edx
  unsigned int v40; // eax
  char *v41; // edi
  char *v43; // edi
  const char *v44; // esi
  char v45; // cl
  const char *v46; // eax
  char *v47; // edi
  const char *v49; // ecx
  unsigned int v50; // eax
  const char *v51; // esi
  char *v52; // edi
  char *v54; // eax
  char v56; // cl
  const char *v57; // eax
  FILE *v58; // esi
  int v59; // eax
  const void *v60; // eax
  _DWORD *v61; // eax
  void (__cdecl *v62)(char *, _DWORD); // eax
  _BYTE *v63; // eax
  int (__cdecl **v64)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // esi
  int v65; // edi
  void *v66; // esi
  NiD3DShaderProgram *v67; // eax
  NiD3DShaderProgram *v68; // eax
  void (__thiscall *v69)(NiD3DShaderProgram *, int); // edx
  int v71; // [esp+10h] [ebp-DC0h]
  size_t v72; // [esp+14h] [ebp-DBCh]
  _BYTE v73[12]; // [esp+1Ch] [ebp-DB4h]
  int v74; // [esp+38h] [ebp-D98h]
  char TimeForFileOrContainer; // [esp+3Ah] [ebp-D96h]
  int Size; // [esp+3Ch] [ebp-D94h] BYREF
  int v77; // [esp+40h] [ebp-D90h] BYREF
  void *Src; // [esp+44h] [ebp-D8Ch]
  unsigned __int64 v79; // [esp+48h] [ebp-D88h] BYREF
  FILETIME v80; // [esp+50h] [ebp-D80h] BYREF
  const char *v81; // [esp+58h] [ebp-D78h]
  _DWORD *v82; // [esp+5Ch] [ebp-D74h]
  int v83; // [esp+60h] [ebp-D70h]
  const char *v84; // [esp+64h] [ebp-D6Ch]
  int v85; // [esp+68h] [ebp-D68h]
  _DWORD *v86; // [esp+6Ch] [ebp-D64h]
  NiD3DShaderProgram *v87; // [esp+70h] [ebp-D60h]
  int v88; // [esp+74h] [ebp-D5Ch]
  int v89; // [esp+78h] [ebp-D58h] BYREF
  int v90; // [esp+7Ch] [ebp-D54h] BYREF
  int v91; // [esp+80h] [ebp-D50h]
  void **v92; // [esp+84h] [ebp-D4Ch] BYREF
  char v93[4]; // [esp+88h] [ebp-D48h] BYREF
  char Filename[260]; // [esp+8Ch] [ebp-D44h] BYREF
  char v95[259]; // [esp+190h] [ebp-C40h] BYREF
  char v96; // [esp+293h] [ebp-B3Dh] BYREF
  char v97[1300]; // [esp+294h] [ebp-B3Ch] BYREF
  char v98[260]; // [esp+7A8h] [ebp-628h] BYREF
  char v99[1300]; // [esp+8ACh] [ebp-524h] BYREF
  unsigned int v100; // [esp+DCCh] [ebp-4h]

  v6 = 0;
  v84 = lpFileName;
  v82 = a2;
  v85 = (int)a4;
  Size = 0;
  v77 = 0;
  v87 = 0;
  v90 = 0;
  v83 = 0;
  sub_801210(Filename, lpFileName, a4);
  HIBYTE(v74) = 1;
  if ( dword_B430B8 )
    v6 = NiTMap_GetAtIndex((_DWORD *)dword_B430B8, (int)a4);
  if ( byte_B2DD4C )
  {
    if ( !v6 )
    {
      v80 = 0;
      v79 = 0;
      TimeForFileOrContainer = ArciveManager::GetTimeForFileOrContainer(lpFileName, &v80, 0x20);
      v7 = ArciveManager::GetTimeForFileOrContainer(Filename, (FILETIME *)&v79, 0x20);
      if ( !v7 )
      {
        if ( useHardDriveCache )
        {
          if ( !&CacheOrNullString || !CacheOrNullString )
          {
            strcpy_toB42D80("cache:\\");
            sub_801210(Filename, lpFileName, (const char *)v85);
          }
          v7 = ArciveManager::GetTimeForFileOrContainer(Filename, (FILETIME *)&v79, 0x20);
        }
      }
      if ( !TimeForFileOrContainer )
      {
        _sprintf(v95, "SHADER ERROR : error opening HLSL source file : %s", lpFileName);
        if ( dword_B42E8C )
          dword_B42E8C(v95, 0);
      }
      if ( !v7 )
        HIBYTE(v74) = 0;
      if ( *(_QWORD *)&v80 > v79 )
        HIBYTE(v74) = 0;
    }
  }
  BYTE2(v74) = 0;
  Src = 0;
  if ( v6 )
  {
    Src = (void *)(v6 + 0x104);
    goto LABEL_79;
  }
  if ( HIBYTE(v74) )
  {
    v63 = sub_431130(Filename, 0, 0x2800, 0x20);
    v64 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v63;
    if ( v63 )
    {
      if ( v63[0x24] )
      {
        v65 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v63 + 0x1C))(v63);
        v83 = v65;
        Src = (void *)FormHeapAlloc(v65);
        BYTE2(v74) = 1;
        ReadFile__(v64, (int)Src, v65);
      }
      (*(void (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v64)(v64, 1);
      goto LABEL_79;
    }
    _sprintf(v95, "SHADER ERROR : error opening cache file : %s", Filename);
    v62 = (void (__cdecl *)(char *, _DWORD))dword_B42E8C;
    if ( !dword_B42E8C )
      return 0;
LABEL_93:
    v62(v95, 0);
    return 0;
  }
  v8 = UseHDR == 0;
  v86 = 0;
  if ( !v8 )
  {
    v9 = v82;
    if ( *v82 )
    {
      v10 = v82 + 2;
      do
      {
        v9 = v10;
        v10 += 2;
      }
      while ( *v9 );
    }
    *v9 = &off_A6DFC0;
    v9[1] = EmptyString;
    v86 = v9;
  }
  *(_DWORD *)&v73[4] = 4;
  v81 = Str1;
  if ( !strncmp(Str1, "ps_2_0", *(size_t *)&v73[4]) )
  {
    v81 = sub_7B4780(1);
    if ( !v81 )
      v81 = Str1;
  }
  v11 = sub_431130(lpFileName, 0, 0x2800, 0x20);
  v12 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v11;
  if ( !v11 )
  {
LABEL_73:
    _sprintf(v95, "SHADER ERROR : error opening hlsl file : %s", lpFileName);
    v62 = (void (__cdecl *)(char *, _DWORD))dword_B42E8C;
    if ( !dword_B42E8C )
      return 0;
    goto LABEL_93;
  }
  if ( !v11[0x24] )
  {
    (**(void (__thiscall ***)(_BYTE *, int))v11)(v11, 1);
    goto LABEL_73;
  }
  v13 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v11 + 0x1C))(v11);
  v91 = v13;
  v80.dwLowDateTime = FormHeapAlloc(v13);
  ReadFile__(v12, v80.dwLowDateTime, v13);
  v14 = (const char **)(v82 + 1);
  v92 = &ShaderIncludes::`vftable';
  *(_DWORD *)v93 = lpFileName;
  v97[0] = 0;
  v88 = 0;
  LODWORD(v79) = v82 + 1;
  do
  {
    v15 = v14[0xFFFFFFFF];
    if ( !v15 )
      break;
    v16 = v14[0xFFFFFFFF];
    v17 = &v15[strlen(v15) + 1] - v16;
    v18 = &v96;
    while ( *++v18 )
      ;
    qmemcpy(v18, v16, 4 * (v17 >> 2));
    v21 = &v16[4 * (v17 >> 2)];
    v20 = &v18[4 * (v17 >> 2)];
    v22 = v17;
    v23 = *v14;
    v8 = *v14 == 0;
    qmemcpy(v20, v21, v22 & 3);
    if ( !v8 )
    {
      if ( *v23 )
      {
        v24 = &v96;
        while ( *++v24 )
          ;
        *(_WORD *)v24 = word_A61F44;
        v26 = v23;
        v27 = strlen(v23) + 1;
        v28 = v26;
        v29 = &v96;
        while ( *++v29 )
          ;
        qmemcpy(v29, v28, v27);
      }
    }
    v31 = &v96;
    while ( *++v31 )
      ;
    v33 = byte_A36132;
    *(_WORD *)v31 = word_A36130;
    v31[2] = v33;
    v14 += 2;
    ++v88;
  }
  while ( v88 < 8 );
  v34 = v81;
  _sprintf(v99, "compiling : %s\n %s %s", v84, v81, v97);
  if ( dword_B42E8C )
    dword_B42E8C(v99, 0);
  v71 = (int)v34;
  dwLowDateTime = v80.dwLowDateTime;
  v80.dwLowDateTime = D3DXCompileShader_0(
                        v80.dwLowDateTime,
                        v91,
                        (int)v82,
                        (int)&v92,
                        (int)"main",
                        v71,
                        0,
                        (int)&Size,
                        (int)&v77,
                        (int)&v90);
  (*(void (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v12)(v12, 1);
  FormHeapFree(dwLowDateTime);
  if ( v77 )
  {
    if ( !Size )
    {
      v36 = (const char **)v79;
      v97[0] = 0;
      v37 = 8;
      do
      {
        v38 = v36[0xFFFFFFFF];
        if ( v38 )
        {
          v39 = v36[0xFFFFFFFF];
          v40 = &v38[strlen(v38) + 1] - v39;
          v41 = &v96;
          while ( *++v41 )
            ;
          qmemcpy(v41, v39, 4 * (v40 >> 2));
          v44 = &v39[4 * (v40 >> 2)];
          v43 = &v41[4 * (v40 >> 2)];
          v45 = v40;
          v46 = *v36;
          v8 = *v36 == 0;
          qmemcpy(v43, v44, v45 & 3);
          if ( !v8 )
          {
            if ( *v46 )
            {
              v47 = &v96;
              while ( *++v47 )
                ;
              *(_WORD *)v47 = word_A61F44;
              v49 = v46;
              v50 = strlen(v46) + 1;
              v51 = v49;
              v52 = &v96;
              while ( *++v52 )
                ;
              qmemcpy(v52, v51, v50);
            }
          }
          v54 = &v96;
          while ( *++v54 )
            ;
          v56 = byte_A36132;
          *(_WORD *)v54 = word_A36130;
          v54[2] = v56;
        }
        v36 += 2;
        --v37;
      }
      while ( v37 );
      v57 = (const char *)(*(int (__stdcall **)(int))(*(_DWORD *)v77 + 0xC))(v77);
      _sprintf(v99, "%s\n %s\n %s", v84, v97, v57);
      if ( dword_B42E8C )
        dword_B42E8C(v99, 0);
      (*(void (__stdcall **)(int))(*(_DWORD *)v77 + 8))(v77);
      v77 = 0;
    }
  }
  if ( v80.dwLowDateTime )
    return 0;
  if ( Size )
  {
    v58 = fopen(Filename, "wb");
    v59 = (*(int (__stdcall **)(int))(*(_DWORD *)Size + 0x10))(Size);
    *(_DWORD *)&v73[4] = v58;
    *(_DWORD *)v73 = 1;
    v83 = v59;
    v72 = __PAIR64__(v59, Size);
    v60 = (const void *)(*(int (**)(void))(*(_DWORD *)Size + 0xC))();
    fwrite(v60, v72, *(size_t *)v73, *(FILE **)&v73[8]);
    fflush(v58);
    fclose(v58);
    sub_42E800(v93);
    Src = (void *)(*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v74 + 0xC))(v74, *(_DWORD *)&v73[4]);
  }
  v61 = v86;
  if ( v86 )
  {
    *v86 = 0;
    v61[1] = 0;
  }
LABEL_79:
  v66 = Src;
  if ( Src )
  {
    if ( dword_B430B4 )
    {
      *(_DWORD *)&v73[4] = v83;
      sub_7DAF50((unsigned __int16 *)dword_B430B4, (char *)v85, Src, *(size_t *)&v73[4]);
      goto LABEL_89;
    }
    if ( !dword_B43104->member.device->lpVtbl->CreatePixelShader(dword_B43104->member.device, Src, &v89) )
    {
      v67 = (NiD3DShaderProgram *)FormHeapAlloc(0x2Cu);
      LODWORD(v79) = v67;
      v100 = 0;
      if ( v67 )
        v68 = sub_780B90(v67, (int)dword_B43104);
      else
        v68 = 0;
      v69 = *(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v68 + 0x3C);
      v100 = 0xFFFFFFFF;
      v87 = v68;
      v69(v68, v89);
      goto LABEL_89;
    }
    _sprintf(v98, "SHADER ERROR : failed to create pixel shader : %s", Filename);
    if ( dword_B42E8C )
      dword_B42E8C(v98, 0);
    return 0;
  }
LABEL_89:
  if ( BYTE2(v74) )
    FormHeapFree((unsigned int)v66);
  return v87;
}
