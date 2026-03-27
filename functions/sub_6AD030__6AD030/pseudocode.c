void __usercall sub_6AD030(int a1@<ecx>, int a2@<edi>)
{
  void (__stdcall ***v3)(_DWORD, GUID *, int); // ecx
  TESObjectCELL *ParentCell; // eax
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
  signed int v29; // ecx
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
  signed int v47; // [esp+90h] [ebp-414h] BYREF
  int v48; // [esp+94h] [ebp-410h] BYREF
  CHAR MultiByteStr[512]; // [esp+98h] [ebp-40Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+298h] [ebp-20Ch] BYREF

  if ( !MusicEnabled )
    return;
  v3 = *(void (__stdcall ****)(_DWORD, GUID *, int))(a1 + 0x70);
  if ( !v3 )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    v5 = (TESForm *)ParentCell;
    if ( !ParentCell )
      return;
    if ( !TESObjectCELL_IsInterior(ParentCell) )
    {
      v6 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v5);
      v7 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v5 = sub_44A270((TESWorldSpace **)TESDataHandler, *v6, v7[1], WorldSpace, 0);
    }
    if ( *(_WORD *)(a1 + 0xB0) != 4 && v5 )
    {
      v40 = *(int *)(a1 + 0x2F8);
      MusicType = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)v5, 0);
      sub_6ACD10((char *)a1, MusicType, 0, v40);
      return;
    }
    v9 = 0;
    if ( !MusicEnabled )
      goto LABEL_189;
    strstr((const char *)(a1 + 0x1E4), "death");
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 )
      goto LABEL_188;
    v10 = *(_WORD *)(a1 + 0xB0);
    if ( v10 == 8 )
    {
      if ( (*(_BYTE *)(a1 + 0xDC) & 2) == 0 )
        v9 = (const char *)(a1 + 0x1E4);
    }
    else if ( v10 != 4 )
    {
LABEL_18:
      if ( v9 )
      {
        strcpy(MultiByteStr, v9);
        goto LABEL_21;
      }
      if ( sub_6A8E80(MultiByteStr, 4) )
      {
LABEL_21:
        if ( _access(MultiByteStr, 0) == 0xFFFFFFFF )
          goto LABEL_189;
        if ( *(_WORD *)(a1 + 0xB0) != 8 && !strcmp((const char *)(a1 + 0x1E4), MultiByteStr) )
          goto LABEL_189;
        SoundManager_StopFilterGraph((_BYTE *)a1);
        v9 = (const char *)(a1 + 0x70);
        if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) < 0 )
          goto LABEL_189;
        MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
        if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v9 + 0x34))(*(_DWORD *)v9, WideCharStr, 0) < 0 )
          goto LABEL_189;
        (***(void (__stdcall ****)(_DWORD, GUID *, int))v9)(*(_DWORD *)v9, &CLSID_IBasicAudio, a1 + 0x74);
        if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 )
          SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0);
        strcpy((char *)(a1 + 0x1E4), MultiByteStr);
        goto LABEL_187;
      }
