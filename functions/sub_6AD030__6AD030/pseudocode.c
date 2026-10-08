void __usercall sub_6AD030(int a1@<ecx>, int a2@<edi>)
{
  void (__stdcall ***v3)(_DWORD, GUID *, int); // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  TESForm *v5; // edi
  float *v6; // ebp
  float *v7; // eax
  unsigned __int16 MusicType; // ax
  const char *v9; // edi
  __int16 v10; // ax
  unsigned int v11; // edi
  double v12; // st7
  double v13; // st7
  double v14; // st6
  int v15; // ecx
  __int16 v16; // bp
  const char *v17; // edi
  __int16 v18; // ax
  __int16 v19; // ax
  TESForm *CurrentCell; // eax
  TESObjectCELL *v21; // eax
  TESForm *v22; // edi
  float *v23; // ebp
  float *v24; // eax
  unsigned __int16 v25; // ax
  __int16 v26; // ax
  double v27; // st7
  int v28; // eax
  int v29; // ecx
  const char *v30; // edi
  __int16 v31; // bx
  __int16 v32; // ax
  TESForm *v33; // eax
  _DWORD *v34; // edi
  __int16 v35; // ax
  const char *v36; // edi
  __int16 v37; // ax
  TESWorldSpace *WorldSpace; // [esp+6Ch] [ebp-438h]
  TESWorldSpace *v39; // [esp+6Ch] [ebp-438h]
  int v40; // [esp+70h] [ebp-434h]
  float v42; // [esp+84h] [ebp-420h]
  float v43; // [esp+84h] [ebp-420h]
  float v44; // [esp+84h] [ebp-420h]
  int v45; // [esp+88h] [ebp-41Ch] BYREF
  int v46; // [esp+8Ch] [ebp-418h] BYREF
  int v47; // [esp+90h] [ebp-414h] BYREF
  int v48; // [esp+94h] [ebp-410h] BYREF
  CHAR MultiByteStr[512]; // [esp+98h] [ebp-40Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+298h] [ebp-20Ch] BYREF

  if ( !MusicEnabled ) /*0x6ad04e*/
    return; /*0x6ad04e*/
  v3 = *(void (__stdcall ****)(_DWORD, GUID *, int))(a1 + 0x70); /*0x6ad054*/
  if ( !v3 ) /*0x6ad05c*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x6ad068*/
    v5 = (TESForm *)DwordAtOffset40; /*0x6ad06d*/
    if ( !DwordAtOffset40 ) /*0x6ad071*/
      return; /*0x6ad071*/
    if ( !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x6ad079*/
    {
      v6 = reference->vtbl->super.super.super.GetPos(reference); /*0x6ad096*/
      WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v5); /*0x6ad0a3*/
      v7 = reference->vtbl->super.super.super.GetPos(reference); /*0x6ad0ac*/
      v5 = sub_44A270((TESWorldSpace **)g_TESDataHandler, *v6, v7[1], WorldSpace, 0); /*0x6ad0c9*/
    }
    if ( *(_WORD *)(a1 + 0xB0) != 4 && v5 ) /*0x6ad0d7*/
    {
      v40 = *(int *)(a1 + 0x2F8); /*0x6ad0e0*/
      MusicType = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)v5, 0); /*0x6ad0e9*/
      sub_6ACD10((char *)a1, MusicType, 0, v40); /*0x6ad0f1*/
      return; /*0x6ad0f6*/
    }
    v9 = 0; /*0x6ad0fb*/
    if ( !MusicEnabled ) /*0x6ad104*/
      goto LABEL_189; /*0x6ad104*/
    strstr((const char *)(a1 + 0x1E4), "death"); /*0x6ad116*/
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 ) /*0x6ad139*/
      goto LABEL_188; /*0x6ad139*/
    v10 = *(_WORD *)(a1 + 0xB0); /*0x6ad13f*/
    if ( v10 == 8 ) /*0x6ad149*/
    {
      if ( (*(_BYTE *)(a1 + 0xDC) & 2) == 0 ) /*0x6ad152*/
        v9 = (const char *)(a1 + 0x1E4); /*0x6ad154*/
    }
    else if ( v10 != 4 ) /*0x6ad15f*/
    {
LABEL_18:
      if ( v9 ) /*0x6ad170*/
      {
        strcpy(MultiByteStr, v9); /*0x6ad176*/
        goto LABEL_21; /*0x6ad185*/
      }
      if ( sub_6A8E80(MultiByteStr, 4) ) /*0x6ad197*/
      {
LABEL_21:
        if ( _access(MultiByteStr, 0) == 0xFFFFFFFF ) /*0x6ad1b6*/
          goto LABEL_189; /*0x6ad1b6*/
        if ( *(_WORD *)(a1 + 0xB0) != 8 && !strcmp((const char *)(a1 + 0x1E4), MultiByteStr) ) /*0x6ad1d4*/
          goto LABEL_189; /*0x6ad1d4*/
        SoundManager_StopFilterGraph((_BYTE *)a1); /*0x6ad1ff*/
        v9 = (const char *)(a1 + 0x70); /*0x6ad204*/
        if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) < 0 ) /*0x6ad21e*/
          goto LABEL_189; /*0x6ad21e*/
        MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6ad23c*/
        if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v9 + 0x34))(*(_DWORD *)v9, WideCharStr, 0) < 0 ) /*0x6ad258*/
          goto LABEL_189; /*0x6ad258*/
        (***(void (__stdcall ****)(_DWORD, GUID *, int))v9)(*(_DWORD *)v9, &CLSID_IBasicAudio, a1 + 0x74); /*0x6ad26e*/
        if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 ) /*0x6ad277*/
          SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6ad287*/
        strcpy((char *)(a1 + 0x1E4), MultiByteStr); /*0x6ad28c*/
        goto LABEL_187; /*0x6ad29b*/
      }
