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
  int *v25; // esi
  void *v26; // eax
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

  *(_DWORD *)v32 = 0;
  v33 = 0;
  v34 = 0xFFFFFFFF;
  v35 = 0xFFFFFFFF;
  v11 = (Actor *)OblivionDynamicCast(
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  v12 = (PlayerCharacter *)v11;
  if ( v11 )
  {
    ActorBaseForm = (TESNPC *)Actor_GetActorBaseForm(v11, 0);
    if ( Script_ExtractArgs(a1, arg4, a3, a4, a7, a8, l, v32, &v33, &v34, &v35) )
    {
      CurrentMagicItem = 0;
      v14 = 0;
      if ( v12 == TESDataHandler_g_PlayerRef )
      {
        CurrentMagicItem = (char *)Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef);
        v14 = sub_65D4C0(TESDataHandler_g_PlayerRef);
        PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, v14, st5_0, a2, st7_0, 0);
        sub_664850((int)TESDataHandler_g_PlayerRef, v14, st5_0, a2, st7_0, 0);
      }
      p_actorBaseData = &ActorBaseForm->member.super.actorBaseData;
      TESActorBaseData_SetLevel(&ActorBaseForm->member.super.actorBaseData, v32[0]);
      if ( v12 == TESDataHandler_g_PlayerRef )
      {
        if ( CurrentMagicItem )
          PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, v14, st5_0, a2, st7_0, CurrentMagicItem);
        if ( v14 )
          sub_664850((int)TESDataHandler_g_PlayerRef, v14, st5_0, a2, st7_0, v14);
      }
      if ( v33 )
      {
        InitializeComponent = p_actorBaseData->vtbl[5].InitializeComponent;
        p_actorBaseData->flags |= 0x80u;
        ((void (__thiscall *)(TESActorBaseData *, int))InitializeComponent)(p_actorBaseData, 0x10);
        ((void (__thiscall *)(TESActorBaseData *, int))p_actorBaseData->vtbl[5].InitializeComponent)(
          p_actorBaseData,
          0x10);
      }
      if ( v12 != TESDataHandler_g_PlayerRef )
      {
        if ( v34 != 0xFFFFFFFF )
        {
          vtbl = p_actorBaseData->vtbl;
          p_actorBaseData->minLevel = v34;
          ((void (__thiscall *)(TESActorBaseData *, int))vtbl[5].InitializeComponent)(p_actorBaseData, 0x10);
          v18 = p_actorBaseData->vtbl[5].InitializeComponent;
          p_actorBaseData->flags |= 0x80u;
          ((void (__thiscall *)(TESActorBaseData *, int))v18)(p_actorBaseData, 0x10);
          ((void (__thiscall *)(TESActorBaseData *, int))p_actorBaseData->vtbl[5].InitializeComponent)(
            p_actorBaseData,
            0x10);
        }
        if ( v35 != 0xFFFFFFFF )
        {
          v19 = p_actorBaseData->vtbl;
          p_actorBaseData->maxLevel = v35;
          ((void (__thiscall *)(TESActorBaseData *, int))v19[5].InitializeComponent)(p_actorBaseData, 0x10);
          v20 = p_actorBaseData->vtbl[5].InitializeComponent;
          p_actorBaseData->flags |= 0x80u;
          ((void (__thiscall *)(TESActorBaseData *, int))v20)(p_actorBaseData, 0x10);
          ((void (__thiscall *)(TESActorBaseData *, int))p_actorBaseData->vtbl[5].InitializeComponent)(
            p_actorBaseData,
            0x10);
        }
        Container = TESObjectREFR_GetContainer((TESObjectREFR *)v12);
        Actor_GetActorBaseForm((Actor *)v12, 0);
        ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v12);
        v23 = ContainerExtraDataForRef;
        if ( Container )
        {
          if ( ContainerExtraDataForRef )
          {
            ContainerExtraData_UnequipAll(ContainerExtraDataForRef, 0);
            sub_48DF80((_DWORD **)v23);
            ContainerExtraData_EvaluateOwnerLeveledItems(v29, v30, v31, *(int *)v32, v33);
            v24 = ActorBaseForm;
            v25 = (int *)OblivionDynamicCast(
                           ActorBaseForm,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                           &TESNPC `RTTI Type Descriptor',
                           0);
            v26 = OblivionDynamicCast(
                    v24,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                    &TESCreature `RTTI Type Descriptor',
                    0);
            if ( v25 )
            {
              sub_5227A0(v25, st5_0, a2, st7_0, (TESObjectREFR *)v12, 1, 1, 0, 1);
            }
            else if ( v26 )
            {
              sub_51E240(v12, 1, 1, 1);
            }
          }
        }
        if ( Actor_IsNPC((Actor *)v12) )
        {
          v27 = v12->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v12);
          v28 = (TESForm *)OblivionDynamicCast(
                             v27,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
          if ( v28 )
            sub_5222D0(v28, 0);
        }
      }
    }
  }
}