LABEL_189:
      SoundManager_PlayMusic(a1, (int)v9);
      return;
    }
    if ( (*(_BYTE *)(a1 + 0xDC) & 2) != 0 )
      goto LABEL_189;
    goto LABEL_18;
  }
  v11 = Seed;
  v47 = Seed - *(_DWORD *)(a1 + 0x2E8);
  v12 = (double)v47;
  if ( v47 < 0 )
    v12 = v12 + flt_A2FC78;
  v42 = v12 / dbl_A771C0;
  v13 = 0.0;
  v14 = v42;
  if ( v42 >= 0.0 )
  {
    if ( v14 > 1.0 )
    {
      v42 = 1.0;
      v14 = (float)1.0;
    }
  }
  else
  {
    v42 = 0.0;
    v14 = (float)0.0;
  }
  if ( !*(_DWORD *)(a1 + 0x74) )
  {
    (**v3)(v3, &CLSID_IBasicAudio, a1 + 0x74);
    v13 = 0.0;
    v14 = v42;
  }
  v15 = *(_DWORD *)(a1 + 0xDC);
  if ( (v15 & 8) != 0 )
  {
    if ( *(float *)(a1 + 0x2F0) < dbl_A68610 )
    {
      v16 = *(_WORD *)(a1 + 0x2FC);
      *(_DWORD *)(a1 + 0xDC) = v15 & 0xFFFFFFE7 | 0x10;
      v17 = 0;
      if ( !MusicEnabled || strstr((const char *)(a1 + 0x1E4), "death") && v16 == (__int16)0xFFFF )
        goto LABEL_117;
      if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 )
        goto LABEL_73;
      v18 = *(_WORD *)(a1 + 0xB0);
      if ( v18 == 8 && (*(_BYTE *)(a1 + 0xDC) & 2) == 0 )
        v17 = (const char *)(a1 + 0x1E4);
      if ( v18 == 4 && v16 == 8 )
        *(_WORD *)(a1 + 0xB0) = 0;
      v19 = *(_WORD *)(a1 + 0xB0);
      if ( ((v19 == 8 || v19 == 4) && v16 != (__int16)0xFFFF || v19 == v16) && (*(_BYTE *)(a1 + 0xDC) & 2) != 0
        || v19 != 8 && v19 != 4 && v16 == (__int16)0xFFFF )
      {
        goto LABEL_117;
      }
      if ( v17 )
      {
        strcpy(MultiByteStr, v17);
      }
      else
      {
        if ( v16 == (__int16)0xFFFF )
        {
          if ( TES_GetCurrentCell(TES) )
          {
            CurrentCell = TES_GetCurrentCell(TES);
            v16 = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)CurrentCell, 0);
          }
          else
          {
            v16 = 0;
          }
        }
        if ( !sub_6A8E80(MultiByteStr, v16) )
          goto LABEL_117;
      }
      if ( _access(MultiByteStr, 0) != 0xFFFFFFFF
        && (*(_WORD *)(a1 + 0xB0) == 8 || strcmp((const char *)(a1 + 0x1E4), MultiByteStr)) )
      {
        SoundManager_StopFilterGraph((_BYTE *)a1);
        v17 = (const char *)(a1 + 0x70);
        if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) >= 0 )
        {
          MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
          if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v17 + 0x34))(*(_DWORD *)v17, WideCharStr, 0) >= 0 )
          {
            (***(void (__stdcall ****)(_DWORD, GUID *, int))v17)(*(_DWORD *)v17, &CLSID_IBasicAudio, a1 + 0x74);
            if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 )
              SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0);
            strcpy((char *)(a1 + 0x1E4), MultiByteStr);
            *(_DWORD *)(a1 + 0xDC) |= 1u;
LABEL_73:
            *(_WORD *)(a1 + 0xB0) = v16;
          }
        }
      }
LABEL_117:
      SoundManager_PlayMusic(a1, (int)v17);
      goto LABEL_125;
    }
    if ( (v15 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 0xDC) = v15 & 0xFFFFFFF7;
      goto LABEL_125;
    }
    if ( flt_A3D65C >= v14 )
      v13 = *(float *)(a1 + 0x2F8) - (v14 + v14) * *(float *)(a1 + 0x2F8);
    goto LABEL_124;
  }
  if ( (v15 & 1) != 0 && (v15 & 0x10) != 0 )
  {
    if ( *(float *)(a1 + 0x2F4) <= (double)*(float *)(a1 + 0x2F0) )
    {
      *(_DWORD *)(a1 + 0xDC) = v15 & 0xFFFFFFEF;
      goto LABEL_125;
    }
    if ( v11 <= *(_DWORD *)(a1 + 0x2EC) )
      v13 = (v14 - dbl_A2FAA0 + v14 - dbl_A2FAA0) * *(float *)(a1 + 0x2F8);
    else
      v13 = *(float *)(a1 + 0x2F8);
    goto LABEL_124;
  }
  if ( (v15 & 1) == 0 )
  {
    v21 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    v22 = (TESForm *)v21;
    if ( !v21 )
      goto LABEL_125;
    if ( !TESObjectCELL_IsInterior(v21) )
    {
      v23 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v39 = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v22);
      v24 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v22 = sub_44A270((TESWorldSpace **)TESDataHandler, *v23, v24[1], v39, 0);
    }
    if ( strstr((const char *)(a1 + 0x1E4), "death") )
      *(_WORD *)(a1 + 0xB0) = 0;
    if ( *(_WORD *)(a1 + 0xB0) != 4 && v22 )
    {
      v25 = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)v22, 0);
      sub_6ACD10((char *)a1, v25, 0, COERCE_INT(1.0));
      goto LABEL_125;
    }
    v17 = 0;
    if ( !MusicEnabled )
      goto LABEL_117;
    strstr((const char *)(a1 + 0x1E4), "death");
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 )
      goto LABEL_116;
    v26 = *(_WORD *)(a1 + 0xB0);
    if ( v26 == 8 )
    {
      if ( (*(_BYTE *)(a1 + 0xDC) & 2) == 0 )
        v17 = (const char *)(a1 + 0x1E4);
    }
    else if ( v26 != 4 )
    {
LABEL_105:
      if ( v17 )
      {
        strcpy(MultiByteStr, v17);
      }
      else if ( !sub_6A8E80(MultiByteStr, 4) )
      {
        goto LABEL_117;
      }
      if ( _access(MultiByteStr, 0) == 0xFFFFFFFF )
        goto LABEL_117;
      if ( *(_WORD *)(a1 + 0xB0) != 8 && !strcmp((const char *)(a1 + 0x1E4), MultiByteStr) )
        goto LABEL_117;
      SoundManager_StopFilterGraph((_BYTE *)a1);
      v17 = (const char *)(a1 + 0x70);
      if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) < 0 )
        goto LABEL_117;
      MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
      if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v17 + 0x34))(*(_DWORD *)v17, WideCharStr, 0) < 0 )
        goto LABEL_117;
      (***(void (__stdcall ****)(_DWORD, GUID *, int))v17)(*(_DWORD *)v17, &CLSID_IBasicAudio, a1 + 0x74);
      if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 )
        SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0);
      strcpy((char *)(a1 + 0x1E4), MultiByteStr);
      *(_DWORD *)(a1 + 0xDC) |= 1u;