LABEL_189:
      SoundManager_PlayMusic(a1, (int)v9); /*0x6addee*/
      return; /*0x6addf0*/
    }
    if ( (*(_BYTE *)(a1 + 0xDC) & 2) != 0 ) /*0x6ad168*/
      goto LABEL_189; /*0x6ad168*/
    goto LABEL_18; /*0x6ad168*/
  }
  v11 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6ad2a7*/
  v47 = *(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)(a1 + 0x2E8); /*0x6ad2b7*/
  v12 = (double)v47; /*0x6ad2bb*/
  if ( v47 < 0 ) /*0x6ad2bf*/
    v12 = v12 + flt_A2FC78; /*0x6ad2c1*/
  v42 = v12 / dbl_A771C0; /*0x6ad2cd*/
  v13 = 0.0; /*0x6ad2d1*/
  v14 = v42; /*0x6ad2d3*/
  if ( v42 >= 0.0 ) /*0x6ad2e0*/
  {
    if ( v14 > 1.0 ) /*0x6ad2f7*/
    {
      v42 = 1.0; /*0x6ad2fb*/
      v14 = (float)1.0; /*0x6ad2ff*/
    }
  }
  else
  {
    v42 = 0.0; /*0x6ad2e6*/
    v14 = (float)0.0; /*0x6ad2ea*/
  }
  if ( !*(_DWORD *)(a1 + 0x74) ) /*0x6ad307*/
  {
    (**v3)(v3, &CLSID_IBasicAudio, a1 + 0x74); /*0x6ad31f*/
    v13 = 0.0; /*0x6ad321*/
    v14 = v42; /*0x6ad323*/
  }
  v15 = *(_DWORD *)(a1 + 0xDC); /*0x6ad327*/
  if ( (v15 & 8) != 0 ) /*0x6ad334*/
  {
    if ( *(float *)(a1 + 0x2F0) < dbl_A68610 ) /*0x6ad34b*/
    {
      v16 = *(_WORD *)(a1 + 0x2FC); /*0x6ad351*/
      *(_DWORD *)(a1 + 0xDC) = v15 & 0xFFFFFFE7 | 0x10; /*0x6ad362*/
      v17 = 0; /*0x6ad368*/
      if ( !MusicEnabled || strstr((const char *)(a1 + 0x1E4), "death") && v16 == (__int16)0xFFFF ) /*0x6ad394*/
        goto LABEL_117; /*0x6ad394*/
      if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 ) /*0x6ad3b4*/
        goto LABEL_73; /*0x6ad3b4*/
      v18 = *(_WORD *)(a1 + 0xB0); /*0x6ad3ba*/
      if ( v18 == 8 && (*(_BYTE *)(a1 + 0xDC) & 2) == 0 ) /*0x6ad3ce*/
        v17 = (const char *)(a1 + 0x1E4); /*0x6ad3d0*/
      if ( v18 == 4 && v16 == 8 ) /*0x6ad3dc*/
        *(_WORD *)(a1 + 0xB0) = 0; /*0x6ad3de*/
      v19 = *(_WORD *)(a1 + 0xB0); /*0x6ad3e7*/
      if ( ((v19 == 8 || v19 == 4) && v16 != (__int16)0xFFFF || v19 == v16) && (*(_BYTE *)(a1 + 0xDC) & 2) != 0 /*0x6ad424*/
        || v19 != 8 && v19 != 4 && v16 == (__int16)0xFFFF )
      {
        goto LABEL_117; /*0x6ad424*/
      }
      if ( v17 ) /*0x6ad42c*/
      {
        strcpy(MultiByteStr, v17); /*0x6ad432*/
      }
      else
      {
        if ( v16 == (__int16)0xFFFF ) /*0x6ad449*/
        {
          if ( TES_GetCurrentCell(MEMORY[0xB333A0]) ) /*0x6ad451*/
          {
            CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x6ad462*/
            v16 = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)CurrentCell, 0); /*0x6ad46e*/
          }
          else
          {
            v16 = 0; /*0x6ad473*/
          }
        }
        if ( !sub_6A8E80(MultiByteStr, v16) ) /*0x6ad484*/
          goto LABEL_117; /*0x6ad484*/
      }
      if ( _access(MultiByteStr, 0) != 0xFFFFFFFF /*0x6ad4b6*/
        && (*(_WORD *)(a1 + 0xB0) == 8 || strcmp((const char *)(a1 + 0x1E4), MultiByteStr)) )
      {
        SoundManager_StopFilterGraph((_BYTE *)a1); /*0x6ad4e1*/
        v17 = (const char *)(a1 + 0x70); /*0x6ad4e6*/
        if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) >= 0 ) /*0x6ad500*/
        {
          MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6ad51e*/
          if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v17 + 0x34))(*(_DWORD *)v17, WideCharStr, 0) >= 0 ) /*0x6ad53a*/
          {
            (***(void (__stdcall ****)(_DWORD, GUID *, int))v17)(*(_DWORD *)v17, &CLSID_IBasicAudio, a1 + 0x74); /*0x6ad54c*/
            if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 ) /*0x6ad555*/
              SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6ad565*/
            strcpy((char *)(a1 + 0x1E4), MultiByteStr); /*0x6ad56a*/
            *(_DWORD *)(a1 + 0xDC) |= 1u; /*0x6ad580*/
