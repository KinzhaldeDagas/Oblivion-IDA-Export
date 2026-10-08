void __usercall sub_50CD30(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  Actor *v11; // eax
  PlayerCharacter *v12; // edi
  char *CurrentMagicItem; // ebx
  int v14; // ebp
  TESActorBaseData *p_actorBaseData; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // eax
  BaseFormComponentVtbl *vtbl; // edx
  void (__thiscall *v18)(BaseFormComponent *); // eax
  BaseFormComponentVtbl *v19; // edx
  void (__thiscall *v20)(BaseFormComponent *); // eax
  TESContainer *Container; // ebx
  int *ContainerExtraDataForRef; // eax
  int *v23; // esi
  TESNPC *v24; // ebx
  BSExtraDataVtbl *v25; // esi
  BSExtraDataVtbl *v26; // eax
  TESForm *v27; // eax
  TESForm *v28; // eax
  int v29; // [esp+8h] [ebp-20h]
  int v30; // [esp+Ch] [ebp-1Ch]
  int v31; // [esp+10h] [ebp-18h]
  UInt16 v32[2]; // [esp+14h] [ebp-14h] BYREF
  int v33; // [esp+18h] [ebp-10h] BYREF
  unsigned int v34; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned int v35; // [esp+20h] [ebp-8h] BYREF
  TESNPC *ActorBaseForm; // [esp+24h] [ebp-4h]

  *(_DWORD *)v32 = 0; /*0x50cd4c*/
  v33 = 0; /*0x50cd50*/
  v34 = 0xFFFFFFFF; /*0x50cd54*/
  v35 = 0xFFFFFFFF; /*0x50cd58*/
  v11 = (Actor *)OblivionDynamicCast( /*0x50cd5c*/
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  v12 = (PlayerCharacter *)v11; /*0x50cd61*/
  if ( v11 ) /*0x50cd68*/
  {
    ActorBaseForm = (TESNPC *)Actor_GetActorBaseForm(v11, 0); /*0x50cd76*/
    if ( Script_ExtractArgs(a1, arg4, a3, a4, a7, a8, l, v32, &v33, &v34, &v35) ) /*0x50cdad*/
    {
      CurrentMagicItem = 0; /*0x50cdc7*/
      v14 = 0; /*0x50cdc9*/
      if ( v12 == reference ) /*0x50cdcd*/
      {
        CurrentMagicItem = (char *)Player_GetCurrentMagicItem(reference); /*0x50cdda*/
        v14 = sub_65D4C0(reference); /*0x50cde8*/
        PlayerCharacter_SetCurrentMagicItem(reference, 0); /*0x50cdea*/
        sub_664850(reference, 0); /*0x50cdf6*/
      }
      p_actorBaseData = &ActorBaseForm->member.super.actorBaseData; /*0x50ce03*/
      TESActorBaseData_SetLevel(&ActorBaseForm->member.super.actorBaseData, v32[0]); /*0x50ce09*/
      if ( v12 == reference ) /*0x50ce16*/
      {
        if ( CurrentMagicItem ) /*0x50ce1a*/
          PlayerCharacter_SetCurrentMagicItem(reference, CurrentMagicItem); /*0x50ce1d*/
        if ( v14 ) /*0x50ce24*/
          sub_664850(reference, v14); /*0x50ce2d*/
      }
      if ( v33 ) /*0x50ce3d*/
      {
        InitializeComponent = p_actorBaseData->vtbl[5].InitializeComponent; /*0x50ce41*/
        p_actorBaseData->flags |= 0x80u; /*0x50ce44*/
        ((void (__thiscall *)(TESActorBaseData *, int))InitializeComponent)(p_actorBaseData, 0x10); /*0x50ce4b*/
        ((void (__thiscall *)(TESActorBaseData *, int))p_actorBaseData->vtbl[5].InitializeComponent)( /*0x50ce56*/
          p_actorBaseData,
          0x10);
      }
      if ( v12 != reference ) /*0x50ce5e*/
      {
        if ( v34 != 0xFFFFFFFF ) /*0x50ce6b*/
        {
          vtbl = p_actorBaseData->vtbl; /*0x50ce6d*/
          p_actorBaseData->minLevel = v34; /*0x50ce6f*/
          ((void (__thiscall *)(TESActorBaseData *, int))vtbl[5].InitializeComponent)(p_actorBaseData, 0x10); /*0x50ce7a*/
          v18 = p_actorBaseData->vtbl[5].InitializeComponent; /*0x50ce7e*/
          p_actorBaseData->flags |= 0x80u; /*0x50ce81*/
          ((void (__thiscall *)(TESActorBaseData *, int))v18)(p_actorBaseData, 0x10); /*0x50ce88*/
          ((void (__thiscall *)(TESActorBaseData *, int))p_actorBaseData->vtbl[5].InitializeComponent)( /*0x50ce93*/
            p_actorBaseData,
            0x10);
        }
        if ( v35 != 0xFFFFFFFF ) /*0x50ce9c*/
        {
          v19 = p_actorBaseData->vtbl; /*0x50ce9e*/
          p_actorBaseData->maxLevel = v35; /*0x50cea0*/
          ((void (__thiscall *)(TESActorBaseData *, int))v19[5].InitializeComponent)(p_actorBaseData, 0x10); /*0x50ceab*/
          v20 = p_actorBaseData->vtbl[5].InitializeComponent; /*0x50ceaf*/
          p_actorBaseData->flags |= 0x80u; /*0x50ceb2*/
          ((void (__thiscall *)(TESActorBaseData *, int))v20)(p_actorBaseData, 0x10); /*0x50ceb9*/
          ((void (__thiscall *)(TESActorBaseData *, int))p_actorBaseData->vtbl[5].InitializeComponent)( /*0x50cec4*/
            p_actorBaseData,
            0x10);
        }
        Container = TESObjectREFR_GetContainer((TESObjectREFR *)v12); /*0x50ced1*/
        Actor_GetActorBaseForm((Actor *)v12, 0); /*0x50ced3*/
        ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v12); /*0x50cee5*/
        v23 = ContainerExtraDataForRef; /*0x50ceef*/
        if ( Container ) /*0x50cef1*/
        {
          if ( ContainerExtraDataForRef ) /*0x50cef5*/
          {
            ContainerExtraData_UnequipAll(ContainerExtraDataForRef, 0); /*0x50cefb*/
            sub_48DF80((_DWORD **)v23); /*0x50cf02*/
            ContainerExtraData_EvaluateOwnerLeveledItems(v29, v30, v31, *(int *)v32, v33); /*0x50cf09*/
            v24 = ActorBaseForm; /*0x50cf0e*/
            v25 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x50cf35*/
                                       ActorBaseForm,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                                       &TESNPC `RTTI Type Descriptor',
                                       0);
            v26 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x50cf37*/
                                       v24,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                                       &TESCreature `RTTI Type Descriptor',
                                       0);
            if ( v25 ) /*0x50cf41*/
            {
              sub_5227A0(v25, st5_0, a2, st7_0, (TESObjectREFR *)v12, 1, 1, 0, 1); /*0x50cf4e*/
            }
            else if ( v26 ) /*0x50cf57*/
            {
              sub_51E240(v26, (int)v24, st5_0, a2, st7_0, (TESObjectREFR *)v12, 1, 1, 1); /*0x50cf62*/
            }
          }
        }
        if ( Actor_IsNPC((Actor *)v12) ) /*0x50cf69*/
        {
          v27 = v12->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v12); /*0x50cf8a*/
          v28 = (TESForm *)OblivionDynamicCast( /*0x50cf8d*/
                             v27,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
          if ( v28 ) /*0x50cf97*/
            TESNPC_RecalculateAutoStats(v28, 0); /*0x50cf9d*/
        }
      }
    }
  }
}