LABEL_116:
      *(_WORD *)(a1 + 0xB0) = 4;
      goto LABEL_117;
    }
    if ( (*(_BYTE *)(a1 + 0xDC) & 2) != 0 )
      goto LABEL_117;
    goto LABEL_105;
  }
  if ( *(float *)(a1 + 0x2F8) == *(float *)(a1 + 0x2F0) )
    goto LABEL_125;
  v43 = *(float *)(a1 + 0x2F8) - *(float *)(a1 + 0x2F0);
  v44 = fabs(v43);
  if ( v44 >= (double)flt_A57604 )
  {
    v27 = *(float *)(a1 + 0x2F0);
    if ( v27 >= *(float *)(a1 + 0x2F8) )
      v13 = v27 - dbl_A73E80;
    else
      v13 = v27 + dbl_A73E80;
  }
  else
  {
    v13 = *(float *)(a1 + 0x2F8);
  }
LABEL_124:
  *(float *)(a1 + 0x2F0) = v13;
  SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0);
LABEL_125:
  v28 = *(_DWORD *)(a1 + 0xDC);
  if ( (v28 & 0x1A) == 0 )
  {
    sub_6ACD10((char *)a1, *(_WORD *)(a1 + 0xB0), 0, COERCE_INT(1.0));
    return;
  }
  if ( (v28 & 1) != 0
    && (***(int (__stdcall ****)(_DWORD, GUID *, int *))(a1 + 0x70))(*(_DWORD *)(a1 + 0x70), &CLSID_IMediaEvent, &v45) >= 0 )
  {
    if ( (*(int (__stdcall **)(int, int *, signed int *, int *, _DWORD, int))(*(_DWORD *)v45 + 0x20))(
           v45,
           &v46,
           &v47,
           &v48,
           0,
           a2) >= 0 )
    {
      do
      {
        v29 = v47;
        if ( v47 > 0 && v47 <= 3 )
        {
          sub_6A8DB0((_DWORD *)a1);
          v29 = v47;
        }
        (*(void (__stdcall **)(int, signed int, int, _DWORD))(*(_DWORD *)v46 + 0x30))(
          v46,
          v29,
          v48,
          *(_DWORD *)MultiByteStr);
      }
      while ( (*(int (__stdcall **)(int, signed int *, int *, CHAR *, _DWORD))(*(_DWORD *)v46 + 0x20))(
                v46,
                &v47,
                &v48,
                MultiByteStr,
                0) >= 0 );
    }
    (*(void (__cdecl **)(int))(*(_DWORD *)v46 + 8))(v46);
  }
  if ( *(_WORD *)(a1 + 0xB0) != 4 || PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)TESDataHandler_g_PlayerRef, 0) )
  {
    v35 = *(_WORD *)(a1 + 0xB0);
    if ( v35 == 4 )
      return;
    if ( v35 == 8 )
      return;
    if ( !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)TESDataHandler_g_PlayerRef, 1) )
      return;
    v36 = 0;
    if ( !MusicEnabled )
      return;
    strstr((const char *)(a1 + 0x1E4), "death");
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 )
    {
      *(_WORD *)(a1 + 0xB0) = 4;
      return;
    }
    v37 = *(_WORD *)(a1 + 0xB0);
    if ( v37 == 8 )
    {
      if ( (*(_BYTE *)(a1 + 0xDC) & 2) == 0 )
        v36 = (const char *)(a1 + 0x1E4);
    }
    else if ( v37 != 4 )
    {
      goto LABEL_176;
    }
    if ( (*(_BYTE *)(a1 + 0xDC) & 2) != 0 )
      return;
