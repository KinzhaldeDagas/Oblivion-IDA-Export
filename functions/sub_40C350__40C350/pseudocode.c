//
// Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
void __thiscall sub_40C350(InputGlobal **this)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  SceneGraph *v4; // esi
  NiNode *v5; // esi
  NiNode *v6; // esi
  BSShaderProperty *v7; // esi
  BSShaderProperty *v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // esi
  NiScreenElements *v10; // esi
  unsigned int v11; // esi
  unsigned int i; // esi
  unsigned int v13; // edi
  unsigned int j; // edi
  unsigned int v15; // esi
  int v16; // eax
  _BYTE *v17; // eax
  unsigned int k; // edi
  unsigned int v19; // esi
  int v20; // eax
  _BYTE *v21; // eax
  unsigned int m; // edi
  unsigned int v23; // esi
  int v24; // eax
  _BYTE *v25; // eax
  unsigned int n; // edi
  unsigned int v27; // esi
  int v28; // eax
  _BYTE *v29; // eax
  unsigned int ii; // edi
  unsigned int v31; // esi
  int v32; // eax
  _BYTE *v33; // eax
  unsigned int jj; // edi
  unsigned int v35; // esi
  int v36; // eax
  _BYTE *v37; // eax
  unsigned int kk; // edi
  unsigned int v39; // esi
  int v40; // eax
  _BYTE *v41; // eax
  unsigned int mm; // edi
  unsigned int v43; // esi
  int v44; // eax
  _BYTE *v45; // eax

  ArchiveManager_Clear_(); /*0x40c377*/
  InputGlobals::SaveControlSettingsToINI((DIDEVCAPS *)*(this + 8)); /*0x40c37f*/
  MEMORY[0xB333A8] = 0; /*0x40c386*/
  MEMORY[0xB333AC] = 0; /*0x40c38c*/
  MEMORY[0xB333A4] = 0; /*0x40c392*/
  v2 = (unsigned int)*(this + 8); /*0x40c398*/
  if ( v2 ) /*0x40c39d*/
  {
    InputGlobals::ShutdownInputSystem(*(this + 8)); /*0x40c3a1*/
    FormHeapFree(v2); /*0x40c3a7*/
  }
  *(this + 8) = 0; /*0x40c3af*/
  v3 = unk_B3339C; /*0x40c3ba*/
  if ( unk_B3339C ) /*0x40c3bc*/
  {
    sub_494F30((unsigned int *)unk_B3339C); /*0x40c3be*/
    FormHeapFree(v3); /*0x40c3c4*/
  }
  if ( g_WorldSceneReceiverRoot ) /*0x40c3de*/
  {
    v4 = g_WorldSceneReceiverRoot; /*0x40c3e0*/
    if ( !InterlockedDecrement((volatile LONG *)&g_WorldSceneReceiverRoot->super) ) /*0x40c3e6*/
    {
      if ( v4 ) /*0x40c3ee*/
        (*(void (__thiscall **)(SceneGraph *, int))v4->vftable)(v4, 1); /*0x40c3f7*/
    }
    g_WorldSceneReceiverRoot = 0; /*0x40c3f9*/
  }
  v5 = root; /*0x40c3ff*/
  if ( root ) /*0x40c407*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&root->members) ) /*0x40c40d*/
    {
      if ( v5 ) /*0x40c415*/
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x40c41e*/
    }
    root = 0; /*0x40c420*/
  }
  v6 = unk_B333DC; /*0x40c426*/
  if ( unk_B333DC ) /*0x40c42e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B333DC->members) ) /*0x40c434*/
    {
      if ( v6 ) /*0x40c43c*/
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1); /*0x40c445*/
    }
    unk_B333DC = 0; /*0x40c447*/
  }
  v7 = unk_B333E0; /*0x40c44d*/
  if ( unk_B333E0 ) /*0x40c455*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B333E0->member) ) /*0x40c45b*/
    {
      if ( v7 ) /*0x40c463*/
        (*(void (__thiscall **)(BSShaderProperty *, int))v7->vtbl)(v7, 1); /*0x40c46c*/
    }
    unk_B333E0 = 0; /*0x40c46e*/
  }
  v8 = unk_B333E4;                              // Fog decode: scene/global teardown release path for B333E4 active fog property. /*0x40c474*/
  if ( unk_B333E4 ) /*0x40c47c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B333E4->member) ) /*0x40c482*/
    {
      if ( v8 ) /*0x40c48a*/
        (*(void (__thiscall **)(BSShaderProperty *, int))v8->vtbl)(v8, 1); /*0x40c493*/
    }
    unk_B333E4 = 0;                             // Fog decode: scene/global teardown nulls B333E4 after releasing the active fog property. /*0x40c495*/
  }
  v9 = (void (__thiscall ***)(_DWORD, int))texture; /*0x40c49b*/
  if ( texture ) /*0x40c4a3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(texture + 4)) ) /*0x40c4a9*/
    {
      if ( v9 ) /*0x40c4b1*/
        (**v9)(v9, 1); /*0x40c4ba*/
    }
    texture = 0; /*0x40c4bc*/
  }
  v10 = MEMORY[0xB333EC]; /*0x40c4c2*/
  if ( MEMORY[0xB333EC] ) /*0x40c4ca*/
  {
    if ( !InterlockedDecrement((volatile LONG *)MEMORY[0xB333EC] + 1) ) /*0x40c4d0*/
    {
      if ( v10 ) /*0x40c4d8*/
        (**(void (__thiscall ***)(NiScreenElements *, int))v10)(v10, 1); /*0x40c4e1*/
    }
    MEMORY[0xB333EC] = 0; /*0x40c4e3*/
  }
  if ( *(_DWORD *)&MEMORY[0xB33E90][0xF00] ) /*0x40c4f1*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&MEMORY[0xB33E90][0xF00] + 4) ) /*0x40c4f3*/
    {
      v11 = *(_DWORD *)&MEMORY[0xB33E90][0xF00]; /*0x40c4f8*/
      sub_4946B0(*(_DWORD **)&MEMORY[0xB33E90][0xF00]); /*0x40c4fa*/
      FormHeapFree(v11); /*0x40c500*/
    }
  }
  for ( i = 0; i < 3; ++i ) /*0x40c508*/
  {
    v13 = unk_B39548[i]; /*0x40c510*/
    if ( v13 ) /*0x40c518*/
    {
      GameSetting_destr((int *)unk_B39548[i]); /*0x40c51c*/
      FormHeapFree(v13); /*0x40c522*/
    }
  }
  for ( j = 0; j < 0xEE; ++j ) /*0x40c532*/
  {
    v15 = unk_B39578[j]; /*0x40c534*/
    if ( v15 ) /*0x40c540*/
    {
      v16 = *(_DWORD *)(v15 + 4); /*0x40c542*/
      if ( v16 ) /*0x40c54b*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v16); /*0x40c553*/
      v17 = *(_BYTE **)(v15 + 4); /*0x40c558*/
      if ( v17 ) /*0x40c565*/
      {
        if ( *v17 == 0x53 ) /*0x40c56a*/
          FormHeapFree((unsigned int)v17); /*0x40c56d*/
      }
      FormHeapFree(v15); /*0x40c576*/
    }
  }
  for ( k = 0; k < 9; ++k ) /*0x40c589*/
  {
    v19 = unk_B39554[k]; /*0x40c590*/
    if ( v19 ) /*0x40c59c*/
    {
      v20 = *(_DWORD *)(v19 + 4); /*0x40c59e*/
      if ( v20 ) /*0x40c5a7*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v20); /*0x40c5af*/
      v21 = *(_BYTE **)(v19 + 4); /*0x40c5b4*/
      if ( v21 ) /*0x40c5c1*/
      {
        if ( *v21 == 0x53 ) /*0x40c5c6*/
          FormHeapFree((unsigned int)v21); /*0x40c5c9*/
      }
      FormHeapFree(v19); /*0x40c5d2*/
    }
  }
  for ( m = 0; m < 8; ++m ) /*0x40c5e2*/
  {
    v23 = g_joyPOVLabelSetting_Up[m]; /*0x40c5f0*/
    if ( v23 ) /*0x40c5fc*/
    {
      v24 = *(_DWORD *)(v23 + 4); /*0x40c5fe*/
      if ( v24 ) /*0x40c607*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v24); /*0x40c60f*/
      v25 = *(_BYTE **)(v23 + 4); /*0x40c614*/
      if ( v25 ) /*0x40c621*/
      {
        if ( *v25 == 0x53 ) /*0x40c626*/
          FormHeapFree((unsigned int)v25); /*0x40c629*/
      }
      FormHeapFree(v23); /*0x40c632*/
    }
  }
  for ( n = 0; n < 0x1D; ++n ) /*0x40c642*/
  {
    v27 = g_controlActionLabelSetting_Forward[n]; /*0x40c650*/
    if ( v27 ) /*0x40c65c*/
    {
      v28 = *(_DWORD *)(v27 + 4); /*0x40c65e*/
      if ( v28 ) /*0x40c667*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v28); /*0x40c66f*/
      v29 = *(_BYTE **)(v27 + 4); /*0x40c674*/
      if ( v29 ) /*0x40c681*/
      {
        if ( *v29 == 0x53 ) /*0x40c686*/
          FormHeapFree((unsigned int)v29); /*0x40c689*/
      }
      FormHeapFree(v27); /*0x40c692*/
    }
  }
  for ( ii = 0; ii < 6; ++ii ) /*0x40c6a2*/
  {
    v31 = unk_B39A44[ii]; /*0x40c6a4*/
    if ( v31 ) /*0x40c6b0*/
    {
      v32 = *(_DWORD *)(v31 + 4); /*0x40c6b2*/
      if ( v32 ) /*0x40c6bf*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v32); /*0x40c6c7*/
      v33 = *(_BYTE **)(v31 + 4); /*0x40c6cc*/
      if ( v33 ) /*0x40c6d9*/
      {
        if ( *v33 == 0x53 ) /*0x40c6de*/
          FormHeapFree((unsigned int)v33); /*0x40c6e1*/
      }
      FormHeapFree(v31); /*0x40c6ea*/
    }
  }
  for ( jj = 0; jj < 0x14; ++jj ) /*0x40c6fa*/
  {
    v35 = unk_B39A60[jj]; /*0x40c701*/
    if ( v35 ) /*0x40c70d*/
    {
      v36 = *(_DWORD *)(v35 + 4); /*0x40c70f*/
      if ( v36 ) /*0x40c718*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v36); /*0x40c720*/
      v37 = *(_BYTE **)(v35 + 4); /*0x40c725*/
      if ( v37 ) /*0x40c732*/
      {
        if ( *v37 == 0x53 ) /*0x40c737*/
          FormHeapFree((unsigned int)v37); /*0x40c73a*/
      }
      FormHeapFree(v35); /*0x40c743*/
    }
  }
  for ( kk = 0; kk < 0x1F; ++kk ) /*0x40c753*/
  {
    v39 = g_xboxPromptSetting_DPadY[kk]; /*0x40c760*/
    if ( v39 ) /*0x40c76c*/
    {
      v40 = *(_DWORD *)(v39 + 4); /*0x40c76e*/
      if ( v40 ) /*0x40c777*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v40); /*0x40c77f*/
      v41 = *(_BYTE **)(v39 + 4); /*0x40c784*/
      if ( v41 ) /*0x40c791*/
      {
        if ( *v41 == 0x53 ) /*0x40c796*/
          FormHeapFree((unsigned int)v41); /*0x40c799*/
      }
      FormHeapFree(v39); /*0x40c7a2*/
    }
  }
  for ( mm = 0; mm < 6; ++mm ) /*0x40c7b2*/
  {
    v43 = unk_B39530[mm]; /*0x40c7c0*/
    if ( v43 ) /*0x40c7cc*/
    {
      v44 = *(_DWORD *)(v43 + 4); /*0x40c7ce*/
      if ( v44 ) /*0x40c7d7*/
        NiTMap_RemoveAt(&g_GameSettingsByName, v44); /*0x40c7df*/
      v45 = *(_BYTE **)(v43 + 4); /*0x40c7e4*/
      if ( v45 ) /*0x40c7f1*/
      {
        if ( *v45 == 0x53 ) /*0x40c7f6*/
          FormHeapFree((unsigned int)v45); /*0x40c7f9*/
      }
      FormHeapFree(v43); /*0x40c802*/
    }
  }
}
