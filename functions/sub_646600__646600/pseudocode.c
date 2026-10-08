// RadiantAI: acquire scan callback for sub_62DA10; builds 0x20-byte candidate entries from loose refs, containers, and actor inventories. Initial response codes: 0 direct/world, 1 inventory/container.
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
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraContainerChanges_Data *v18; // esi
  TESObjectREFR *owner; // ecx
  TESObjectREFR *v20; // ecx
  TESContainer *Container; // eax
  void *v22; // ebp
  void (__thiscall *v23)(TESForm *); // eax
  TESForm *SpatialContainerAtPosition; // esi
  _DWORD *v25; // eax
  _DWORD *v26; // esi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  int TotalEntryCountForITem; // ebx
  TESForm *v29; // esi
  EntryData *InventoryEntryOfItem; // eax
  unsigned int *v31; // ebp
  int v32; // edx
  void (__thiscall *v33)(TESForm *); // eax
  TESForm *v34; // esi
  _DWORD *v35; // eax
  _DWORD *v36; // esi
  ExtraContainerChanges_Data *v37; // eax
  signed int DoPostFixup; // [esp+0h] [ebp-1Ch]
  TESObjectREFRVtbl *v40; // [esp+14h] [ebp-8h]
  ExtraContainerChanges_Data *v41; // [esp+18h] [ebp-4h]
  int v42; // [esp+18h] [ebp-4h]
  char v43; // [esp+20h] [ebp+4h]
  TESChildCELL *p_list; // [esp+20h] [ebp+4h]
  TESChildCELL *i; // [esp+20h] [ebp+4h]

  if ( !a2 ) /*0x64660b*/
    return 0; /*0x64660b*/
  if ( a2 == a3 ) /*0x646617*/
    return 0; /*0x646617*/
  flags = a2->member.super.flags; /*0x64661d*/
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 ) /*0x646641*/
    return 0; /*0x646a76*/
  if ( !a3 ) /*0x646649*/
    return 1; /*0x646652*/
  vtbl = a3[1].vtbl; /*0x646653*/
  v43 = 0; /*0x646659*/
  if ( !vtbl ) /*0x64665e*/
    return 1; /*0x64665e*/
  if ( (unsigned int)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) > 3 ) /*0x64666a*/
    return 1; /*0x64666a*/
  v7 = a3[1].vtbl; /*0x64666c*/
  v40 = v7; /*0x646671*/
  if ( !v7 ) /*0x646675*/
    return 1; /*0x64667f*/
  if ( v7->super.DoPostFixup /*0x6466c9*/
    && (DoPostFixup = (signed int)v7->super.DoPostFixup, v8 = a2->vtbl->GetBaseForm(a2),
                                                         sub_568370((int)v8, DoPostFixup))
    || (Unk_19 = (TESForm *)v7->super.Unk_19) != 0 && Unk_19 == a2->vtbl->GetBaseForm(a2) )
  {
    v9 = !a2->vtbl->IsDead(a2, 0); /*0x6466b0*/
  }
  else
  {
    if ( v7->super.DoPostFixup ) /*0x6466cb*/
      goto LABEL_21; /*0x6466cf*/
    v9 = Unk_19 == 0; /*0x6466d1*/
  }
  if ( v9 ) /*0x6466d3*/
    v43 = 1; /*0x6466d5*/
LABEL_21:
  type = a2->vtbl->GetBaseForm(a2)->member.type; /*0x6466da*/
  if ( type == 0x15 ) /*0x6466ed*/
  {
    if ( ((int)a2->vtbl->GetBaseForm(a2)[5].member.modlist.data & 2) == 0 ) /*0x64671e*/
      goto LABEL_27; /*0x64671e*/
  }
  else if ( type != 0x1A || (*(_DWORD *)&a2->vtbl->GetBaseForm(a2)[5].member.type & 2) != 0 ) /*0x646707*/
  {
    goto LABEL_27; /*0x646707*/
  }
  v43 = 0; /*0x646720*/