LABEL_73:
            *(_WORD *)(a1 + 0xB0) = v16; /*0x6ad587*/
          }
        }
      }
LABEL_117:
      SoundManager_PlayMusic(a1, (int)v17); /*0x6ad89e*/
      goto LABEL_125; /*0x6ad8a5*/
    }
    if ( (v15 & 1) == 0 ) /*0x6ad5a2*/
    {
      *(_DWORD *)(a1 + 0xDC) = v15 & 0xFFFFFFF7; /*0x6ad5d6*/
      goto LABEL_125; /*0x6ad5dc*/
    }
    if ( kHeadBodyNormalMatchRadius >= v14 ) /*0x6ad5b1*/
      v13 = *(float *)(a1 + 0x2F8) - (v14 + v14) * *(float *)(a1 + 0x2F8); /*0x6ad5c8*/
    goto LABEL_124; /*0x6ad5c8*/
  }
  if ( (v15 & 1) != 0 && (v15 & 0x10) != 0 ) /*0x6ad5ed*/
  {
    if ( *(float *)(a1 + 0x2F4) <= (double)*(float *)(a1 + 0x2F0) ) /*0x6ad602*/
    {
      *(_DWORD *)(a1 + 0xDC) = v15 & 0xFFFFFFEF; /*0x6ad609*/
      goto LABEL_125; /*0x6ad60f*/
    }
    if ( v11 <= *(_DWORD *)(a1 + 0x2EC) ) /*0x6ad61a*/
      v13 = (v14 - dbl_A2FAA0 + v14 - dbl_A2FAA0) * *(float *)(a1 + 0x2F8); /*0x6ad631*/
    else
      v13 = *(float *)(a1 + 0x2F8); /*0x6ad61e*/
    goto LABEL_124; /*0x6ad624*/
  }
  if ( (v15 & 1) == 0 ) /*0x6ad640*/
  {
    v21 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x6ad64c*/
    v22 = (TESForm *)v21; /*0x6ad651*/
    if ( !v21 ) /*0x6ad655*/
      goto LABEL_125; /*0x6ad655*/
    if ( !TESObjectCELL_IsInterior(v21) ) /*0x6ad65d*/
    {
      v23 = reference->vtbl->super.super.super.GetPos(reference); /*0x6ad67a*/
      v39 = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v22); /*0x6ad689*/
      v24 = reference->vtbl->super.super.super.GetPos(reference); /*0x6ad690*/
      v22 = sub_44A270((TESWorldSpace **)g_TESDataHandler, *v23, v24[1], v39, 0); /*0x6ad6ad*/
    }
    if ( strstr((const char *)(a1 + 0x1E4), "death") ) /*0x6ad6bb*/
      *(_WORD *)(a1 + 0xB0) = 0; /*0x6ad6c7*/
    if ( *(_WORD *)(a1 + 0xB0) != 4 && v22 ) /*0x6ad6dc*/
    {
      v25 = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)v22, 0); /*0x6ad6ea*/
      sub_6ACD10((char *)a1, v25, 0, COERCE_INT(1.0)); /*0x6ad6f2*/
      goto LABEL_125; /*0x6ad6f7*/
    }
    v17 = 0; /*0x6ad6fc*/
    if ( !MusicEnabled ) /*0x6ad705*/
      goto LABEL_117; /*0x6ad705*/
    strstr((const char *)(a1 + 0x1E4), "death"); /*0x6ad711*/
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 ) /*0x6ad72f*/
      goto LABEL_116; /*0x6ad72f*/
    v26 = *(_WORD *)(a1 + 0xB0); /*0x6ad735*/
    if ( v26 == 8 ) /*0x6ad73f*/
    {
      if ( (*(_BYTE *)(a1 + 0xDC) & 2) == 0 ) /*0x6ad748*/
        v17 = (const char *)(a1 + 0x1E4); /*0x6ad74a*/
    }
    else if ( v26 != 4 ) /*0x6ad755*/
    {
LABEL_105:
      if ( v17 ) /*0x6ad766*/
      {
        strcpy(MultiByteStr, v17); /*0x6ad76c*/
      }
      else if ( !sub_6A8E80(MultiByteStr, 4) ) /*0x6ad78e*/
      {
        goto LABEL_117; /*0x6ad78e*/
      }
      if ( _access(MultiByteStr, 0) == 0xFFFFFFFF ) /*0x6ad7a6*/
        goto LABEL_117; /*0x6ad7a6*/
      if ( *(_WORD *)(a1 + 0xB0) != 8 && !strcmp((const char *)(a1 + 0x1E4), MultiByteStr) ) /*0x6ad7c4*/
        goto LABEL_117; /*0x6ad7c4*/
      SoundManager_StopFilterGraph((_BYTE *)a1); /*0x6ad7ef*/
      v17 = (const char *)(a1 + 0x70); /*0x6ad7f4*/
      if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) < 0 ) /*0x6ad80e*/
        goto LABEL_117; /*0x6ad80e*/
      MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6ad82c*/
      if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v17 + 0x34))(*(_DWORD *)v17, WideCharStr, 0) < 0 ) /*0x6ad848*/
        goto LABEL_117; /*0x6ad848*/
      (***(void (__stdcall ****)(_DWORD, GUID *, int))v17)(*(_DWORD *)v17, &CLSID_IBasicAudio, a1 + 0x74); /*0x6ad85a*/
      if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 ) /*0x6ad863*/
        SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6ad873*/
      strcpy((char *)(a1 + 0x1E4), MultiByteStr); /*0x6ad878*/
      *(_DWORD *)(a1 + 0xDC) |= 1u; /*0x6ad88e*/
