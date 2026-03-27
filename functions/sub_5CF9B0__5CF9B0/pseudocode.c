void __usercall sub_5CF9B0(double a1@<st2>, double st6_0@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *v6; // ebx
  double Float; // st7
  TESForm *v8; // eax
  int v9; // edx
  EntryData *InventoryEntryOfItem; // esi
  unsigned __int16 *v11; // eax
  signed int v12; // edi
  float *ContainerChanges; // eax
  int ExtraCount; // edi
  ExtraContainerChanges_Data *v15; // eax
  ExtraDataList *data; // edx
  InterfaceManager *Singleton; // eax
  double v18; // st7
  float v19; // [esp+0h] [ebp-1Ch]
  float a2; // [esp+14h] [ebp-8h]
  int v21; // [esp+18h] [ebp-4h]

  if ( sub_578D70() == 1 )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x419);
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v6 = (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)OblivionDynamicCast(
                                                                                       ParentMenu,
                                                                                       0,
                                                                                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                                                       &RechargeMenu `RTTI Type Descriptor',
                                                                                       0);
    Float = Tile_GetFloat((_DWORD *)dword_B3B708, 0xFB9);
    v8 = (TESForm *)Double_To_SInt32(Float);
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v8, 0);
    if ( InventoryEntryOfItem )
    {
      if ( *((_DWORD *)v6 + 0x12) )
      {
        sub_57DE50(0x18);
        v11 = (unsigned __int16 *)OblivionDynamicCast(
                                    InventoryEntryOfItem->type,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESEnchantableForm `RTTI Type Descriptor',
                                    0);
        v12 = Count;
        v21 = 0x7FFFFFFF;
        if ( v11 )
          v21 = v11[4];
        ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        sub_491700(ContainerChanges, a1, st6_0, Float, (TESObjectREFR *)TESDataHandler_g_PlayerRef, v12, 0);
        ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)InventoryEntryOfItem->extendData->node.data);
        v15 = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        if ( ExtraCount <= 1 )
        {
          data = 0;
          if ( InventoryEntryOfItem->extendData )
            data = (ExtraDataList *)InventoryEntryOfItem->extendData->node.data;
          Float = (double)v21;
          v19 = Float;
          sub_488AA0((void **)&InventoryEntryOfItem->extendData, (BSExtraDataVtbl *)LODWORD(v19), v15, data);
        }
        else
        {
          ExtraDataList_SetExtraCount((ExtraDataList *)InventoryEntryOfItem->extendData->node.data, ExtraCount - 1);
        }
        sub_65DD20(TESDataHandler_g_PlayerRef);
        sub_5CEF60((_DWORD **)v6, 0);
      }
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v9);
      FormHeapFree((unsigned int)InventoryEntryOfItem);
    }
    NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
      v6,
      a1,
      st6_0,
      Float,
      1);
  }
  else
  {
    InterfaceManager_GetSingleton(0, 1);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    v18 = (double)(int)++Singleton->unk08C;
    if ( (int)Singleton->unk08C < 0 )
      v18 = v18 + flt_A2FC78;
    a2 = v18;
    Tile_SetFloat((Tile *)dword_B3B708, (_DWORD *)0xFF0, a2);
  }
}
