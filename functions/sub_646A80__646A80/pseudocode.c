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

  if ( !a1 ) /*0x646a87*/
    return 0; /*0x646a87*/
  if ( a1 == a2 ) /*0x646a93*/
    return 0; /*0x646a93*/
  flags = a1->member.super.flags; /*0x646a99*/
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 ) /*0x646abd*/
    return 0; /*0x646c1f*/
  if ( !a2 ) /*0x646ac5*/
    return 1; /*0x646aca*/
  v5 = OblivionDynamicCast( /*0x646ade*/
         a2[1].vtbl,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
         &LowProcess `RTTI Type Descriptor',
         0);
  v6 = v5; /*0x646ae3*/
  if ( !v5 ) /*0x646aea*/
    return 1; /*0x646af0*/
  v7 = v5[0x1B]; /*0x646af1*/
  if ( v7 && (v16 = v7, v8 = a1->vtbl->GetBaseForm(a1), sub_568370((int)v8, v16)) /*0x646b3a*/
    || (v10 = (TESForm *)v6[0x1A]) != 0 && v10 == a1->vtbl->GetBaseForm(a1) )
  {
    v9 = !a1->vtbl->IsDead(a1, 0); /*0x646b21*/
    goto LABEL_17; /*0x646b23*/
  }
  if ( !v6[0x1B] ) /*0x646b3c*/
  {
    v9 = v10 == 0; /*0x646b42*/
LABEL_17:
    if ( v9 ) /*0x646b44*/
    {
      Actor::SetCompressedFlag((Actor *)a1, 1); /*0x646b4a*/
      BSSimpleList_PushBack(v6 + 0x17, (int)a1); /*0x646b53*/
    }
  }
  if ( a1->vtbl->IsActor(a1) && a1 != (TESObjectREFR *)reference /*0x646b80*/
    || a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Container )
  {
    v11 = 0; /*0x646b90*/
    TotalEntryCountForITem = (TESObjectREFR *)TESObjectREF_GetTotalEntryCountForITem(a1, 0); /*0x646b94*/
    if ( (int)TotalEntryCountForITem > 0 ) /*0x646b98*/
    {
      do /*0x646c16*/
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem(a1, v11, 0); /*0x646ba5*/
        v13 = (unsigned int)InventoryEntryOfItem; /*0x646baa*/
        if ( InventoryEntryOfItem ) /*0x646bae*/
        {
          if ( !ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0) ) /*0x646bb4*/
          {
            if ( v6[0x1B] && sub_568370(*(_DWORD *)(v13 + 8), v6[0x1B]) /*0x646beb*/
              || (v15 = v6[0x1A], v15 == *(_DWORD *)(v13 + 8))
              || !v6[0x1B] && !v6[0x19] && !v15 )
            {
              Actor::SetCompressedFlag((Actor *)a1, 1); /*0x646bf1*/
              BSSimpleList_PushBack(v6 + 0x17, (int)a1); /*0x646bfa*/
            }
          }
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v13, v14); /*0x646c01*/
          FormHeapFree(v13); /*0x646c07*/
        }
        v11 = (TESForm *)((char *)v11 + 1); /*0x646c0f*/
      }
      while ( (int)v11 < (int)TotalEntryCountForITem ); /*0x646c16*/
    }
  }
  return 0; /*0x646ac9*/
}