LABEL_116:
      *(_WORD *)(a1 + 0xB0) = 4; /*0x6ad895*/
      goto LABEL_117; /*0x6ad895*/
    }
    if ( (*(_BYTE *)(a1 + 0xDC) & 2) != 0 ) /*0x6ad75e*/
      goto LABEL_117; /*0x6ad75e*/
    goto LABEL_105; /*0x6ad75e*/
  }
  if ( *(float *)(a1 + 0x2F8) == *(float *)(a1 + 0x2F0) ) /*0x6ad8bd*/
    goto LABEL_125; /*0x6ad8bd*/
  v43 = *(float *)(a1 + 0x2F8) - *(float *)(a1 + 0x2F0); /*0x6ad8cb*/
  v44 = fabs(v43); /*0x6ad8d5*/
  if ( v44 >= (double)flt_A57604 ) /*0x6ad8e8*/
  {
    v27 = *(float *)(a1 + 0x2F0); /*0x6ad902*/
    if ( v27 >= *(float *)(a1 + 0x2F8) ) /*0x6ad90b*/
      v13 = v27 - dbl_A73E80; /*0x6ad915*/
    else
      v13 = v27 + dbl_A73E80; /*0x6ad90d*/
  }
  else
  {
    v13 = *(float *)(a1 + 0x2F8); /*0x6ad8ea*/
  }
