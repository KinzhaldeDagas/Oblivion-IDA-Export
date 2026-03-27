char __cdecl sub_646A80(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESForm::FormFlags flags; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  signed int v7; // eax
  TESForm *v8; // eax
  bool v9; // zf
  TESForm *v10; // ebx
  TESForm *v11; // ebp
  EntryData *InventoryEntryOfItem; // eax
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // eax
  signed int v16; // [esp-Ch] [ebp-10h]
  TESObjectREFR *TotalEntryCountForITem; // [esp+8h] [ebp+4h]

  if ( !a1 )
    return 0;
  if ( a1 == a2 )
    return 0;
  flags = a1->member.super.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 )
    return 0;
  if ( !a2 )
    return 1;
  v5 = OblivionDynamicCast(
         a2[1].vtbl,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
         &LowProcess `RTTI Type Descriptor',
         0);
  v6 = v5;
  if ( !v5 )
    return 1;
  v7 = v5[0x1B];
  if ( v7 && (v16 = v7, v8 = a1->vtbl->GetBaseForm(a1), sub_568370((int)v8, v16))
    || (v10 = (TESForm *)v6[0x1A]) != 0 && v10 == a1->vtbl->GetBaseForm(a1) )
  {
    v9 = !a1->vtbl->IsDead(a1, 0);
    goto LABEL_17;
  }
  if ( !v6[0x1B] )
  {
    v9 = v10 == 0;
LABEL_17:
    if ( v9 )
    {
      Actor::SetCompressedFlag((Actor *)a1, 1);
      BSSimpleList_PushBack(v6 + 0x17, (int)a1);
    }
  }
  if ( a1->vtbl->IsActor(a1) && a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
    || a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Container )
  {
    v11 = 0;
    TotalEntryCountForITem = (TESObjectREFR *)TESObjectREF_GetTotalEntryCountForITem(a1, 0);
    if ( (int)TotalEntryCountForITem > 0 )
    {
      do
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem(a1, v11, 0);
        v13 = (unsigned int)InventoryEntryOfItem;
        if ( InventoryEntryOfItem )
        {
          if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0) )
          {
            if ( v6[0x1B] && sub_568370(*(_DWORD *)(v13 + 8), v6[0x1B])
              || (v15 = v6[0x1A], v15 == *(_DWORD *)(v13 + 8))
              || !v6[0x1B] && !v6[0x19] && !v15 )
            {
              Actor::SetCompressedFlag((Actor *)a1, 1);
              BSSimpleList_PushBack(v6 + 0x17, (int)a1);
            }
          }
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v13, v14);
          FormHeapFree(v13);
        }
        v11 = (TESForm *)((char *)v11 + 1);
      }
      while ( (int)v11 < (int)TotalEntryCountForITem );
    }
  }
  return 0;
}
