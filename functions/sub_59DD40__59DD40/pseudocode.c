// Close player dialogue and consume any globally parked clicked-Goodbye INFO with RunResult then AddTopicList. This path does not test RunForRumors. Therefore a Goodbye INFOGENERAL lacking RunForRumors can complete without closing, leave its result pending across later ordinary TOPIC choices, and commit only on a later close unless another Goodbye overwrites it.
void __thiscall DialogMenu::Close(DialogMenu *this)
{
  int v1; // esi
  double v2; // st5
  double v3; // st6
  Tile *OpenMenuTile; // ebp
  MenuTopicManagerView *Singleton; // eax
  int ParentMenu; // eax
  int v7; // edi
  char v8; // al
  TESObjectREFR *v9; // esi
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v11; // ecx
  double v12; // st7
  SitSleep (__thiscall *GetSleepState)(TESObjectREFR *); // eax
  TESObjectREFRVtbl *v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // [esp+2Ch] [ebp-14h]
  char v19; // [esp+3Fh] [ebp-1h]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x59dd50*/
  Singleton = MenuTopicManager::GetSingleton(); /*0x59dd52*/
  if ( OpenMenuTile ) /*0x59dd5b*/
  {
    if ( Singleton ) /*0x59dd63*/
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x59dd6c*/
      v7 = ParentMenu; /*0x59dd71*/
      if ( ParentMenu ) /*0x59dd75*/
      {
        v8 = *(_BYTE *)(ParentMenu + 0x88); /*0x59dd7d*/
        v18 = v1; /*0x59dd83*/
        *(float *)(v7 + 0x68) = 0.0; /*0x59dd84*/
        v9 = *(TESObjectREFR **)(v7 + 0x60); /*0x59dd87*/
        *(_DWORD *)(v7 + 0x6C) = 0xFFFFFFFF; /*0x59dd8c*/
        v19 = v8; /*0x59dd93*/
        if ( v9 ) /*0x59dd97*/
        {
          if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD, int))v9->vtbl->Unk_4C)(v9, 0, v18) ) /*0x59dda4*/
            *(_BYTE *)(((int (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl->Unk_4C)(v9, 0) + 0x112) = 0; /*0x59ddb7*/
          if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl->Unk_4D)(v9, 0) ) /*0x59ddc8*/
            *(_BYTE *)(((int (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl->Unk_4D)(v9, 0) + 0x112) = 0; /*0x59dddb*/
        }
        Tile_SetFloat(OpenMenuTile, (_DWORD *)0x1772, fConstant_2); /*0x59ddf2*/
        Menu::StartFadeOut((_DWORD *)v7, v3); /*0x59ddf9*/
        if ( dword_B3B0B4[0x78] )               // Check the globally parked clicked-Goodbye INFO. The pointer can outlive its response transition when INFOGENERAL lacked RunForRumors and LoadNextTopicList cleared closePending. /*0x59ddfe*/
        {
          if ( !v19 ) /*0x59de0c*/
          {
            TESTopicInfo::RunResult((OblivionTopicInfo *)dword_B3B0B4[0x78], v9);// Close-time Goodbye result executes regardless of topic type or RunForRumors, followed by AddTopicList. For a no-RunForRumors rumor this may be delayed until a later manual close. /*0x59de0f*/
            TESTopicInfo::AddTopicList((OblivionTopicInfo *)dword_B3B0B4[0x78]); /*0x59de1a*/
            dword_B3B0B4[0x78] = 0; /*0x59de1f*/
          }
        }
        Actor::StopDialoguePlayback((Actor *)v9); /*0x59de27*/
        ((void (__thiscall *)(TESObjectREFR *, _DWORD, int))v9->vtbl[1].super.Unk_23)(v9, 0, v18); /*0x59de37*/
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.Unk_8D)(reference, 0); /*0x59de48*/
        v9->vtbl[1].GetAnimData(v9); /*0x59de54*/
        vtbl = v9[1].vtbl; /*0x59de56*/
        if ( vtbl ) /*0x59de5b*/
        {
          (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))vtbl->super.super.InitializeComponent + 0x78))(vtbl, 0); /*0x59de66*/
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v9->vtbl[1].GetSleepState)(v9, 1) ) /*0x59de74*/
            (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v9[1].vtbl->super.super.InitializeComponent /*0x59de85*/
             + 6))(
              v9[1].vtbl,
              v9,
              1);
        }
        v11 = v9[1].vtbl; /*0x59de8b*/
        if ( HIBYTE(retaddr) ) /*0x59de8e*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *))v11->super.super.InitializeComponent + 0x12A))(v11); /*0x59dea1*/
        else
          LOBYTE(v11->HasFatigue) = 1; /*0x59de90*/
        v12 = unk_B36AE8[0]; /*0x59dea6*/
        (*((void (__cdecl **)(float))v9[1].vtbl->super.super.InitializeComponent + 0xD9))(unk_B36AE8[0]); /*0x59deb8*/
        sub_5E05F0((Actor *)v9, 0x30); /*0x59debe*/
        sub_65DA10(reference); /*0x59dec9*/
        if ( dword_B3B0B4[0x78] )               // Second mutually exclusive close-order branch reads the same parked Goodbye pointer after teardown; it likewise ignores RunForRumors. /*0x59dece*/
        {
          if ( v19 ) /*0x59dedc*/
          {
            TESTopicInfo::RunResult((OblivionTopicInfo *)dword_B3B0B4[0x78], v9);// Close-state +0x88 != 0 Goodbye commit after teardown: RunResult then close-time AddTopicList. The earlier and later close branches are mutually exclusive; completed Goodbye still had its first AddTopicList in LoadNextTopicList. /*0x59dedf*/
            TESTopicInfo::AddTopicList((OblivionTopicInfo *)dword_B3B0B4[0x78]); /*0x59deea*/
            GetSleepState = v9->vtbl[1].GetSleepState; /*0x59def1*/
            dword_B3B0B4[0x78] = 0; /*0x59defb*/
            if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))GetSleepState)(v9, 1) ) /*0x59df01*/
            {
              v14 = v9[1].vtbl; /*0x59df07*/
              if ( v14 ) /*0x59df0c*/
                (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v14->super.super.InitializeComponent /*0x59df16*/
                 + 6))(
                  v14,
                  v9,
                  1);
            }
            v15 = ((int (__thiscall *)(TESObjectREFR *))v9->vtbl[2].super.Unk_0C)(v9); /*0x59df22*/
            if ( v15 ) /*0x59df26*/
            {
              v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x164))(v15); /*0x59df36*/
              v17 = (int)v9->vtbl->GetAnimData(v9); /*0x59df40*/
              if ( v16 ) /*0x59df44*/
              {
                if ( v17 ) /*0x59df48*/
                {
                  v12 = *(float *)(v17 + 0x94); /*0x59df4a*/
                  *(float *)(v16 + 0x94) = *(float *)(v17 + 0x94); /*0x59df50*/
                }
              }
            }
          }
        }
        sub_578DF0(v2, (char)OpenMenuTile, v12, v3); /*0x59df56*/
        byte_B2D91C = 1;                        // MoonSugarEffect decode: menu/dialog/player state path enables byte_B2D91C gate for native Gethit triggering. /*0x59df5b*/
      }
    }
  }
}
