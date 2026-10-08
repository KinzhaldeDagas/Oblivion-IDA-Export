void __usercall sub_5CF9B0(double a1@<st2>, double st6_0@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *v4; // ebx
  double Float; // st7
  TESForm *v6; // eax
  int v7; // edx
  EntryData *InventoryEntryOfItem; // esi
  unsigned __int16 *v9; // eax
  signed int v10; // edi
  float *ContainerChanges; // eax
  int ExtraCount; // edi
  ExtraContainerChanges_Data *v13; // eax
  ExtraDataList *data; // edx
  InterfaceManager *Singleton; // eax
  double v16; // st7
  float newCharge; // [esp+0h] [ebp-1Ch]
  float a2; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x5cf9b8*/
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x419); /*0x5cf9c5*/
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5cf9cf*/
    v4 = (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)OblivionDynamicCast( /*0x5cf9f6*/
                                                                                       ParentMenu,
                                                                                       0,
                                                                                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                                                       &RechargeMenu `RTTI Type Descriptor',
                                                                                       0);
    Float = Tile_GetFloat((_DWORD *)dword_B3B704[1], 0xFB9); /*0x5cf9f8*/
    v6 = (TESForm *)Double_To_SInt32(Float); /*0x5cf9fd*/
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v6, 0); /*0x5cfa10*/
    if ( InventoryEntryOfItem ) /*0x5cfa14*/
    {
      if ( *((_DWORD *)v4 + 0x12) ) /*0x5cfa1a*/
      {
        sub_57DE50(0x18); /*0x5cfa27*/
        v9 = (unsigned __int16 *)OblivionDynamicCast( /*0x5cfa3e*/
                                   InventoryEntryOfItem->type,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESEnchantableForm `RTTI Type Descriptor',
                                   0);
        v10 = dword_B3B704[2]; /*0x5cfa43*/
        v19 = 0x7FFFFFFF; /*0x5cfa4e*/
        if ( v9 ) /*0x5cfa56*/
          v19 = v9[4]; /*0x5cfa5c*/
        ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5cfa69*/
        sub_491700(ContainerChanges, a1, st6_0, Float, (TESObjectREFR *)reference, v10, 0); /*0x5cfa7a*/
        ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)InventoryEntryOfItem->extendData->node.data); /*0x5cfa91*/
        v13 = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5cfa94*/
        if ( ExtraCount <= 1 ) /*0x5cfa9c*/
        {
          data = 0; /*0x5cfaaf*/
          if ( InventoryEntryOfItem->extendData ) /*0x5cfaad*/
            data = (ExtraDataList *)InventoryEntryOfItem->extendData->node.data; /*0x5cfab5*/
          Float = (double)v19; /*0x5cfab7*/
          newCharge = Float; /*0x5cfac0*/
          EquippedEntryData_SetCharge(InventoryEntryOfItem, newCharge, v13, data); /*0x5cfac3*/
        }
        else
        {
          ExtraDataList_SetExtraCount((ExtraDataList *)InventoryEntryOfItem->extendData->node.data, ExtraCount - 1); /*0x5cfaa6*/
        }
        sub_65DD20(reference); /*0x5cface*/
        sub_5CEF60((_DWORD **)v4, 0); /*0x5cfad7*/
      }
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v7); /*0x5cfadf*/
      FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x5cfae5*/
    }
    NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>( /*0x5cfaf1*/
      v4,
      Float,
      1);
  }
  else
  {
    InterfaceManager_GetSingleton(0, 1); /*0x5cfafe*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5cfb07*/
    v16 = (double)(int)++Singleton->unk08C; /*0x5cfb13*/
    if ( (int)Singleton->unk08C < 0 ) /*0x5cfb26*/
      v16 = v16 + flt_A2FC78; /*0x5cfb28*/
    a2 = v16; /*0x5cfb34*/
    Tile_SetFloat((Tile *)dword_B3B704[1], 0xFF0u, a2); /*0x5cfb40*/
  }
}