LABEL_176:
    if ( v36 )
    {
      strcpy(MultiByteStr, v36);
    }
    else if ( !sub_6A8E80(MultiByteStr, 4) )
    {
      return;
    }
    if ( _access(MultiByteStr, 0) != 0xFFFFFFFF
      && (*(_WORD *)(a1 + 0xB0) == 8 || strcmp((const char *)(a1 + 0x1E4), MultiByteStr)) )
    {
      SoundManager_StopFilterGraph((_BYTE *)a1);
      v9 = (const char *)(a1 + 0x70);
      if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) >= 0 )
      {
        MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
        if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v9 + 0x34))(*(_DWORD *)v9, WideCharStr, 0) >= 0 )
        {
          (***(void (__stdcall ****)(_DWORD, GUID *, int))v9)(*(_DWORD *)v9, &CLSID_IBasicAudio, a1 + 0x74);
          if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 )
            SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0);
          strcpy((char *)(a1 + 0x1E4), MultiByteStr);
LABEL_187:
          *(_DWORD *)(a1 + 0xDC) |= 1u;
LABEL_188:
          *(_WORD *)(a1 + 0xB0) = 4;
          goto LABEL_189;
        }
      }
    }
    return;
  }
  v30 = 0;
  v31 = 0xFFFF;
  if ( MusicEnabled && !strstr((const char *)(a1 + 0x1E4), "death") )
  {
    if ( strstr((const char *)(a1 + 0x1E4), "success") && *(_WORD *)(a1 + 0xB0) == 8 )
      goto LABEL_162;
    v32 = *(_WORD *)(a1 + 0xB0);
    if ( v32 == 8 && (*(_BYTE *)(a1 + 0xDC) & 2) == 0 )
      v30 = (const char *)(a1 + 0x1E4);
    if ( (v32 != (__int16)0xFFFF || (*(_BYTE *)(a1 + 0xDC) & 2) == 0) && (v32 == 8 || v32 == 4) )
    {
      if ( v30 )
      {
        strcpy(MultiByteStr, v30);
      }
      else
      {
        if ( TES_GetCurrentCell(TES) )
        {
          v33 = TES_GetCurrentCell(TES);
          v31 = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)v33, 0);
        }
        else
        {
          v31 = 0;
        }
        if ( !sub_6A8E80(MultiByteStr, v31) )
          return;
      }
      if ( _access(MultiByteStr, 0) != 0xFFFFFFFF
        && (*(_WORD *)(a1 + 0xB0) == 8 || strcmp((const char *)(a1 + 0x1E4), MultiByteStr)) )
      {
        SoundManager_StopFilterGraph((_BYTE *)a1);
        v34 = (_DWORD *)(a1 + 0x70);
        if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)(a1 + 0x70)) >= 0 )
        {
          MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
          if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(*(_DWORD *)*v34 + 0x34))(*v34, WideCharStr, 0) >= 0 )
          {
            (**(void (__stdcall ***)(_DWORD, GUID *, int))*v34)(*v34, &CLSID_IBasicAudio, a1 + 0x74);
            if ( (*(_BYTE *)(a1 + 0xDC) & 0x18) == 0 )
              SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0);
            strcpy((char *)(a1 + 0x1E4), MultiByteStr);
            *(_DWORD *)(a1 + 0xDC) |= 1u;
LABEL_162:
            *(_WORD *)(a1 + 0xB0) = v31;
          }
        }
      }
    }
  }
}