LABEL_124:
  *(float *)(a1 + 0x2F0) = v13; /*0x6ad91b*/
  SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6ad92f*/
LABEL_125:
  v28 = *(_DWORD *)(a1 + 0xDC); /*0x6ad934*/
  if ( (v28 & 0x1A) == 0 ) /*0x6ad93c*/
  {
    sub_6ACD10((char *)a1, *(_WORD *)(a1 + 0xB0), 0, COERCE_INT(1.0)); /*0x6ad950*/
    return; /*0x6ad955*/
  }
  if ( (v28 & 1) != 0 /*0x6ad978*/
    && (***(int (__stdcall ****)(_DWORD, GUID *, int *))(a1 + 0x70))(*(_DWORD *)(a1 + 0x70), &CLSID_IMediaEvent, &v45) >= 0 )
  {
    if ( (*(int (__stdcall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)v45 + 0x20))( /*0x6ad99d*/
           v45,
           &v46,
           &v47,
           &v48,
           0,
           a2) >= 0 )
    {
      do /*0x6ad9ee*/
      {
        v29 = v47; /*0x6ad9a0*/
        if ( v47 > 0 && v47 <= 3 ) /*0x6ad9ab*/
        {
          sub_6A8DB0((_DWORD *)a1); /*0x6ad9af*/
          v29 = v47; /*0x6ad9b4*/
        }
        (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v46 + 0x30))(v46, v29, v48, *(_DWORD *)MultiByteStr); /*0x6ad9cd*/
      }
      while ( (*(int (__stdcall **)(int, int *, int *, CHAR *, _DWORD))(*(_DWORD *)v46 + 0x20))( /*0x6ad9ee*/
                v46,
                &v47,
                &v48,
                MultiByteStr,
                0) >= 0 );
    }
    (*(void (__cdecl **)(int))(*(_DWORD *)v46 + 8))(v46); /*0x6ad9fa*/
  }
  if ( *(_WORD *)(a1 + 0xB0) != 4 || PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) ) /*0x6ada12*/
  {
    v35 = *(_WORD *)(a1 + 0xB0); /*0x6adc15*/
    if ( v35 == 4 ) /*0x6adc20*/
      return; /*0x6adc20*/
    if ( v35 == 8 ) /*0x6adc29*/
      return; /*0x6adc29*/
    if ( !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 1) ) /*0x6adc37*/
      return;                                   // NoCombatMusic patch site: convert JZ loc_6ADDF5 to unconditional JMP loc_6ADDF5 to skip battle-music transition. /*0x6adc37*/
    v36 = 0; /*0x6adc44*/
    if ( !MusicEnabled ) /*0x6adc46*/
      return; /*0x6adc4d*/
    strstr((const char *)(a1 + 0x1E4), "death"); /*0x6adc5f*/
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 ) /*0x6adc7d*/
    {
      *(_WORD *)(a1 + 0xB0) = 4; /*0x6adc7f*/
      return; /*0x6adc88*/
    }
    v37 = *(_WORD *)(a1 + 0xB0); /*0x6adc8d*/
    if ( v37 == 8 ) /*0x6adc97*/
    {
      if ( (*(_BYTE *)(a1 + 0xDC) & 2) == 0 ) /*0x6adca0*/
        v36 = (const char *)(a1 + 0x1E4); /*0x6adca2*/
    }
    else if ( v37 != 4 ) /*0x6adcad*/
    {
      goto LABEL_176; /*0x6adcad*/
    }
    if ( (*(_BYTE *)(a1 + 0xDC) & 2) != 0 ) /*0x6adcb6*/
      return; /*0x6adcb6*/