LABEL_27:
  v12 = 0; /*0x646725*/
  if ( a2->vtbl->GetBaseForm(a2)->member.type != kFormType_Weapon ) /*0x646737*/
    goto LABEL_36; /*0x646737*/
  v13 = ((int (__thiscall *)(TESObjectREFR *, _DWORD *))a2->vtbl->GetBaseForm)(a2, a1); /*0x646743*/
  v14 = v13 ? v13 + 0x80 : 0;
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a3->vtbl[1].GetSleepState)(a3, 1) ) /*0x646760*/
    v12 = 1; /*0x646766*/
  if ( !v14 || TESObjectREFR_GetHealth((TESChildCELL *)a2) > *(float *)&SrcStr || !v12 ) /*0x646782*/
  {
LABEL_36:
    if ( v43 ) /*0x646789*/
    {
      v15 = (_DWORD *)FormHeapAlloc(0x20u); /*0x64678d*/
      if ( v15 ) /*0x646797*/
        v16 = sub_628EB0(v15); /*0x6467a0*/
      else
        v16 = 0; /*0x6467a4*/
      v16[1] = a2->vtbl->GetBaseForm(a2); /*0x6467b7*/
      *v16 = a2; /*0x6467ba*/
      v16[4] = ExtraDataList_GetExtraCount(&a2->member.baseExtraList); /*0x6467c4*/
      v16[7] = 0; /*0x6467cf*/
      v16[6] = &a2->member.baseExtraList; /*0x6467d6*/
      BSSimpleList_PushBack(&v40->super.LoadGame, (int)v16); /*0x6467d9*/
    }
  }
  if ( a2->vtbl->IsActor(a2) && a2 != (TESObjectREFR *)reference /*0x646806*/
    || a2->vtbl->GetBaseForm(a2)->member.type == kFormType_Container )
  {
    ContainerChanges = ExtraDataList_GetContainerChanges(&a2->member.baseExtraList); /*0x64680f*/
    v18 = ContainerChanges; /*0x646814*/
    v41 = ContainerChanges; /*0x646818*/
    if ( ContainerChanges ) /*0x64681c*/
    {
      owner = ContainerChanges->owner; /*0x646822*/
      if ( owner ) /*0x646827*/
      {
        if ( TESObjectREFR_GetContainer(owner) ) /*0x64682d*/
        {
          v20 = v18->owner; /*0x64683a*/
          if ( v20 ) /*0x64683f*/
            Container = TESObjectREFR_GetContainer(v20); /*0x646841*/
          else
            Container = 0; /*0x646848*/
          p_list = (TESChildCELL *)&Container->list; /*0x64684d*/
          if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x646851*/
          {
            do /*0x64693c*/
            {
              v22 = p_list->vtbl; /*0x64685b*/
              if ( !p_list->vtbl ) /*0x64685b*/
                break; /*0x64685f*/
              if ( !ContainerExtraData_GetEntryForForm(v18, *((TESForm **)v22 + 1), 1, 0) /*0x6468b0*/
                && (v40->super.DoPostFixup && sub_568370(*((_DWORD *)v22 + 1), (signed int)v40->super.DoPostFixup)
                 || (v23 = v40->super.Unk_19) != 0 && v23 == *((void (__thiscall **)(TESForm *))v22 + 1)
                 || !v40->super.DoPostFixup && !v23) )
              {
                SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(a2); /*0x6468bd*/
                if ( SpatialContainerAtPosition == TESObjectREFR_GetSpatialContainerAtPosition(a3) ) /*0x6468c6*/
                {
                  v25 = (_DWORD *)FormHeapAlloc(0x20u); /*0x6468ca*/
                  if ( v25 ) /*0x6468d4*/
                    v26 = sub_628EB0(v25); /*0x6468dd*/
                  else
                    v26 = 0; /*0x6468e1*/
                  v26[1] = *((_DWORD *)v22 + 1); /*0x6468e6*/
                  *v26 = a2; /*0x6468eb*/
                  v26[7] = 1; /*0x6468ed*/
                  if ( TESObjectREFR_GetContainer(a2) ) /*0x6468f4*/
                  {
                    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a2); /*0x6468ff*/
                    if ( ContainerExtraDataForRef ) /*0x646909*/
                      v26[4] = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, *((TESForm **)v22 + 1)); /*0x646916*/
                  }
                  else
                  {
                    v26[4] = 1; /*0x64691b*/
                  }
                  BSSimpleList_PushBack(&v40->super.LoadGame, (int)v26); /*0x646926*/
                }
                v18 = v41; /*0x64692b*/
              }
              p_list = (TESChildCELL *)p_list[1].vtbl; /*0x646938*/
            }
            while ( p_list ); /*0x64693c*/
          }
        }
      }
    }
    TotalEntryCountForITem = TESObjectREF_GetTotalEntryCountForITem(a2, 0); /*0x64694b*/
    v29 = 0; /*0x64694d*/
    v42 = TotalEntryCountForITem; /*0x646951*/
    for ( i = 0; (int)v29 < TotalEntryCountForITem; i = (TESChildCELL *)v29 ) /*0x646959*/
    {
      InventoryEntryOfItem = GetInventoryEntryOfItem(a2, v29, 0); /*0x646965*/
      v31 = (unsigned int *)InventoryEntryOfItem; /*0x64696a*/
      if ( InventoryEntryOfItem ) /*0x64696e*/
      {
        if ( !ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0) /*0x6469b9*/
          && (v40->super.DoPostFixup && sub_568370(v31[2], (signed int)v40->super.DoPostFixup)
           || (v33 = v40->super.Unk_19) != 0 && v33 == (void (__thiscall *)(TESForm *))v31[2]
           || !v40->super.DoPostFixup && !v33) )
        {
          v34 = TESObjectREFR_GetSpatialContainerAtPosition(a2); /*0x6469ca*/
          if ( v34 == TESObjectREFR_GetSpatialContainerAtPosition(a3) ) /*0x6469d3*/
          {
            v35 = (_DWORD *)FormHeapAlloc(0x20u); /*0x6469d7*/
            if ( v35 ) /*0x6469e1*/
              v36 = sub_628EB0(v35); /*0x6469ea*/
            else
              v36 = 0; /*0x6469ee*/
            v36[1] = v31[2]; /*0x6469f3*/
            *v36 = a2; /*0x6469f8*/
            v36[7] = 1; /*0x6469fa*/
            if ( TESObjectREFR_GetContainer(a2) ) /*0x646a01*/
            {
              v37 = ContainerExtraData_GetContainerExtraDataForRef(a2); /*0x646a0c*/
              if ( v37 ) /*0x646a16*/
                v36[4] = ContainerExtraData_GetItemCount(v37, (TESForm *)v36[1]); /*0x646a23*/
            }
            else
            {
              v36[4] = 1; /*0x646a28*/
            }
            BSSimpleList_PushBack(&v40->super.LoadGame, (int)v36); /*0x646a33*/
            if ( *v31 ) /*0x646a38*/
              v36[6] = *(_DWORD *)*v31; /*0x646a41*/
          }
        }
        ContainerEntryExtraData_DestroyDataTable(v31, v32); /*0x646a46*/
        FormHeapFree((unsigned int)v31); /*0x646a4c*/
        TotalEntryCountForITem = v42; /*0x646a51*/
        v29 = (TESForm *)i; /*0x646a55*/
      }
      v29 = (TESForm *)((char *)v29 + 1); /*0x646a5c*/
    }
  }
  return 0; /*0x64664b*/
}
