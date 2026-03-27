char __usercall sub_646600@<al>(_DWORD *a1@<esi>, TESObjectREFR *a2, TESObjectREFR *a3)
{
  TESForm::FormFlags flags; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v7; // ebx
  TESForm *v8; // eax
  bool v9; // zf
  TESForm *Unk_19; // esi
  int type; // eax
  char v12; // bl
  TESForm *v13; // eax
  int v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraContainerChanges_Data *v18; // esi
  TESObjectREFR *owner; // ecx
  TESObjectREFR *v20; // ecx
  TESContainer *Container; // eax
  TESContainer_Data *data; // ebp
  int v23; // eax
  TESForm *v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // esi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  int TotalEntryCountForITem; // ebx
  TESForm *v32; // esi
  EntryData *InventoryEntryOfItem; // eax
  unsigned int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // esi
  ExtraContainerChanges_Data *v42; // eax
  signed int DoPostFixup; // [esp+0h] [ebp-1Ch]
  ExtraContainerChanges_Data *v45; // [esp+8h] [ebp-14h]
  int v46; // [esp+8h] [ebp-14h]
  int v47; // [esp+Ch] [ebp-10h]
  ExtraContainerChanges_Data *v48; // [esp+10h] [ebp-Ch]
  TESForm *i; // [esp+10h] [ebp-Ch]
  TESObjectCELL **v50; // [esp+14h] [ebp-8h]
  char v51; // [esp+18h] [ebp-4h]
  TESContainer_Entry *p_list; // [esp+18h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+1Ch] [ebp+0h]

  if ( !a2 )
    return 0;
  if ( a2 == a3 )
    return 0;
  flags = a2->member.super.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 )
    return 0;
  if ( !a3 )
    return 1;
  vtbl = a3[1].vtbl;
  if ( !vtbl )
    return 1;
  if ( (unsigned int)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) > 3 )
    return 1;
  v7 = a3[1].vtbl;
  v50 = (TESObjectCELL **)v7;
  if ( !v7 )
    return 1;
  if ( v7->super.DoPostFixup
    && (DoPostFixup = (signed int)v7->super.DoPostFixup, v8 = a2->vtbl->GetBaseForm(a2),
                                                         sub_568370((int)v8, DoPostFixup))
    || (Unk_19 = (TESForm *)v7->super.Unk_19) != 0 && Unk_19 == a2->vtbl->GetBaseForm(a2) )
  {
    v9 = !a2->vtbl->IsDead(a2, 0);
  }
  else
  {
    if ( v7->super.DoPostFixup )
      goto LABEL_21;
    v9 = Unk_19 == 0;
  }
  if ( v9 )
    LOBYTE(retaddr) = 1;
LABEL_21:
  type = a2->vtbl->GetBaseForm(a2)->member.type;
  if ( type == 0x15 )
  {
    if ( ((int)a2->vtbl->GetBaseForm(a2)[5].member.modlist.data & 2) == 0 )
      goto LABEL_27;
  }
  else if ( type != 0x1A || (*(_DWORD *)&a2->vtbl->GetBaseForm(a2)[5].member.type & 2) != 0 )
  {
    goto LABEL_27;
  }
  LOBYTE(retaddr) = 0;
