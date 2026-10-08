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
  Actor *ParentActor; // esi
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

  v9 = a1; /*0x690b17*/
  v10 = *(MagicTarget **)(a1 + 0x20); /*0x690b1d*/
  if ( v10 ) /*0x690b22*/
    ParentActor = MagicTarget_GetParentActor(v10); /*0x690b29*/
  else
    ParentActor = 0; /*0x690b2d*/
  v12 = (unsigned __int16 *)OblivionDynamicCast( /*0x690b4d*/
                              *(void **)(v9 + 0x38),
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
  v56 = (int)v12; /*0x690b5a*/
  v13 = (TESForm *)OblivionDynamicCast( /*0x690b5e*/
                     *(void **)(v9 + 0x38),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectARMO `RTTI Type Descriptor',
                     0);
  v14 = v13; /*0x690b68*/
  v62 = v13; /*0x690b6a*/
  if ( v12 ) /*0x690b6e*/
  {
    if ( ((int (__usercall *)@<eax>(LowProcess *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))ParentActor->members.super.process->GetEquippedWeaponData)( /*0x690b81*/
           ParentActor->members.super.process,
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
      data = (ExtraDataList *)ParentActor->members.super.process->GetEquippedWeaponData( /*0x690ba0*/
                                ParentActor->members.super.process,
                                1)->extendData->node.data;
      if ( (unsigned int)BaseExtraList_Count(data) < 2 /*0x690bc5*/
        || BaseExtraList_Count(data) == 2 && ExtraDataList_GetExtraCount(data) > 1 )
      {
        data = 0; /*0x690bc7*/
      }
      type = ParentActor->members.super.process->GetEquippedWeaponData(ParentActor->members.super.process, 1)->type; /*0x690bde*/
      if ( type ) /*0x690be3*/
      {
        if ( !*(_BYTE *)(v9 + 0x86) ) /*0x690be5*/
        {
          v16 = (char *)OblivionDynamicCast( /*0x690bfd*/
                          type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESObjectWEAP `RTTI Type Descriptor',
                          0);
          if ( v16 ) /*0x690c07*/
          {
            v17 = v16 + 0x30; /*0x690c09*/
            if ( OB_CompactString_Length_010201A0(v16 + 0x30) ) /*0x690c0e*/
            {
              v18 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v17 + 0x14))(v17); /*0x690c24*/
              ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v18, 0, 0, 1); /*0x690c2d*/
              *(_BYTE *)(a1 + 0x86) = 1; /*0x690c36*/
            }
          }
        }
      }
      process = ParentActor->members.super.process; /*0x690c3d*/
      v20 = (ExtraDataList *)process->GetEquippedWeaponData(process, 0)->extendData->node.data; /*0x690c52*/
      v21 = (int)process->GetEquippedWeaponData(process, 0); /*0x690c5e*/
      a9 = Actor_UnequipItem(ParentActor, a9, a7, a8, *(_DWORD *)(v21 + 8), 1, v20, 0, 0, 0); /*0x690c6f*/
      v22 = (TESForm *)FormHeapAlloc(0xCu); /*0x690c76*/
      v62 = v22; /*0x690c7e*/
      if ( v22 ) /*0x690c8c*/
        v23 = ContainerEntryExtraData_constr(v22, (int)type, 0); /*0x690c93*/
      else
        v23 = 0; /*0x690c9a*/
      *(_DWORD *)(a1 + 0x3C) = v23; /*0x690cad*/
      if ( data ) /*0x690cb0*/
      {
        v24 = (TESForm *)FormHeapAlloc(0x14u); /*0x690cb4*/
        v62 = v24; /*0x690cbc*/
        if ( v24 ) /*0x690cca*/
          v25 = (ExtraDataList *)ExtraDataList_constr(v24); /*0x690cd3*/
        else
          v25 = 0; /*0x690cd7*/
        ExtraDataList_DuplicateListForContainer(v25, (int)data); /*0x690ce0*/
        BSSimpleList_PushFront(**(_DWORD ***)(a1 + 0x3C), (int)v25); /*0x690cef*/
        v9 = a1; /*0x690cf4*/
      }
      else
      {
        v9 = a1; /*0x690cfa*/
      }
      v12 = (unsigned __int16 *)v56; /*0x690cfc*/
    }
    ((void (__thiscall *)(Actor *, unsigned __int16 *, _DWORD, int))ParentActor->vtbl->super.super.AddItem)( /*0x690d0f*/
      ParentActor,
      v12,
      0,
      1);
    if ( !ParentActor->members.super.process->GetEquippedWeaponData(ParentActor->members.super.process, 1) /*0x690d36*/
      || (unsigned __int16 *)ParentActor->members.super.process->GetEquippedWeaponData(
                               ParentActor->members.super.process,
                               1)->type != v12 )
    {
      Actor_EquipItem( /*0x690d43*/
        (TESObjectREFR *)ParentActor,
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
    v26 = ParentActor->members.super.process; /*0x690d48*/
    if ( v26 /*0x690d6c*/
      && v26->GetEquippedWeaponData(v26, 1)
      && ParentActor->members.super.process->GetEquippedWeaponData(ParentActor->members.super.process, 1)->extendData )
    {
      v27 = (ExtraDataList *)ParentActor->members.super.process->GetEquippedWeaponData( /*0x690d84*/
                               ParentActor->members.super.process,
                               1)->extendData->node.data;
      ExtraDataList_SetCannotWear(v27, 1); /*0x690d8a*/
      ExtraDataList_AddBoundArmor(v27); /*0x690d91*/
    }
    else
    {
      *(_BYTE *)(v9 + 0x88) = 1; /*0x690d98*/
    }
    ParentActor->members.super.process->SetCombatMode(ParentActor->members.super.process, 1); /*0x690dac*/
    ((void (__thiscall *)(LowProcess *, unsigned __int16 *))ParentActor->members.super.process->Unk_F4)( /*0x690dba*/
      ParentActor->members.super.process,
      v12);
  }
  else if ( v13 ) /*0x690dd4*/
  {
    IsFemale = 0; /*0x690df0*/
    v28 = (void *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))ParentActor->vtbl->super.super.GetBaseForm)( /*0x690df8*/
                    ParentActor,
                    a9,
                    a8,
                    a7,
                    a6,
                    a5,
                    a4,
                    a3,
                    a2);
    v29 = OblivionDynamicCast( /*0x690dfb*/
            v28,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0);
    if ( v29 ) /*0x690e05*/
      IsFemale = TESActorBase_IsFemale(v29); /*0x690e0e*/
    v30 = 0; /*0x690e18*/
    HIBYTE(v53) = *(_BYTE *)(v9 + 0x87); /*0x690e1d*/
    v57 = 0; /*0x690e21*/
    v59 = (unsigned __int8 ****)(v9 + 0x40); /*0x690e25*/
    while ( 1 ) /*0x690e34*/
    {
      if ( TESBipedModelForm_CoversSlot((unsigned __int16 *)&v14[4].member, v30, 0) ) /*0x690e3a*/
      {
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&ParentActor->members.super.super.baseExtraList); /*0x690e4c*/
        if ( ContainerChanges ) /*0x690e53*/
        {
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, v30, 0); /*0x690e5e*/
          v33 = EquippedInstance; /*0x690e63*/
          if ( EquippedInstance ) /*0x690e67*/
          {
            v34 = EquippedInstance[2]; /*0x690e6d*/
            if ( v34 ) /*0x690e72*/
            {
              if ( !HIBYTE(v53) ) /*0x690e79*/
              {
                v35 = (const char **)OblivionDynamicCast( /*0x690e8a*/
                                       v34,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                       &TESBipedModelForm `RTTI Type Descriptor',
                                       0);
                if ( v35 ) /*0x690e94*/
                {
                  ModelPath = (const char *)TESBipedModelForm_GetModelPath(v35, IsFemale); /*0x690ea3*/
                  ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], ModelPath, 0, 0, 1); /*0x690eaf*/
                  *(_BYTE *)(a1 + 0x87) = 1; /*0x690eb8*/
                }
              }
            }
            v37 = (_DWORD *)**v33; /*0x690ec2*/
            if ( v37 ) /*0x690ec6*/
            {
              Script_AddEventToExtraScript(ParentActor, v37, 8); /*0x690ecc*/
              Script_AddEventToExtraScript(v33[2], &ParentActor->members.super.super.baseExtraList, 8); /*0x690ed8*/
              sub_41F6A0(v37, 0); /*0x690ee4*/
              if ( !v37[1] ) /*0x690ee9*/
                BSSimpleList_Remove(*v33, (int)v37); /*0x690ef3*/
            }
            v38 = (unsigned __int8 ***)FormHeapAlloc(0xCu); /*0x690efa*/
            if ( v38 ) /*0x690f10*/
              v40 = sub_4844A0(v38, (int)v33); /*0x690f15*/
            else
              v40 = 0; /*0x690f1c*/
            *v59 = v40; /*0x690f22*/
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v33, v39); /*0x690f2e*/
            FormHeapFree((unsigned int)v33); /*0x690f34*/
          }
          v30 = v57; /*0x690f3c*/
        }
      }
      ++v59; /*0x690f40*/
      v57 = ++v30; /*0x690f4b*/
      if ( v30 >= 0x10 ) /*0x690f4f*/
        break; /*0x690f4f*/
      v14 = v62; /*0x690e30*/
    }
    v41 = (_DWORD *)FormHeapAlloc(0x14u); /*0x690f57*/
    if ( v41 ) /*0x690f6d*/
      v42 = (ExtraDataList *)ExtraDataList_constr(v41); /*0x690f76*/
    else
      v42 = 0; /*0x690f7a*/
    ExtraDataList_AddBoundArmor(v42); /*0x690f86*/
    v47 = v42; /*0x690f95*/
    v43 = (int)v62; /*0x690f96*/
    v44 = ((double (__thiscall *)(Actor *, TESForm *, ExtraDataList *, int))ParentActor->vtbl->super.super.AddItem)( /*0x690f9d*/
            ParentActor,
            v62,
            v47,
            1);
    Actor_EquipItem( /*0x690faa*/
      (TESObjectREFR *)ParentActor,
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
    TESObjectREFR_GetContainer((TESObjectREFR *)ParentActor); /*0x690fb1*/
    ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor); /*0x690fb8*/
    v46 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, v43, 1); /*0x690fc5*/
    if ( v46 ) /*0x690fcc*/
      ExtraDataList_SetCannotWear(v46, 1); /*0x690fd2*/
    else
      *(_BYTE *)(v55 + 0x88) = 1; /*0x690fef*/
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)v9, 0, a9, 0); /*0x69100c*/
  }
}
