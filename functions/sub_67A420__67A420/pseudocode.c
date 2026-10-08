TESObjectREFR **__thiscall sub_67A420(ActorProcessManager *this, int a2, int a3)
{
  ActorProcessManager *v3; // ebx
  EntryData *v4; // eax
  EntryData *v5; // ebp
  TESObjectREFR *v6; // esi
  int v7; // esi
  Actor *ListHead; // eax
  Actor *v9; // edi
  ActorList *v10; // eax
  ActorVtbl *vtbl; // esi
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  TESObjectCELL *v13; // ebx
  TESWorldSpace *v14; // edi
  TESPackage *CurrentPackage; // eax
  tListVoid **v16; // eax
  int v17; // ebp
  ExtraTeleport *TeleportExtraData; // eax
  TESObjectREFR *v19; // edi
  TESWorldSpace *v20; // ebx
  bool v21; // zf
  tListVoid **v22; // eax
  Actor *v24; // [esp+10h] [ebp-28h]
  EntryData *v25; // [esp+14h] [ebp-24h]
  float v26; // [esp+18h] [ebp-20h]
  float Distance; // [esp+18h] [ebp-20h]
  int v28; // [esp+1Ch] [ebp-1Ch]
  TESObjectCELL *DwordAtOffset40; // [esp+20h] [ebp-18h]
  TESObjectCELL *v30; // [esp+24h] [ebp-14h]
  TESWorldSpace *WorldSpace; // [esp+2Ch] [ebp-Ch]
  TESObjectREFR *v32; // [esp+30h] [ebp-8h]

  v3 = this; /*0x67a427*/
  v4 = (EntryData *)FormHeapAlloc(8u); /*0x67a42f*/
  if ( v4 ) /*0x67a43b*/
  {
    v5 = v4; /*0x67a43d*/
    v4->extendData = 0; /*0x67a43f*/
    v4->countDelta = 0; /*0x67a441*/
    v25 = v4; /*0x67a444*/
  }
  else
  {
    v25 = 0; /*0x67a44a*/
    v5 = 0; /*0x67a44e*/
  }
  v6 = *(TESObjectREFR **)(a2 + 0xC); /*0x67a454*/
  v32 = v6; /*0x67a459*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x67a464*/
  WorldSpace = TESObjectREFR_GetWorldSpace(v6); /*0x67a46f*/
  *(_BYTE *)(a2 + 0x10) = 1; /*0x67a473*/
  if ( v6 )
  {
    v7 = 0; /*0x67a47d*/
    v28 = 0; /*0x67a47f*/
    while ( 1 )
    {
      if ( v7 )
      {
        v10 = (ActorList *)(v7 == 1
                          ? ActorProcessManager_GetListHead(v3, 2)
                          : ActorProcessManager_GetListHead(v3, v7 == 2));
        v9 = ActorList_ReturnHead(v10); /*0x67a4c1*/
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v3, 3); /*0x67a48b*/
        v9 = ActorList_ReturnHead((ActorList *)ListHead); /*0x67a497*/
      }
      if ( v9 ) /*0x67a4c5*/
        break; /*0x67a4c5*/
LABEL_57:
      v28 = ++v7; /*0x67a732*/
      if ( v7 >= 4 ) /*0x67a736*/
      {
        if ( v5 ) /*0x67a73e*/
          BSSimpleList_SortViaArrayAndRebuild( /*0x67a747*/
            v5,
            (int (__cdecl *)(tListVoid *, tListVoid *))CompareActorDistanceToPlayer);
        return (TESObjectREFR **)v5; /*0x67a747*/
      }
    }
    while ( 1 ) /*0x67a4d4*/
    {
      if ( !v9->vtbl ) /*0x67a4d8*/
        goto LABEL_57; /*0x67a4d8*/
      vtbl = 0; /*0x67a4e6*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v9->vtbl->super.super.super.super.InitializeComponent + 0x64))(v9->vtbl) ) /*0x67a4e8*/
        vtbl = v9->vtbl; /*0x67a4ee*/
      v24 = *(Actor **)&v9->members.super.super.super.type; /*0x67a4f5*/
      if ( vtbl ) /*0x67a501*/
        break; /*0x67a501*/
LABEL_56:
      v7 = v28; /*0x67a71d*/
      if ( !v24 ) /*0x67a726*/
        goto LABEL_57; /*0x67a726*/
      v9 = v24; /*0x67a4d0*/
    }
    if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent /*0x67a51c*/
           + 0x66))(
            vtbl,
            0) )
    {
      CopyFromBase = vtbl->super.super.super.super.CopyFromBase; /*0x67a526*/
      if ( ((unsigned __int16)CopyFromBase & 0x800) == 0 /*0x67a54e*/
        && ((unsigned __int8)CopyFromBase & 0x20) == 0
        && !(*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
             + 0x66))(
              vtbl,
              0) )
      {
        v13 = (TESObjectCELL *)Shared_GetDwordAtOffset40(vtbl); /*0x67a55f*/
        v30 = v13; /*0x67a563*/
        v14 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)vtbl); /*0x67a56e*/
        CurrentPackage = Actor::GetCurrentPackage((Actor *)vtbl); /*0x67a570*/
        if ( !CurrentPackage || CurrentPackage->members.type != kPackageType_Alarm || !sub_606AD0(CurrentPackage, a2) ) /*0x67a586*/
        {
          if ( (!v13 || v13 != DwordAtOffset40) /*0x67a5be*/
            && (WorldSpace != v14
             || (!v13 || TESObjectCELL_IsInterior(v13))
             && (!DwordAtOffset40 || TESObjectCELL_IsInterior(DwordAtOffset40))) )
          {
            v17 = a3; /*0x67a634*/
            if ( a3 ) /*0x67a63a*/
            {
              while ( *(_DWORD *)v17 ) /*0x67a645*/
              {
                TeleportExtraData = TESObjectREFR_GetTeleportData(*(_BYTE **)v17); /*0x67a64b*/
                if ( TeleportExtraData ) /*0x67a652*/
                {
                  v19 = (TESObjectREFR *)TeleportData_GetLinkedDoor(&TeleportExtraData->super); /*0x67a65b*/
                  if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(v19) == v13 /*0x67a689*/
                    || !Shared_GetDwordAtOffset40(v19)
                    && (v20 = TESObjectREFR_GetWorldSpace(v19),
                        v21 = v20 == TESObjectREFR_GetWorldSpace((TESObjectREFR *)vtbl),
                        v13 = v30,
                        v21) )
                  {
                    Distance = TesObjectREF_GetDistance((TESObjectREFR *)vtbl, v19, 0); /*0x67a695*/
                    if ( (double)stru_B36A50 >= Distance ) /*0x67a6aa*/
                    {
                      if ( v25->extendData ) /*0x67a6b9*/
                      {
                        v22 = (tListVoid **)FormHeapAlloc(8u); /*0x67a6c0*/
                        if ( v22 ) /*0x67a6ca*/
                        {
                          *v22 = v25->extendData; /*0x67a6ce*/
                          v22[1] = 0; /*0x67a6d0*/
                        }
                        else
                        {
                          v22 = 0; /*0x67a6d9*/
                        }
                        v22[1] = (tListVoid *)v25->countDelta; /*0x67a6de*/
                        v25->countDelta = (SInt32)v22; /*0x67a6e1*/
                      }
                      v25->extendData = (tListVoid *)vtbl; /*0x67a6e4*/
                      break; /*0x67a6e4*/
                    }
                  }
                }
                v17 = *(_DWORD *)(v17 + 4); /*0x67a6ac*/
                if ( !v17 ) /*0x67a6b1*/
                  break; /*0x67a6b1*/
              }
            }
            v5 = v25; /*0x67a6e6*/
            goto LABEL_55; /*0x67a6e6*/
          }
          v26 = TesObjectREF_GetDistance((TESObjectREFR *)vtbl, v32, 0); /*0x67a5d5*/
          if ( (double)stru_B36A50 >= v26 ) /*0x67a5ea*/
          {
            if ( v5->extendData ) /*0x67a5f0*/
            {
              v16 = (tListVoid **)FormHeapAlloc(8u); /*0x67a5f8*/
              if ( v16 ) /*0x67a602*/
              {
                *v16 = v5->extendData; /*0x67a607*/
                v16[1] = 0; /*0x67a609*/
                v16[1] = (tListVoid *)v5->countDelta; /*0x67a613*/
                v5->countDelta = (SInt32)v16; /*0x67a616*/
                v5->extendData = (tListVoid *)vtbl; /*0x67a619*/
                goto LABEL_55; /*0x67a61c*/
              }
              *(_DWORD *)4 = v5->countDelta; /*0x67a626*/
              v5->countDelta = 0; /*0x67a629*/
            }
            v5->extendData = (tListVoid *)vtbl; /*0x67a62c*/
          }
        }
      }
    }
LABEL_55:
    v3 = this; /*0x67a719*/
    goto LABEL_56; /*0x67a719*/
  }
  return (TESObjectREFR **)v5; /*0x67a74c*/
}
