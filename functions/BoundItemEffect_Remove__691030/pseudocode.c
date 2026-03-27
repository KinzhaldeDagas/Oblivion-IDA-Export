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
  int v20; // eax
  char *v21; // eax
  char *v22; // edi
  int v23; // eax
  int v24; // edx
  unsigned int v25; // edi
  TESForm *v26; // eax
  _BYTE *v27; // eax
  int ***v28; // eax
  ExtraDataList *v29; // eax
  double v30; // st7
  int v31; // ebp
  int *v32; // edi
  int v33; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  int v36; // edx
  unsigned int *v37; // ebp
  void *v38; // eax
  const char **v39; // eax
  int ModelPath; // eax
  int v41; // edx
  LowProcess *process; // ecx
  _DWORD *v43; // ecx
  int FXEffect; // ebp
  int StrongestItem; // eax
  int v46; // ecx
  float *v47; // edi
  int v48; // eax
  volatile LONG *v49; // edi
  int v50; // eax
  _DWORD *v51; // eax
  unsigned int v52; // esi
  float v53; // [esp+2Ch] [ebp-3Ch]
  int v54; // [esp+30h] [ebp-38h]
  int v55; // [esp+30h] [ebp-38h]
  int v56; // [esp+34h] [ebp-34h]
  int v57; // [esp+34h] [ebp-34h]
  int v58; // [esp+38h] [ebp-30h]
  int v59; // [esp+38h] [ebp-30h]
  int v60; // [esp+3Ch] [ebp-2Ch]
  int v61; // [esp+40h] [ebp-28h]
  int v62; // [esp+44h] [ebp-24h]
  int v63; // [esp+48h] [ebp-20h]
  int **v64; // [esp+48h] [ebp-20h]
  int v65; // [esp+4Ch] [ebp-1Ch]
  ExtraDataList **v66; // [esp+4Ch] [ebp-1Ch]
  int v67; // [esp+50h] [ebp-18h]
  int v68; // [esp+50h] [ebp-18h]
  int v69; // [esp+50h] [ebp-18h]
  int v70; // [esp+54h] [ebp-14h]
  int IsFemale; // [esp+54h] [ebp-14h]
  int v72; // [esp+58h] [ebp-10h]
  unsigned __int16 *v73; // [esp+58h] [ebp-10h]

  v10 = *(MagicTarget **)(a1 + 0x20);
  if ( v10 )
    ParentActor = MagicTarget_GetParentActor(v10);
  else
    ParentActor = 0;
  if ( *(_BYTE *)(a1 + 0x84) )
  {
    if ( ParentActor )
    {
      v12 = (TESForm *)OblivionDynamicCast(
                         *(void **)(a1 + 0x38),
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESObjectWEAP `RTTI Type Descriptor',
                         0);
      v13 = OblivionDynamicCast(
              *(void **)(a1 + 0x38),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectARMO `RTTI Type Descriptor',
              0);
      v14 = (int)v13;
      if ( v12 )
      {
        Actor_GetActorBaseForm(ParentActor, 0);
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor);
        v16 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, (int)v12, 0);
        if ( v16 )
          sub_41F6D0(v16);
        if ( (unsigned int)Actor_GetCurrentAction(ParentActor) <= 6 )
          HighPRocess_DoAction_____((PlayerCharacter *)ParentActor, 0xFFFFFFFF, 0);
        v17 = Actor_UnequipItem((PlayerCharacter *)ParentActor, a9, a7, a8, (char)v12, 1, 0, 0, 0, 0);
        ParentActor->vtbl->super.super.RemoveItem((TESObjectREFR *)ParentActor, v12, 0, 1, 0, 0, 0, 0, 0, 1, 0);
        v18 = *(_DWORD *)(a1 + 0x3C);
        if ( v18 )
        {
          if ( *(_DWORD *)v18 )
            v19 = **(unsigned __int16 ***)v18;
          else
            v19 = 0;
          TESObjectREF_GetItemCount((TESObjectREFR *)ParentActor, *(TESForm **)(v18 + 8), v54, v56, v58);
          if ( v20 >= 1 )
            Actor_EquipItem(
              (PlayerCharacter *)ParentActor,
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
              v55,
              v57,
              v59,
              v60,
              v61,
              v62,
              v63,
              v65,
              v67,
              v70,
              v72);
          if ( *(_BYTE *)(a1 + 0x86) )
          {
            v21 = (char *)OblivionDynamicCast(
                            *(void **)(*(_DWORD *)(a1 + 0x3C) + 8),
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESObjectWEAP `RTTI Type Descriptor',
                            0);
            if ( v21 )
            {
              v22 = v21 + 0x30;
              if ( sub_449190((int)(v21 + 0x30)) )
              {
                v23 = (*(int (__thiscall **)(char *))(*(_DWORD *)v22 + 0x14))(v22);
                QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v23, 0, 1);
              }
            }
            *(_BYTE *)(a1 + 0x86) = 0;
          }
          if ( v19 )
            sub_41F670((ExtraDataList *)v19);
          ContainerEntryExtraData_ClearDataTable(*(int **)(a1 + 0x3C));
          v25 = *(_DWORD *)(a1 + 0x3C);
          if ( v25 )
          {
            ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(a1 + 0x3C), v24);
            FormHeapFree(v25);
          }
          *(_DWORD *)(a1 + 0x3C) = 0;
          ParentActor->members.super.process->SetCombatMode(ParentActor->members.super.process, 1);
        }
      }
      else if ( v13 )
      {
        IsFemale = 0;
        v26 = ParentActor->vtbl->super.super.GetBaseForm((TESObjectREFR *)ParentActor);
        v27 = OblivionDynamicCast(
                v26,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0);
        if ( v27 )
          IsFemale = TESActorBase_IsFemale(v27);
        Actor_GetActorBaseForm(ParentActor, 0);
        v28 = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor);
        v29 = ExtraContainerChanges_SetEquipped(v28, v14, 0);
        if ( v29 )
          sub_41F6D0(v29);
        v30 = Actor_UnequipItem((PlayerCharacter *)ParentActor, a9, a7, a8, v14, 1, 0, 0, 0, 0);
        ParentActor->vtbl->super.super.RemoveItem(
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
        v31 = 0;
        v68 = 0;
        v73 = (unsigned __int16 *)(v14 + 0x64);
        v64 = (int **)(a1 + 0x40);
        do
        {
          if ( TESBipedModelForm_CoversSlot(v73, v31, 0) )
          {
            v32 = *v64;
            if ( *v64 )
            {
              v66 = 0;
              if ( *v32 )
                v66 = *(ExtraDataList ***)*v32;
              HIBYTE(v62) = 0;
              TESObjectREF_GetItemCount((TESObjectREFR *)ParentActor, (TESForm *)v32[2], v54, v56, v58);
              if ( v33 >= 1 )
              {
                Actor_EquipItem(
                  (PlayerCharacter *)ParentActor,
                  (unsigned __int16 *)v31,
                  a7,
                  a8,
                  a5,
                  v30,
                  a2,
                  a6,
                  a4,
                  a3,
                  (TESForm *)v32[2],
                  1,
                  v66,
                  1,
                  0,
                  v54,
                  v56,
                  v58,
                  v60,
                  v61,
                  v62,
                  (int)v64,
                  (int)v66,
                  v68,
                  IsFemale,
                  (int)v73);
                ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&ParentActor->members.super.super.baseExtraList);
                EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, v31, 0);
                v37 = EquippedInstance;
                if ( !EquippedInstance || EquippedInstance[2] != v32[2] )
                  HIBYTE(v62) = sub_690310((int)ParentActor, (int)v32, (void **)a1);
                if ( v37 )
                {
                  ContainerEntryExtraData_DestroyDataTable(v37, v36);
                  FormHeapFree((unsigned int)v37);
                }
                v31 = v69;
              }
              if ( *(_BYTE *)(a1 + 0x87) )
              {
                v38 = (void *)v32[2];
                if ( v38 )
                {
                  if ( !HIBYTE(v62) )
                  {
                    v39 = (const char **)OblivionDynamicCast(
                                           v38,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                           &TESBipedModelForm `RTTI Type Descriptor',
                                           0);
                    if ( v39 )
                    {
                      ModelPath = TESBipedModelForm_GetModelPath(v39, IsFemale);
                      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, ModelPath, 0, 1);
                    }
                  }
                }
              }
              if ( v66 )
                sub_41F670((ExtraDataList *)v66);
              ContainerEntryExtraData_ClearDataTable(v32);
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v32, v41);
              FormHeapFree((unsigned int)v32);
              *v64 = 0;
            }
          }
          ++v64;
          v68 = ++v31;
        }
        while ( v31 < 0x10 );
        *(_BYTE *)(a1 + 0x87) = 0;
      }
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) )
      {
        process = ParentActor->members.super.process;
        if ( process )
        {
          if ( !process->GetProcessLevel(process) )
          {
            v43 = *(_DWORD **)(a1 + 8);
            if ( v43 )
            {
              if ( *(_DWORD *)(a1 + 0xC) )
              {
                FXEffect = MagicItem_GetFXEffect(v43, 0);
                StrongestItem = EffectItemList_GetStrongestItem(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x10), 0);
                v46 = *(_DWORD *)(a1 + 0xC);
                if ( v46 == StrongestItem )
                {
                  if ( sub_449190(*(_DWORD *)(v46 + 0x1C) + 0x18) )
                  {
                    v47 = (float *)FormHeapAlloc(0x38u);
                    if ( v47 )
                    {
                      __asm { fld     dword ptr ds:0A30634h }
                      __asm { fstp    [esp+3Ch+var_3C]; float }
                      v48 = (*(int (**)(void))(*(_DWORD *)(FXEffect + 0x18) + 0x14))();
                      v49 = (volatile LONG *)MagicModelHitEffect_constr_args2(v47, (int)ParentActor, v48, v53);
                    }
                    else
                    {
                      v49 = 0;
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v49 + 0x68))(v49) )
                      sub_678D30((int *)&ActorProcessManager_ptr, v49);
                    else
                      (**(void (__thiscall ***)(volatile LONG *, int))v49)(v49, 1);
                    if ( *(_BYTE *)(a1 + 0x85) )
                    {
                      v50 = (*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
                      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v50, 0, 1);
                      *(_BYTE *)(a1 + 0x85) = 0;
                    }
                  }
                  sub_65A970(ParentActor, "ITMBoundDisappear", 0, 0x102, 1);
                  v52 = (unsigned int)v51;
                  if ( v51 )
                  {
                    sub_6B73E0(v51);
                    FormHeapFree(v52);
                  }
                }
              }
            }
          }
        }
      }
      *(_DWORD *)(a1 + 0x20) = 0;
      *(_BYTE *)(a1 + 0x84) = 0;
    }
  }
}