LABEL_176:
    if ( v36 ) /*0x6adcc2*/
    {
      strcpy(MultiByteStr, v36); /*0x6adcc4*/
    }
    else if ( !sub_6A8E80(MultiByteStr, 4) ) /*0x6adce2*/
    {
      return; /*0x6adce2*/
    }
    if ( _access(MultiByteStr, 0) != 0xFFFFFFFF /*0x6add14*/
      && (*(_WORD *)(a1 + 0xB0) == 8 || strcmp((const char *)(a1 + 0x1E4), MultiByteStr)) )
    {
      SoundManager_StopFilterGraph((_BYTE *)a1); /*0x6add3f*/
      v9 = (const char *)(a1 + 0x70); /*0x6add44*/
      if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) >= 0 ) /*0x6add5e*/
      {
        MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6add7c*/
        if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v9 + 0x34))(*(_DWORD *)v9, WideCharStr, 0) >= 0 ) /*0x6add98*/
        {
          (***(void (__stdcall ****)(_DWORD, GUID *, int))v9)(*(_DWORD *)v9, &CLSID_IBasicAudio, a1 + 0x74); /*0x6addaa*/
          if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 ) /*0x6addb3*/
            SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6addc3*/
          strcpy((char *)(a1 + 0x1E4), MultiByteStr); /*0x6addc8*/
LABEL_187:
          *(_DWORD *)(a1 + 0xDC) |= 1u; /*0x6addde*/
LABEL_188:
          *(_WORD *)(a1 + 0xB0) = 4; /*0x6adde5*/
          goto LABEL_189; /*0x6adde5*/
        }
      }
    }
    return; /*0x6add98*/
  }
  v30 = 0; /*0x6ada1f*/
  v31 = 0xFFFF; /*0x6ada28*/
  if ( MusicEnabled && !strstr((const char *)(a1 + 0x1E4), "death") ) /*0x6ada3f*/
  {
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 ) /*0x6ada69*/
      goto LABEL_162; /*0x6ada69*/
    v32 = *(_WORD *)(a1 + 0xB0); /*0x6ada6f*/
    if ( v32 == 8 && (*(_BYTE *)(a1 + 0xDC) & 2) == 0 ) /*0x6ada83*/
      v30 = (const char *)(a1 + 0x1E4); /*0x6ada85*/
    if ( (v32 != (__int16)0xFFFF || (*(_BYTE *)(a1 + 0xDC) & 2) == 0) && (v32 == 8 || v32 == 4) ) /*0x6adaa4*/
    {
      if ( v30 ) /*0x6adaac*/
      {
        strcpy(MultiByteStr, v30); /*0x6adab2*/
      }
      else
      {
        if ( TES_GetCurrentCell(MEMORY[0xB333A0]) ) /*0x6adaca*/
        {
          v33 = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x6adadb*/
          v31 = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)v33, 0); /*0x6adae7*/
        }
        else
        {
          v31 = 0; /*0x6adaec*/
        }
        if ( !sub_6A8E80(MultiByteStr, v31) ) /*0x6adafd*/
          return; /*0x6adafd*/
      }
      if ( _access(MultiByteStr, 0) != 0xFFFFFFFF /*0x6adb34*/
        && (*(_WORD *)(a1 + 0xB0) == 8 || strcmp((const char *)(a1 + 0x1E4), MultiByteStr)) )
      {
        SoundManager_StopFilterGraph((_BYTE *)a1); /*0x6adb5f*/
        v34 = (_DWORD *)(a1 + 0x70); /*0x6adb64*/
        if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) >= 0 ) /*0x6adb7e*/
        {
          MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6adb9c*/
          if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(*(_DWORD *)*v34 + 0x34))(*v34, WideCharStr, 0) >= 0 ) /*0x6adbb8*/
          {
            (**(void (__stdcall ***)(_DWORD, GUID *, int))*v34)(*v34, &CLSID_IBasicAudio, a1 + 0x74); /*0x6adbce*/
            if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 ) /*0x6adbd7*/
              SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6adbe7*/
            strcpy((char *)(a1 + 0x1E4), MultiByteStr); /*0x6adbec*/
            *(_DWORD *)(a1 + 0xDC) |= 1u; /*0x6adc02*/
LABEL_162:
            *(_WORD *)(a1 + 0xB0) = v31; /*0x6adc09*/
          }
        }
      }
    }
  }
}