LABEL_27:
  v12 = 0;
  if ( a2->vtbl->GetBaseForm(a2)->member.type != kFormType_Weapon )
    goto LABEL_36;
  v13 = a2->vtbl->GetBaseForm(a2);
  v14 = v13 ? (int)&v13[5].member.flags : 0;
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a3->vtbl[1].GetSleepState)(a3, 1) )
    v12 = 1;
  if ( !v14 || TESObjectREFR_GetHealth((TESChildCELL *)a2) > *(float *)&SrcStr || !v12 )
  {
LABEL_36:
    if ( v51 )
    {
      v15 = (_DWORD *)FormHeapAlloc(0x20u);
      if ( v15 )
        v16 = sub_628EB0(v15);
      else
        v16 = 0;
      v16[1] = a2->vtbl->GetBaseForm(a2);
      *v16 = a2;
      v16[4] = ExtraDataList_GetExtraCount(&a2->member.baseExtraList);
      v16[7] = 0;
      v16[6] = &a2->member.baseExtraList;
      BSSimpleList_PushBack((_DWORD *)(v47 + 0x54), (int)v16);
    }
  }
  if ( a2->vtbl->IsActor(a2) && a2 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
    || a2->vtbl->GetBaseForm(a2)->member.type == kFormType_Container )
  {
    ContainerChanges = ExtraDataList_GetContainerChanges(&a2->member.baseExtraList);
    v18 = ContainerChanges;
    v48 = ContainerChanges;
    if ( ContainerChanges )
    {
      owner = ContainerChanges->owner;
      if ( owner )
      {
        if ( TESObjectREFR_GetContainer(owner) )
        {
          v20 = v18->owner;
          if ( v20 )
            Container = TESObjectREFR_GetContainer(v20);
          else
            Container = 0;
          p_list = &Container->list;
          if ( Container != (TESContainer *)0xFFFFFFF8 )
          {
            do
            {
              data = p_list->data;
              if ( !p_list->data )
                break;
              ContainerExtraData_GetEntryForForm(v18, (int)data->type, 1, 0);
              if ( !v23
                && (a1[0x1B] && sub_568370((int)data->type, a1[0x1B])
                 || (v24 = (TESForm *)a1[0x19]) != 0 && v24 == data->type
                 || !a1[0x1B] && !v24) )
              {
                sub_4D8AF0((TESObjectCELL **)a2);
                v26 = v25;
                sub_4D8AF0(v50);
                if ( v26 == v27 )
                {
                  v28 = (_DWORD *)FormHeapAlloc(0x20u);
                  if ( v28 )
                    v29 = sub_628EB0(v28);
                  else
                    v29 = 0;
                  v29[1] = data->type;
                  *v29 = a2;
                  v29[7] = 1;
                  if ( TESObjectREFR_GetContainer(a2) )
                  {
                    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a2);
                    if ( ContainerExtraDataForRef )
                      v29[4] = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, data->type);
                  }
                  else
                  {
                    v29[4] = 1;
                  }
                  BSSimpleList_PushBack(a1 + 0x15, (int)v29);
                }
                v18 = v45;
              }
              v48 = (ExtraContainerChanges_Data *)v48->owner;
            }
            while ( v48 );
          }
        }
      }
    }
    TotalEntryCountForITem = TESObjectREF_GetTotalEntryCountForITem(a2, 0);
    v32 = 0;
    v46 = TotalEntryCountForITem;
    for ( i = 0; (int)v32 < TotalEntryCountForITem; i = v32 )
    {
      InventoryEntryOfItem = GetInventoryEntryOfItem(a2, v32, 0);
      v34 = (unsigned int *)InventoryEntryOfItem;
      if ( InventoryEntryOfItem )
      {
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0)
          && (a1[0x1B] && sub_568370(v34[2], a1[0x1B]) || (v36 = a1[0x19]) != 0 && v36 == v34[2] || !a1[0x1B] && !v36) )
        {
          sub_4D8AF0((TESObjectCELL **)a2);
          v38 = v37;
          sub_4D8AF0(v50);
          if ( v38 == v39 )
          {
            v40 = (_DWORD *)FormHeapAlloc(0x20u);
            if ( v40 )
              v41 = sub_628EB0(v40);
            else
              v41 = 0;
            v41[1] = v34[2];
            *v41 = a2;
            v41[7] = 1;
            if ( TESObjectREFR_GetContainer(a2) )
            {
              v42 = ContainerExtraData_GetContainerExtraDataForRef(a2);
              if ( v42 )
                v41[4] = ContainerExtraData_GetItemCount(v42, (TESForm *)v41[1]);
            }
            else
            {
              v41[4] = 1;
            }
            BSSimpleList_PushBack(a1 + 0x15, (int)v41);
            if ( *v34 )
              v41[6] = *(_DWORD *)*v34;
          }
        }
        ContainerEntryExtraData_DestroyDataTable(v34, v35);
        FormHeapFree((unsigned int)v34);
        TotalEntryCountForITem = v46;
        v32 = i;
      }
      v32 = (TESForm *)((char *)v32 + 1);
    }
  }
  return 0;
}
