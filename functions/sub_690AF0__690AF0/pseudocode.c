void __usercall sub_690AF0(
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
  int v9; // edi
  MagicTarget *v10; // ecx
  PlayerCharacter *ParentActor; // esi
  unsigned __int16 *v12; // ebp
  TESForm *v13; // eax
  TESForm *v14; // ebx
  TESForm *type; // ebx
  char *v16; // eax
  char *v17; // edi
  const char *v18; // eax
  LowProcess *process; // edi
  ExtraDataList *v20; // ebp
  int v21; // eax
  TESForm *v22; // eax
  _DWORD *v23; // eax
  TESForm *v24; // eax
  ExtraDataList *v25; // edi
  LowProcess *v26; // ecx
  ExtraDataList *v27; // edi
  void *v28; // eax
  _BYTE *v29; // eax
  int v30; // ebp
  ExtraDataList *****ContainerChanges; // eax
  int **EquippedInstance; // eax
  int **v33; // ebp
  int *v34; // eax
  const char **v35; // eax
  const char *ModelPath; // eax
  _DWORD *v37; // edi
  unsigned __int8 ***v38; // eax
  int v39; // edx
  unsigned __int8 ***v40; // eax
  _DWORD *v41; // eax
  ExtraDataList *v42; // edi
  int v43; // edi
  double v44; // st7
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v46; // eax
  ExtraDataList *v47; // [esp-8h] [ebp-44h]
  int v48; // [esp+0h] [ebp-3Ch]
  int v49; // [esp+4h] [ebp-38h]
  int v50; // [esp+8h] [ebp-34h]
  int v51; // [esp+Ch] [ebp-30h]
  int v52; // [esp+10h] [ebp-2Ch]
  int v53; // [esp+14h] [ebp-28h]
  int v55; // [esp+18h] [ebp-24h]
  int v56; // [esp+1Ch] [ebp-20h]
  int v57; // [esp+1Ch] [ebp-20h]
  ExtraDataList *data; // [esp+20h] [ebp-1Ch]
  unsigned __int8 ****v59; // [esp+20h] [ebp-1Ch]
  int v60; // [esp+24h] [ebp-18h]
  int IsFemale; // [esp+24h] [ebp-18h]
  TESForm *v62; // [esp+28h] [ebp-14h]

  v9 = a1;
  v10 = *(MagicTarget **)(a1 + 0x20);
  if ( v10 )
    ParentActor = (PlayerCharacter *)MagicTarget_GetParentActor(v10);
  else
    ParentActor = 0;
  v12 = (unsigned __int16 *)OblivionDynamicCast(
                              *(void **)(v9 + 0x38),
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
  v56 = (int)v12;
  v13 = (TESForm *)OblivionDynamicCast(
                     *(void **)(v9 + 0x38),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectARMO `RTTI Type Descriptor',
                     0);
  v14 = v13;
  v62 = v13;
  if ( v12 )
  {
    if ( ((int (__usercall *)@<eax>(LowProcess *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))ParentActor->super.super.super.process->GetEquippedWeaponData)(
           ParentActor->super.super.super.process,
           1,
           a9,
           a8,
           a7,
           a6,
           a5,
           a4,
           a3,
           a2) )
    {
      data = (ExtraDataList *)ParentActor->super.super.super.process->GetEquippedWeaponData(
                                ParentActor->super.super.super.process,
                                1)->extendData->node.data;
      if ( (unsigned int)BaseExtraList_Count(data) < 2
        || BaseExtraList_Count(data) == 2 && ExtraDataList_GetExtraCount(data) > 1 )
      {
        data = 0;
      }
      type = ParentActor->super.super.super.process->GetEquippedWeaponData(ParentActor->super.super.super.process, 1)->type;
      if ( type )
      {
        if ( !*(_BYTE *)(v9 + 0x86) )
        {
          v16 = (char *)OblivionDynamicCast(
                          type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESObjectWEAP `RTTI Type Descriptor',
                          0);
          if ( v16 )
          {
            v17 = v16 + 0x30;
            if ( sub_449190((int)(v16 + 0x30)) )
            {
              v18 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v17 + 0x14))(v17);
              sub_439EB0((int *)ModelLoaderPtr, v18, 0, 0, 1);
              *(_BYTE *)(a1 + 0x86) = 1;
            }
          }
        }
      }
      process = ParentActor->super.super.super.process;
      v20 = (ExtraDataList *)process->GetEquippedWeaponData(process, 0)->extendData->node.data;
      v21 = (int)process->GetEquippedWeaponData(process, 0);
      a9 = Actor_UnequipItem(ParentActor, a9, a7, a8, *(_DWORD *)(v21 + 8), 1, v20, 0, 0, 0);
      v22 = (TESForm *)FormHeapAlloc(0xCu);
      v62 = v22;
      if ( v22 )
        v23 = ContainerEntryExtraData_constr(v22, (int)type, 0);
      else
        v23 = 0;
      *(_DWORD *)(a1 + 0x3C) = v23;
      if ( data )
      {
        v24 = (TESForm *)FormHeapAlloc(0x14u);
        v62 = v24;
        if ( v24 )
          v25 = (ExtraDataList *)ExtraDataList_constr(v24);
        else
          v25 = 0;
        ExtraDataList_DuplicateListForContainer(v25, (int)data);
        BSSimpleList_PushFront(**(_DWORD ***)(a1 + 0x3C), (int)v25);
        v9 = a1;
      }
      else
      {
        v9 = a1;
      }
      v12 = (unsigned __int16 *)v56;
    }
    ((void (__thiscall *)(PlayerCharacter *, unsigned __int16 *, _DWORD, int))ParentActor->vtbl->super.super.super.AddItem)(
      ParentActor,
      v12,
      0,
      1);
    if ( !ParentActor->super.super.super.process->GetEquippedWeaponData(ParentActor->super.super.super.process, 1)
      || (unsigned __int16 *)ParentActor->super.super.super.process->GetEquippedWeaponData(
                               ParentActor->super.super.super.process,
                               1)->type != v12 )
    {
      Actor_EquipItem(
        ParentActor,
        v12,
        a7,
        a8,
        a5,
        a9,
        a2,
        a6,
        a4,
        a3,
        (TESForm *)v12,
        1,
        0,
        1,
        1,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        a1,
        v56,
        (int)data,
        v60,
        (int)v62);
    }
    v26 = ParentActor->super.super.super.process;
    if ( v26
      && v26->GetEquippedWeaponData(v26, 1)
      && ParentActor->super.super.super.process->GetEquippedWeaponData(ParentActor->super.super.super.process, 1)->extendData )
    {
      v27 = (ExtraDataList *)ParentActor->super.super.super.process->GetEquippedWeaponData(
                               ParentActor->super.super.super.process,
                               1)->extendData->node.data;
      sub_41F370(v27, 1);
      sub_41F2F0(v27);
    }
    else
    {
      *(_BYTE *)(v9 + 0x88) = 1;
    }
    ParentActor->super.super.super.process->SetCombatMode(ParentActor->super.super.super.process, 1);
    ((void (__thiscall *)(LowProcess *, unsigned __int16 *))ParentActor->super.super.super.process->Unk_F4)(
      ParentActor->super.super.super.process,
      v12);
  }
  else if ( v13 )
  {
    IsFemale = 0;
    v28 = (void *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))ParentActor->vtbl->super.super.super.GetBaseForm)(
                    ParentActor,
                    a9,
                    a8,
                    a7,
                    a6,
                    a5,
                    a4,
                    a3,
                    a2);
    v29 = OblivionDynamicCast(
            v28,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0);
    if ( v29 )
      IsFemale = TESActorBase_IsFemale(v29);
    v30 = 0;
    HIBYTE(v53) = *(_BYTE *)(v9 + 0x87);
    v57 = 0;
    v59 = (unsigned __int8 ****)(v9 + 0x40);
    while ( 1 )
    {
      if ( TESBipedModelForm_CoversSlot((unsigned __int16 *)&v14[4].member, v30, 0) )
      {
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&ParentActor->super.super.super.super.baseExtraList);
        if ( ContainerChanges )
        {
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, v30, 0);
          v33 = EquippedInstance;
          if ( EquippedInstance )
          {
            v34 = EquippedInstance[2];
            if ( v34 )
            {
              if ( !HIBYTE(v53) )
              {
                v35 = (const char **)OblivionDynamicCast(
                                       v34,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                       &TESBipedModelForm `RTTI Type Descriptor',
                                       0);
                if ( v35 )
                {
                  ModelPath = (const char *)TESBipedModelForm_GetModelPath(v35, IsFemale);
                  sub_439EB0((int *)ModelLoaderPtr, ModelPath, 0, 0, 1);
                  *(_BYTE *)(a1 + 0x87) = 1;
                }
              }
            }
            v37 = (_DWORD *)**v33;
            if ( v37 )
            {
              Script_AddEventToExtraScript(ParentActor, v37, 8);
              Script_AddEventToExtraScript(v33[2], &ParentActor->super.super.super.super.baseExtraList, 8);
              sub_41F6A0(v37, 0);
              if ( !v37[1] )
                BSSimpleList_Remove(*v33, (int)v37);
            }
            v38 = (unsigned __int8 ***)FormHeapAlloc(0xCu);
            if ( v38 )
              v40 = sub_4844A0(v38, (int)v33);
            else
              v40 = 0;
            *v59 = v40;
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v33, v39);
            FormHeapFree((unsigned int)v33);
          }
          v30 = v57;
        }
      }
      ++v59;
      v57 = ++v30;
      if ( v30 >= 0x10 )
        break;
      v14 = v62;
    }
    v41 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v41 )
      v42 = (ExtraDataList *)ExtraDataList_constr(v41);
    else
      v42 = 0;
    sub_41F2F0(v42);
    v47 = v42;
    v43 = (int)v62;
    v44 = ((double (__thiscall *)(PlayerCharacter *, TESForm *, ExtraDataList *, int))ParentActor->vtbl->super.super.super.AddItem)(
            ParentActor,
            v62,
            v47,
            1);
    Actor_EquipItem(
      ParentActor,
      (unsigned __int16 *)v30,
      a7,
      a8,
      a5,
      v44,
      a2,
      a6,
      a4,
      a3,
      v62,
      1,
      0,
      1,
      0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      a1,
      v30,
      (int)v59,
      IsFemale,
      (int)v62);
    TESObjectREFR_GetContainer((TESObjectREFR *)ParentActor);
    ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor);
    v46 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, v43, 1);
    if ( v46 )
      sub_41F370(v46, 1);
    else
      *(_BYTE *)(v55 + 0x88) = 1;
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)v9, 0, a9, 0);
  }
}
