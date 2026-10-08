void __usercall BoundItemEffect_Remove(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  MagicTarget *v10; // ecx
  Actor *ParentActor; // esi
  TESForm *v12; // ebp
  void *v13; // eax
  int v14; // edi
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v16; // eax
  double v17; // st7
  int v18; // eax
  unsigned __int16 *v19; // ebp
  char *v20; // eax
  char *v21; // edi
  int v22; // eax
  int v23; // edx
  unsigned int v24; // edi
  TESForm *v25; // eax
  _BYTE *v26; // eax
  int ***v27; // eax
  ExtraDataList *v28; // eax
  double v29; // st7
  int v30; // ebp
  int *v31; // edi
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  int v34; // edx
  unsigned int *v35; // ebp
  void *v36; // eax
  const char **v37; // eax
  int ModelPath; // eax
  int v39; // edx
  LowProcess *process; // ecx
  void *v41; // ecx
  EffectSetting *FXEffect; // ebp
  int StrongestItem; // eax
  int v44; // ecx
  NiObject *v45; // edi
  int v46; // eax
  NiObject *v47; // edi
  int v48; // eax
  _DWORD *v49; // eax
  unsigned int v50; // esi
  float v51; // [esp+2Ch] [ebp-3Ch]
  int v52; // [esp+30h] [ebp-38h]
  int v53; // [esp+34h] [ebp-34h]
  int v54; // [esp+38h] [ebp-30h]
  int v55; // [esp+3Ch] [ebp-2Ch]
  int v56; // [esp+40h] [ebp-28h]
  int v57; // [esp+44h] [ebp-24h]
  int v58; // [esp+48h] [ebp-20h]
  int **v59; // [esp+48h] [ebp-20h]
  int v60; // [esp+4Ch] [ebp-1Ch]
  ExtraDataList **v61; // [esp+4Ch] [ebp-1Ch]
  int v62; // [esp+50h] [ebp-18h]
  int v63; // [esp+50h] [ebp-18h]
  int v64; // [esp+50h] [ebp-18h]
  int v65; // [esp+54h] [ebp-14h]
  int IsFemale; // [esp+54h] [ebp-14h]
  int v67; // [esp+58h] [ebp-10h]
  unsigned __int16 *v68; // [esp+58h] [ebp-10h]

  v10 = *(MagicTarget **)(a1 + 0x20); /*0x691059*/
  if ( v10 ) /*0x69105e*/
    ParentActor = MagicTarget_GetParentActor(v10); /*0x691065*/
  else
    ParentActor = 0; /*0x691069*/
  if ( *(_BYTE *)(a1 + 0x84) ) /*0x69106b*/
  {
    if ( ParentActor ) /*0x69107a*/
    {
      v12 = (TESForm *)OblivionDynamicCast( /*0x6910a3*/
                         *(void **)(a1 + 0x38),
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESObjectWEAP `RTTI Type Descriptor',
                         0);
      v13 = OblivionDynamicCast( /*0x6910ab*/
              *(void **)(a1 + 0x38),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectARMO `RTTI Type Descriptor',
              0);
      v14 = (int)v13; /*0x6910b5*/
      if ( v12 ) /*0x6910b7*/
      {
        Actor_GetActorBaseForm(ParentActor, 0); /*0x6910c1*/
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor); /*0x6910d3*/
        v16 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, (int)v12, 0); /*0x6910e0*/
        if ( v16 ) /*0x6910e7*/
          sub_41F6D0(v16); /*0x6910eb*/
        if ( (unsigned int)Actor_GetCurrentAction(ParentActor) <= 6 ) /*0x6910fa*/
          Actor_SetCurrentActionWithBowVisualCleanup(ParentActor, kActorCurrentAction_None, 0); /*0x691102*/
        v17 = Actor_UnequipItem(ParentActor, a9, a7, a8, (__int16)v12, 1, 0, 0, 0, 0); /*0x691114*/
        ParentActor->vtbl->super.super.RemoveItem((TESObjectREFR *)ParentActor, v12, 0, 1, 0, 0, 0, 0, 0, 1, 0); /*0x691136*/
        v18 = *(_DWORD *)(a1 + 0x3C); /*0x691138*/
        if ( v18 ) /*0x69113d*/
        {
          if ( *(_DWORD *)v18 ) /*0x691143*/
            v19 = **(unsigned __int16 ***)v18; /*0x69114a*/
          else
            v19 = 0; /*0x69114e*/
          if ( TESObjectREFR_GetItemCount((TESObjectREFR *)ParentActor, *(TESForm **)(v18 + 8)) >= 1 ) /*0x69115e*/
            Actor_EquipItem( /*0x691170*/
              (TESObjectREFR *)ParentActor,
              v19,
              a7,
              a8,
              a5,
              v17,
              a2,
              a6,
              a4,
              a3,
              *(TESForm **)(*(_DWORD *)(a1 + 0x3C) + 8),
              1,
              (ExtraDataList **)v19,
              1,
              0,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58,
              v60,
              v62,
              v65,
              v67);
          if ( *(_BYTE *)(a1 + 0x86) ) /*0x691175*/
          {
            v20 = (char *)OblivionDynamicCast( /*0x691193*/
                            *(void **)(*(_DWORD *)(a1 + 0x3C) + 8),
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESObjectWEAP `RTTI Type Descriptor',
                            0);
            if ( v20 ) /*0x69119d*/
            {
              v21 = v20 + 0x30; /*0x69119f*/
              if ( OB_CompactString_Length_010201A0(v20 + 0x30) ) /*0x6911a4*/
              {
                v22 = (*(int (__thiscall **)(char *))(*(_DWORD *)v21 + 0x14))(v21); /*0x6911b8*/
                QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v22, 0, 1); /*0x6911c1*/
              }
            }
            *(_BYTE *)(a1 + 0x86) = 0; /*0x6911c6*/
          }
          if ( v19 ) /*0x6911cf*/
            sub_41F670((ExtraDataList *)v19); /*0x6911d3*/
          ContainerEntryExtraData_ClearDataTable(*(int **)(a1 + 0x3C)); /*0x6911db*/
          v24 = *(_DWORD *)(a1 + 0x3C); /*0x6911e0*/
          if ( v24 ) /*0x6911e5*/
          {
            ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(a1 + 0x3C), v23); /*0x6911e9*/
            FormHeapFree(v24); /*0x6911ef*/
          }
          *(_DWORD *)(a1 + 0x3C) = 0; /*0x6911f7*/
          ParentActor->members.super.process->SetCombatMode(ParentActor->members.super.process, 1); /*0x69120b*/
        }
      }
      else if ( v13 ) /*0x691214*/
      {
        IsFemale = 0; /*0x691232*/
        v25 = ParentActor->vtbl->super.super.GetBaseForm((TESObjectREFR *)ParentActor); /*0x69123a*/
        v26 = OblivionDynamicCast( /*0x69123d*/
                v25,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0);
        if ( v26 ) /*0x691247*/
          IsFemale = TESActorBase_IsFemale(v26); /*0x691250*/
        Actor_GetActorBaseForm(ParentActor, 0); /*0x691258*/
        v27 = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor); /*0x69126a*/
        v28 = ExtraContainerChanges_SetEquipped(v27, v14, 0); /*0x691277*/
        if ( v28 ) /*0x69127e*/
          sub_41F6D0(v28); /*0x691282*/
        v29 = Actor_UnequipItem(ParentActor, a9, a7, a8, v14, 1, 0, 0, 0, 0); /*0x691294*/
        ParentActor->vtbl->super.super.RemoveItem( /*0x6912b6*/
          (TESObjectREFR *)ParentActor,
          (TESForm *)v14,
          0,
          1,
          0,
          0,
          0,
          0,
          0,
          1,
          0);
        v30 = 0; /*0x6912b8*/
        v63 = 0; /*0x6912c0*/
        v68 = (unsigned __int16 *)(v14 + 0x64); /*0x6912c4*/
        v59 = (int **)(a1 + 0x40); /*0x6912c8*/
        do /*0x6913ff*/
        {
          if ( TESBipedModelForm_CoversSlot(v68, v30, 0) ) /*0x6912d3*/
          {
            v31 = *v59; /*0x6912e4*/
            if ( *v59 ) /*0x6912e4*/
            {
              v61 = 0; /*0x6912f2*/
              if ( *v31 ) /*0x6912ee*/
                v61 = *(ExtraDataList ***)*v31; /*0x6912fe*/
              HIBYTE(v57) = 0; /*0x691308*/
              if ( TESObjectREFR_GetItemCount((TESObjectREFR *)ParentActor, (TESForm *)v31[2]) >= 1 ) /*0x691315*/
              {
                Actor_EquipItem( /*0x691328*/
                  (TESObjectREFR *)ParentActor,
                  (unsigned __int16 *)v30,
                  a7,
                  a8,
                  a5,
                  v29,
                  a2,
                  a6,
                  a4,
                  a3,
                  (TESForm *)v31[2],
                  1,
                  v61,
                  1,
                  0,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57,
                  (int)v59,
                  (int)v61,
                  v63,
                  IsFemale,
                  (int)v68);
                ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&ParentActor->members.super.super.baseExtraList); /*0x691333*/
                EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, v30, 0); /*0x69133a*/
                v35 = EquippedInstance; /*0x69133f*/
                if ( !EquippedInstance || EquippedInstance[2] != v31[2] ) /*0x69134b*/
                  HIBYTE(v57) = sub_690310((int)ParentActor, (int)v31, (void **)a1); /*0x691358*/
                if ( v35 ) /*0x69135e*/
                {
                  ContainerEntryExtraData_DestroyDataTable(v35, v34); /*0x691362*/
                  FormHeapFree((unsigned int)v35); /*0x691368*/
                }
                v30 = v64; /*0x691370*/
              }
              if ( *(_BYTE *)(a1 + 0x87) ) /*0x691374*/
              {
                v36 = (void *)v31[2]; /*0x69137d*/
                if ( v36 ) /*0x691382*/
                {
                  if ( !HIBYTE(v57) ) /*0x691389*/
                  {
                    v37 = (const char **)OblivionDynamicCast( /*0x69139a*/
                                           v36,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                           &TESBipedModelForm `RTTI Type Descriptor',
                                           0);
                    if ( v37 ) /*0x6913a4*/
                    {
                      ModelPath = TESBipedModelForm_GetModelPath(v37, IsFemale); /*0x6913b1*/
                      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], ModelPath, 0, 1); /*0x6913bd*/
                    }
                  }
                }
              }
              if ( v61 ) /*0x6913c8*/
                sub_41F670((ExtraDataList *)v61); /*0x6913ca*/
              ContainerEntryExtraData_ClearDataTable(v31); /*0x6913d1*/
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v31, v39); /*0x6913d8*/
              FormHeapFree((unsigned int)v31); /*0x6913de*/
              *v59 = 0; /*0x6913ea*/
            }
          }
          ++v59; /*0x6913f0*/
          v63 = ++v30; /*0x6913fb*/
        }
        while ( v30 < 0x10 ); /*0x6913ff*/
        *(_BYTE *)(a1 + 0x87) = 0; /*0x691405*/
      }
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) ) /*0x691416*/
      {
        process = ParentActor->members.super.process; /*0x691420*/
        if ( process ) /*0x691425*/
        {
          if ( !process->GetProcessLevel(process) ) /*0x691430*/
          {
            v41 = *(void **)(a1 + 8); /*0x69143a*/
            if ( v41 ) /*0x69143f*/
            {
              if ( *(_DWORD *)(a1 + 0xC) ) /*0x691445*/
              {
                FXEffect = MagicItem_GetFXEffect(v41, 0); /*0x691457*/
                StrongestItem = EffectItemList_GetStrongestItem( /*0x691465*/
                                  (_DWORD *)(*(_DWORD *)(a1 + 8) + 0xC),
                                  *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x10),
                                  0,
                                  v52,
                                  v53,
                                  v54,
                                  v55,
                                  v56);
                v44 = *(_DWORD *)(a1 + 0xC); /*0x69146a*/
                if ( v44 == StrongestItem ) /*0x69146f*/
                {
                  if ( OB_CompactString_Length_010201A0((void *)(*(_DWORD *)(v44 + 0x1C) + 0x18)) ) /*0x69147b*/
                  {
                    v45 = (NiObject *)FormHeapAlloc(0x38u); /*0x69148f*/
                    if ( v45 ) /*0x6914a2*/
                    {
                      __asm { fld     dword ptr ds:0A30634h } /*0x6914a7*/
                      __asm { fstp    [esp+3Ch+var_3C]; float }
                      v46 = ((int (*)(void))FXEffect->model.vtbl->GetModelPath)(); /*0x6914b7*/
                      v47 = MagicModelHitEffect_constr_args2(v45, (TESObjectREFR *)ParentActor, v46, v51); /*0x6914c2*/
                    }
                    else
                    {
                      v47 = 0; /*0x6914c6*/
                    }
                    if ( ((unsigned __int8 (__thiscall *)(NiObject *))v47->__vftable[1].Load)(v47) ) /*0x6914d7*/
                      ActorProcessManager_RegisterTempEffect( /*0x6914e3*/
                        (ActorProcessManager *)&qword_B3BB2C[0x75],
                        (BSTempEffect *)v47);
                    else
                      v47->__vftable->super.Destructor((NiRefObject *)v47, 1); /*0x6914f2*/
                    if ( *(_BYTE *)(a1 + 0x85) ) /*0x6914f4*/
                    {
                      v48 = (int)FXEffect->model.vtbl->GetModelPath(&FXEffect->model); /*0x69150a*/
                      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v48, 0, 1); /*0x691513*/
                      *(_BYTE *)(a1 + 0x85) = 0; /*0x691518*/
                    }
                  }
                  TESObjectREFR_PlayResolvedAnimSoundNote(ParentActor, "ITMBoundDisappear", 0, 0x102, 1); /*0x69152f*/
                  v50 = (unsigned int)v49; /*0x691534*/
                  if ( v49 ) /*0x691538*/
                  {
                    sub_6B73E0(v49); /*0x69153c*/
                    FormHeapFree(v50); /*0x691542*/
                  }
                }
              }
            }
          }
        }
      }
      *(_DWORD *)(a1 + 0x20) = 0; /*0x69154a*/
      *(_BYTE *)(a1 + 0x84) = 0; /*0x691551*/
    }
  }
}
