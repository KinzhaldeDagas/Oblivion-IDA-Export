//
//
// [2026-10-03 frond program correction] Verified lookup CALL 0x801581 -> NiTMap_GetAtIndex 0x7DAC70 (ECX map, one stack name). On a found record, bytecode is record+0x104; borrowed package bytes are not freed. They reach IDirect3DDevice9::CreateVertexShader 0x801B93, then native NiD3DVertexShader ctor 0x780D80 and virtual+44 adopt the GPU object. SpeedTreeOBSE intercepts only named STFROND records here with static embedded bytecode, forwarding all other names. This replaces unsafe scans near NiD3D program objects; those objects are not established bytecode containers.
// [2026-10-03 runtime readiness] At80156E the temporary package record map B430B8 is tested; null jumps over CALL801581. Consequently the plugin embedded-record hook cannot intercept new shader creation after that map is released. A complete cached ShaderDefinition remains valid: GetShaderDefinition7B4290 returns it before factory/lookup work. Prior runtime log had all six embedded frond loads followed by misleading package7 missing-record prewarm error. Plugin now inspects cached frond definition/GPU handles/stages before requesting creation.
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
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  int v13; // edx
  int v14; // esi
  void *dwLowDateTime; // edi
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
  void (__thiscall **v38)(_DWORD *, int); // edx
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
  void (__thiscall ***v66)(void *, int); // eax
  void (__thiscall ***v67)(void *, int); // esi
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

  v6 = 0; /*0x80153c*/
  v83 = lpFileName; /*0x801545*/
  v80 = a2; /*0x801549*/
  v82 = a3; /*0x80154d*/
  v86 = (int)a4; /*0x801551*/
  Size = 0; /*0x801555*/
  v77 = 0; /*0x801559*/
  v85 = 0; /*0x80155d*/
  v91 = 0; /*0x801561*/
  v79 = 0; /*0x801565*/
  sub_801210(Filename, lpFileName, a4); /*0x801569*/
  BYTE2(v74) = 1; /*0x801579*/
  if ( OB_ShaderProgramPackageRecordMap_010201A0 ) /*0x80156e*/
    v6 = NiTMap_GetAtIndex((_DWORD *)OB_ShaderProgramPackageRecordMap_010201A0, (int)a4);// [Verified] Vertex-program loader queries the selected ShaderProgramPackageRecordMap by its requested program key before the later cache/source path; an embedded ShaderBufferEntry can provide the program payload. /*0x801586*/
  if ( byte_B2DD4C )
  {
    if ( !v6 )
    {
      v84.dwLowDateTime = 0; /*0x80159f*/
      v84.dwHighDateTime = 0; /*0x8015a3*/
      v81.dwLowDateTime = 0; /*0x8015a7*/
      v81.dwHighDateTime = 0; /*0x8015ab*/
      TimeForFileOrContainer = ArciveManager::GetTimeForFileOrContainer(Filename, &v81, 0x20); /*0x8015c8*/
      v75 = ArciveManager::GetTimeForFileOrContainer(lpFileName, &v84, 0x20); /*0x8015d4*/
      if ( !TimeForFileOrContainer ) /*0x8015d8*/
      {
        if ( OB_RendererGlobalState_010201A0[0x215] ) /*0x8015da*/
        {
          if ( !&MEMORY[0xB42D80] || !MEMORY[0xB42D80] ) /*0x8015eb*/
          {
            strcpy_toB42D80("cache:\\"); /*0x8015f8*/
            sub_801210(Filename, lpFileName, a4); /*0x801609*/
          }
          TimeForFileOrContainer = ArciveManager::GetTimeForFileOrContainer(Filename, &v81, 0x20); /*0x801625*/
        }
      }
      if ( !v75 )
      {
        _sprintf(v95, "SHADER ERROR : error opening HLSL source file : %s", lpFileName);
        if ( unk_B42E8C ) /*0x801641*/
          unk_B42E8C(v95, 0); /*0x801657*/
      }
      if ( !TimeForFileOrContainer ) /*0x80165e*/
        BYTE2(v74) = 0; /*0x801660*/
      if ( *(_QWORD *)&v84 > *(unsigned __int64 *)&v81 ) /*0x80167a*/
        BYTE2(v74) = 0; /*0x80167c*/
    }
  }
  HIBYTE(v74) = 0; /*0x801685*/
  v78 = 0; /*0x80168a*/
  if ( v6 ) /*0x80168e*/
  {
    v78 = (void *)(v6 + 0x104); /*0x801696*/
LABEL_80:
    v64 = v78; /*0x801b49*/
    goto LABEL_81; /*0x801b49*/
  }
  if ( BYTE2(v74) )
  {
    v66 = (void (__thiscall ***)(void *, int))sub_431130(Filename, 0, 0x2800, 0x20); /*0x801afd*/
    v67 = v66; /*0x801b02*/
    if ( v66 ) /*0x801b09*/
    {
      if ( *((_BYTE *)v66 + 0x24) ) /*0x801b0f*/
      {
        v79 = ((int (__thiscall *)(void (__thiscall ***)(void *, int)))(*v66)[7])(v66); /*0x801b21*/
        v78 = (void *)FormHeapAlloc(v79); /*0x801b31*/
        HIBYTE(v74) = 1; /*0x801b35*/
        Archive_ReadBytes(v67, v78, v79); /*0x801b3a*/
      }
      (**v67)(v67, 1); /*0x801b47*/
      goto LABEL_80; /*0x801b47*/
    }
    _sprintf(v95, "SHADER ERROR : error opening cache file : %s", Filename);
LABEL_95:
    if ( unk_B42E8C ) /*0x801c43*/
      unk_B42E8C(v95, 0); /*0x801c58*/
    return 0; /*0x801c58*/
  }
  v8 = OB_RendererGlobalState_010201A0[0x1D7] == 0; /*0x8016aa*/
  v87 = 0; /*0x8016b1*/
  if ( !v8 ) /*0x8016b5*/
  {
    v9 = v80; /*0x8016b7*/
    if ( *v80 ) /*0x8016bb*/
    {
      v10 = v80 + 2; /*0x8016bf*/
      do /*0x8016c7*/
      {
        v9 = v10; /*0x8016c2*/
        v10 += 2; /*0x8016c4*/
      }
      while ( *v9 ); /*0x8016c7*/
    }
    *v9 = &off_A6DFC0; /*0x8016cb*/
    v9[1] = EmptyString; /*0x8016d1*/
    v87 = v9; /*0x8016d8*/
  }
  v11 = sub_431130(lpFileName, 0, 0x2800, 0x20); /*0x8016e5*/
  v12 = v11; /*0x8016ea*/
  if ( !v11 )
  {
LABEL_75:
    _sprintf(v95, "SHADER ERROR : error opening hlsl file : %s", lpFileName);
    goto LABEL_95; /*0x801aeb*/
  }
  v13 = *v11; /*0x8016fb*/
  if ( !*((_BYTE *)v11 + 0x24) ) /*0x8016ff*/
  {
    (*(void (__thiscall **)(_DWORD *, int))v13)(v11, 1); /*0x801ae3*/
    goto LABEL_75; /*0x801ae3*/
  }
  v14 = (*(int (__thiscall **)(_DWORD *))(v13 + 0x1C))(v11); /*0x80170a*/
  v89 = v14; /*0x80170d*/
  dwLowDateTime = (void *)FormHeapAlloc(v14); /*0x801719*/
  v84.dwLowDateTime = (DWORD)dwLowDateTime; /*0x80171f*/
  Archive_ReadBytes(v12, dwLowDateTime, v14); /*0x801723*/
  v16 = (const char **)(v80 + 1); /*0x80172e*/
  v92 = &ShaderIncludes::`vftable'; /*0x801731*/
  *(_DWORD *)Str1 = lpFileName; /*0x801739*/
  v97[0] = 0; /*0x80173d*/
  v81.dwLowDateTime = (DWORD)(v80 + 1); /*0x801745*/
  v88 = 8; /*0x801749*/
  do /*0x80182d*/
  {
    v17 = v16[0xFFFFFFFF]; /*0x801751*/
    if ( v17 ) /*0x801756*/
    {
      v18 = v16[0xFFFFFFFF]; /*0x80175c*/
      v19 = &v17[strlen(v17) + 1] - v18; /*0x801770*/
      v20 = &v96; /*0x801772*/
      while ( *++v20 ) /*0x80177d*/
        ; /*0x801775*/
      qmemcpy(v20, v18, 4 * (v19 >> 2)); /*0x801786*/
      v23 = &v18[4 * (v19 >> 2)]; /*0x801786*/
      v22 = &v20[4 * (v19 >> 2)]; /*0x801786*/
      v24 = v19; /*0x801788*/
      v25 = *v16; /*0x80178a*/
      v8 = *v16 == 0; /*0x801790*/
      qmemcpy(v22, v23, v24 & 3); /*0x801792*/
      if ( !v8 ) /*0x801794*/
      {
        if ( *v25 ) /*0x801796*/
        {
          v26 = &v96; /*0x8017a2*/
          while ( *++v26 ) /*0x8017ad*/
            ; /*0x8017a5*/
          *(_WORD *)v26 = word_A61F44; /*0x8017b6*/
          v28 = v25; /*0x8017b9*/
          v29 = strlen(v25) + 1; /*0x8017d0*/
          v30 = v28; /*0x8017d2*/
          v31 = &v96; /*0x8017d4*/
          while ( *++v31 ) /*0x8017df*/
            ; /*0x8017d7*/
          qmemcpy(v31, v30, v29); /*0x8017e6*/
        }
      }
      v33 = &v96; /*0x8017f6*/
      while ( *++v33 ) /*0x801808*/
        ; /*0x801800*/
      v35 = byte_A36132; /*0x801811*/
      v14 = v89; /*0x801817*/
      dwLowDateTime = (void *)v84.dwLowDateTime; /*0x80181b*/
      *(_WORD *)v33 = word_A36130; /*0x80181f*/
      v33[2] = v35; /*0x801822*/
    }
    v16 += 2; /*0x801825*/
    --v88; /*0x801828*/
  }
  while ( v88 ); /*0x80182d*/
  v36 = v82; /*0x801833*/
  _sprintf(v99, "compiling : %s\n %s %s", v83, v82, v97);
  if ( unk_B42E8C ) /*0x801857*/
    unk_B42E8C(v99, 0); /*0x80186d*/
  v37 = (const char *)D3DXCompileShader_0( /*0x801895*/
                        (int)dwLowDateTime,
                        v14,
                        (int)v80,
                        (int)&v92,
                        (int)"main",
                        (int)v36,
                        0,
                        (int)&Size,
                        (int)&v77,
                        (int)&v91);
  v38 = (void (__thiscall **)(_DWORD *, int))*v12; /*0x80189a*/
  v82 = v37; /*0x80189c*/
  (*v38)(v12, 1); /*0x8018a6*/
  FormHeapFree((unsigned int)dwLowDateTime); /*0x8018a9*/
  if ( v77 ) /*0x8018b6*/
  {
    if ( !Size ) /*0x8018c1*/
    {
      v39 = (const char **)v81.dwLowDateTime; /*0x8018c7*/
      v97[0] = 0; /*0x8018cb*/
      v40 = 0; /*0x8018d3*/
      do /*0x8019a6*/
      {
        v41 = v39[0xFFFFFFFF]; /*0x8018d5*/
        if ( !v41 ) /*0x8018da*/
          break; /*0x8018da*/
        v42 = v39[0xFFFFFFFF]; /*0x8018e0*/
        v43 = &v41[strlen(v41) + 1] - v42; /*0x8018f2*/
        v44 = &v96; /*0x8018f4*/
        while ( *++v44 ) /*0x8018ff*/
          ; /*0x8018f7*/
        qmemcpy(v44, v42, 4 * (v43 >> 2)); /*0x801908*/
        v47 = &v42[4 * (v43 >> 2)]; /*0x801908*/
        v46 = &v44[4 * (v43 >> 2)]; /*0x801908*/
        v48 = v43; /*0x80190a*/
        v49 = *v39; /*0x80190c*/
        v8 = *v39 == 0; /*0x801911*/
        qmemcpy(v46, v47, v48 & 3); /*0x801913*/
        if ( !v8 ) /*0x801915*/
        {
          if ( *v49 ) /*0x801917*/
          {
            v50 = &v96; /*0x801923*/
            while ( *++v50 ) /*0x80192e*/
              ; /*0x801926*/
            *(_WORD *)v50 = word_A61F44; /*0x801937*/
            v52 = v49; /*0x80193a*/
            v53 = strlen(v49) + 1; /*0x801950*/
            v54 = v52; /*0x801952*/
            v55 = &v96; /*0x801954*/
            while ( *++v55 ) /*0x80195f*/
              ; /*0x801957*/
            qmemcpy(v55, v54, v53); /*0x801966*/
          }
        }
        v57 = &v96; /*0x801976*/
        while ( *++v57 ) /*0x801988*/
          ; /*0x801980*/
        v59 = byte_A36132; /*0x801991*/
        ++v40; /*0x801997*/
        v39 += 2; /*0x80199a*/
        *(_WORD *)v57 = word_A36130; /*0x8019a0*/
        v57[2] = v59; /*0x8019a3*/
      }
      while ( v40 < 8 ); /*0x8019a6*/
      v60 = (const char *)(*(int (__stdcall **)(int))(*(_DWORD *)v77 + 0xC))(v77); /*0x8019b6*/
      _sprintf(v99, "%s\n %s\n %s", v83, v97, v60); /*0x8019d3*/
      if ( unk_B42E8C ) /*0x8019d8*/
        unk_B42E8C(v99, 0); /*0x8019ee*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v77 + 8))(v77); /*0x8019fd*/
      v77 = 0; /*0x8019ff*/
    }
  }
  if ( v82 ) /*0x801a0c*/
    return 0; /*0x801a0c*/
  if ( Size )
  {
    v61 = fopen(Filename, "wb"); /*0x801a2c*/
    if ( v61 )
    {
      v62 = (*(int (__stdcall **)(int))(*(_DWORD *)Size + 0x10))(Size); /*0x801a3f*/
      *(_DWORD *)&v73[4] = v61; /*0x801a41*/
      *(_DWORD *)v73 = 1; /*0x801a42*/
      v79 = v62; /*0x801a45*/
      v72 = __PAIR64__(v62, Size); /*0x801a52*/
      v63 = (const void *)(*(int (**)(void))(*(_DWORD *)Size + 0xC))(); /*0x801a53*/
      fwrite(v63, v72, *(size_t *)v73, *(FILE **)&v73[8]); /*0x801a56*/
      fclose(v61); /*0x801a5c*/
      sub_42E800(Str1); /*0x801a66*/
      v64 = (void *)(*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v74 + 0xC))(v74, *(_DWORD *)&v73[4]); /*0x801a7a*/
    }
    else
    {
      _sprintf(v95, "invalid cache file : %s", Filename);
      if ( unk_B42E8C ) /*0x801a95*/
        unk_B42E8C(v95, 0); /*0x801aab*/
      v64 = (void *)(*(int (__stdcall **)(int))(*(_DWORD *)Size + 0xC))(Size); /*0x801abc*/
    }
  }
  else
  {
    v64 = v78; /*0x801ac0*/
  }
  v65 = v87; /*0x801ac4*/
  if ( v87 ) /*0x801aca*/
  {
    *v87 = 0; /*0x801ad0*/
    v65[1] = 0; /*0x801ad6*/
  }
LABEL_81:
  if ( v64 )
  {
    if ( unk_B430B4 ) /*0x801b55*/
    {
      *(_DWORD *)&v73[4] = v79; /*0x801b67*/
      sub_7DAF50((unsigned __int16 *)unk_B430B4, (char *)v86, v64, *(size_t *)&v73[4]); /*0x801b6a*/
      goto LABEL_91; /*0x801b6f*/
    }
    if ( !unk_B43104->member.device->lpVtbl->CreateVertexShader(unk_B43104->member.device, v64, &v90) )// DX10 bridge note: CreateVertexShader vtable call is the authoritative D3D9 bytecode capture boundary for SM1/SM2/SM3 to SM4 companion translation. /*0x801b93*/
    {
      v68 = (NiD3DShaderProgram *)FormHeapAlloc(0x38u); /*0x801bcc*/
      v86 = (int)v68; /*0x801bd4*/
      v100 = 0; /*0x801bda*/
      if ( v68 ) /*0x801be5*/
        v69 = sub_780D80(v68, (int)unk_B43104); /*0x801bf0*/
      else
        v69 = 0; /*0x801bf7*/
      v70 = *(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v69 + 0x44); /*0x801bff*/
      v100 = 0xFFFFFFFF; /*0x801c05*/
      v85 = v69; /*0x801c10*/
      v70(v69, v90); /*0x801c14*/
      goto LABEL_91; /*0x801c14*/
    }
    _sprintf(v98, "SHADER ERROR : failed to create vertex shader : %s", Filename);
    if ( unk_B42E8C ) /*0x801bac*/
      unk_B42E8C(v98, 0); /*0x801bc5*/
    return 0; /*0x801c5d*/
  }
LABEL_91:
  if ( HIBYTE(v74) ) /*0x801c1b*/
    FormHeapFree((unsigned int)v64); /*0x801c1e*/
  return v85; /*0x801c5f*/
}
