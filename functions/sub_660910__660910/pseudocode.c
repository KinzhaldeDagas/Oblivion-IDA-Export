void __userpurge sub_660910(int a1@<ecx>, double a2@<st2>, double a3@<st1>, TESObjectREFR *a4, signed int a5, int a6)
{
  TESForm *v10; // eax
  NiNode *v11; // eax
  TESObjectREFR **v12; // ebx
  Actor *v13; // ebp
  TESObjectREFR *v14; // eax
  TESForm *Owner; // ebp
  void *v16; // ebx
  _DWORD *v17; // eax
  bool v18; // zf
  char v19; // al
  void (__thiscall **v20)(int); // ebx
  bool v21; // al
  ExtraDataList *p_baseExtraList; // ecx
  char v23; // bl
  TESForm *v24; // ebp
  int *v25; // eax
  int ExtraCount; // ebp
  Sky *v27; // eax
  char *v28; // ebp
  _DWORD *v29; // eax
  int v30; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraDataList ***v32; // eax
  char v33; // al
  int v34; // [esp+8h] [ebp-1Ch]
  TESObjectREFR *v35; // [esp+Ch] [ebp-18h]
  int v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+1Ch] [ebp-8h]
  ExtraDataList *v38; // [esp+20h] [ebp-4h]
  TESChildCELL *v39; // [esp+28h] [ebp+4h]
  TESChildCELL *OverrideFile; // [esp+28h] [ebp+4h]

  v10 = a4->vtbl->GetBaseForm(a4);
  sub_5E99C0((TESObjectREFR *)a1, v10, 1, 0);
  v11 = a4->vtbl->GetNiNode(a4);
  sub_88CF90(v11, 1u, 1, 0);
  v12 = sub_674E40(a4->member.super.refID, (TESObjectREFR *)a1);
  v39 = (TESChildCELL *)v12;
  if ( v12 )
  {
    do
    {
      v13 = (Actor *)*v12;
      if ( !*v12 )
        break;
      sub_5E2E00((Actor *)*v12);
      if ( v14 == a4 )
        sub_5E03C0(v13, a1);
      else
        sub_5E03C0(v13, 0);
      v12 = (TESObjectREFR **)v12[1];
    }
    while ( v12 );
    BSSimpleList_Clear(v39);
    FormHeapFree((unsigned int)v39);
  }
  OverrideFile = (TESChildCELL *)TESForm_GetOverrideFile((TESForm *)a4, 0xFFFFFFFF);
  if ( !Menu_GetOpenMenuTile(0x3F1) && !LOBYTE(TESDataHandler_g_PlayerRef->unk124) )
  {
    Owner = (TESForm *)TESObjectREFR_GetOwner(a4);
    v16 = OblivionDynamicCast(
            a4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &ArrowProjectile `RTTI Type Descriptor',
            0);
    if ( !Owner
      || TESOBjectREFR_IsOwnedBy(a4, (TESObjectREFR *)a1, 1)
      || v16
      || a4->vtbl->GetBaseForm(a4)->member.refID == 0xF )
    {
      p_baseExtraList = &a4->member.baseExtraList;
LABEL_24:
      ExtraDataList_RemoveOwner(p_baseExtraList);
      goto LABEL_25;
    }
    v17 = sub_676480((int)&ActorProcessManager_ptr, a4);
    v18 = (a4->member.super.flags & 1) == 0;
    dword_B3BAF0 = (int)v17;
    if ( !v18 || OverrideFile || (sub_4D8260((int)a4, 2), v19) )
    {
      v20 = (void (__thiscall **)(int))(*(_DWORD *)a1 + 0x238);
      v36 = ((int (__thiscall *)(TESObjectREFR *, signed int, _DWORD, TESForm *))a4->vtbl->GetBaseForm)(
              a4,
              a5,
              0,
              Owner);
      v35 = a4;
    }
    else
    {
      if ( !dword_B3BAF0 )
        goto LABEL_21;
      v20 = (void (__thiscall **)(int))(*(_DWORD *)a1 + 0x238);
      v36 = ((int (__thiscall *)(TESObjectREFR *, signed int, _DWORD, TESForm *))a4->vtbl->GetBaseForm)(
              a4,
              a5,
              0,
              Owner);
      v35 = (TESObjectREFR *)dword_B3BAF0;
    }
    (*v20)(a1);
LABEL_21:
    v21 = sub_4DE880(a4, 0);
    p_baseExtraList = &a4->member.baseExtraList;
    if ( !v21 )
    {
      ExtraDataList::SetOrRemoveExtraOwnership(p_baseExtraList, Owner);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
LABEL_25:
  v23 = 0;
  if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF4))(*(_DWORD *)(a1 + 0x58), 1) )
  {
    v24 = *(TESForm **)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF4))(
                          *(_DWORD *)(a1 + 0x58),
                          1)
                      + 8);
    if ( a4->vtbl->GetBaseForm(a4) == v24 )
    {
      v25 = (int *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF4))(*(_DWORD *)(a1 + 0x58), 1);
      if ( !sub_4847C0(v25) || ExtraDataList_GetOwner(&a4->member.baseExtraList) )
      {
        ExtraCount = ExtraDataList_GetExtraCount(&a4->member.baseExtraList);
        v27 = (Sky *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF4))(*(_DWORD *)(a1 + 0x58), 1);
        v28 = (char *)TESHealthForm_GetHealth(v27) + ExtraCount;
        v29 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, char *))(**(_DWORD **)(a1 + 0x58) + 0xF4))(
                          *(_DWORD *)(a1 + 0x58),
                          1,
                          v28);
        sub_60D020(v29, (int)v35);
        v30 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 0x58) + 0xF4))(
                *(_DWORD *)(a1 + 0x58),
                1,
                v36);
        v38 = &TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList;
        v37 = *(_DWORD *)(v30 + 8);
        v34 = ExtraDataList_GetExtraCount(&a4->member.baseExtraList);
        ContainerChanges = ExtraDataList_GetContainerChanges(v38);
        sub_487350(ContainerChanges, v37, v34);
        v32 = (ExtraDataList ***)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF4))(
                                   *(_DWORD *)(a1 + 0x58),
                                   1);
        ExtraDataList_SetExtraCount(**v32, (int)v28);
        v23 = 1;
      }
    }
  }
  if ( (a4->member.super.flags & 1) == 0 && !OverrideFile )
  {
    sub_4D8260((int)a4, 2);
    if ( v33 )
    {
      sub_4D7D80(a4);
      if ( !v23 )
      {
        sub_4DDC40((TESObjectREFR *)a1, a4, a5, 0, 0);
        sub_57A3B0(a2, a3, 0);
        return;
      }
    }
    else
    {
      if ( !v23 )
        sub_4DDC40((TESObjectREFR *)a1, a4, a5, 0, 0);
      a4->vtbl->super.Destroy((TESForm *)a4, 1);
      if ( !v23 )
        goto LABEL_39;
    }
LABEL_38:
    sub_5F8300((TESObjectREFR *)a1, *(_DWORD *)(a1 + 0x104), 0);
    sub_5F8300((TESObjectREFR *)a1, *(_DWORD *)(a1 + 0x5C8), 0);
LABEL_39:
    sub_57A3B0(a2, a3, 0);
    return;
  }
  sub_4D7D80(a4);
  if ( v23 )
    goto LABEL_38;
  sub_4DDC40((TESObjectREFR *)a1, a4, a5, a6, 0);
  sub_57A3B0(a2, a3, 0);
}
