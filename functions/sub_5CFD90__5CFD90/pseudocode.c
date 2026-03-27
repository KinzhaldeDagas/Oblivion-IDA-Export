void __userpurge sub_5CFD90(
        _DWORD *a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        signed int a6,
        Tile *a7)
{
  TESForm *v8; // eax
  int v9; // edx
  EntryData *InventoryEntryOfItem; // ebp
  int v11; // esi
  Tile *v12; // edi
  Tile *v13; // ebx
  Tile *v14; // edi
  InterfaceManager *Singleton; // eax
  double v16; // st4
  int ExtraCount; // ebx
  ExtraDataList *v18; // esi
  ExtraContainerChanges_Data *ContainerChanges; // edi
  _DWORD *v20; // eax
  int type; // eax
  _DWORD **v22; // eax
  _DWORD **v23; // ebp
  ExtraDataList *v24; // edi
  double Charge; // st7
  double v26; // st6
  UInt32 v27; // eax
  int v28; // edi
  ExtraDataList *v29; // ebx
  TESForm *v30; // edx
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // eax
  TESForm::FormFlags flags; // edx
  int v33; // eax
  unsigned __int16 *v34; // eax
  int v35; // eax
  int v36; // esi
  char *v37; // ecx
  EntryData *v38; // [esp+0h] [ebp-188h]
  const char *v39; // [esp+18h] [ebp-170h]
  float v40; // [esp+1Ch] [ebp-16Ch]
  float a2; // [esp+20h] [ebp-168h]
  float a2a; // [esp+20h] [ebp-168h]
  const char *a2b; // [esp+20h] [ebp-168h]
  void **v44; // [esp+2Ch] [ebp-15Ch]
  ExtraDataList ***v45; // [esp+30h] [ebp-158h]
  float v46; // [esp+30h] [ebp-158h]
  float v47; // [esp+30h] [ebp-158h]
  int v48; // [esp+34h] [ebp-154h]
  EntryData *v49; // [esp+38h] [ebp-150h]
  _DWORD *v50; // [esp+3Ch] [ebp-14Ch]
  int v51; // [esp+40h] [ebp-148h]
  char v53[300]; // [esp+4Ch] [ebp-13Ch] BYREF
  unsigned int v54; // [esp+184h] [ebp-4h]

  if ( a6 == 3 )
  {
    sub_57DE50(2);
    sub_5CE9B0(bp0, a4, a5);
    return;
  }
  if ( a6 >= 0x33 )
  {
    Tile_GetFloat(a7, 0xFB9);
    v8 = (TESForm *)Double_To_SInt32(a5);
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v8, 0);
    v49 = InventoryEntryOfItem;
    if ( InventoryEntryOfItem )
    {
      v11 = *(_DWORD *)(a1[0xE] + 0x38);
      v12 = 0;
      v13 = 0;
      if ( v11 )
      {
        do
        {
          if ( v12 == a7 )
            break;
          if ( v12 )
          {
            if ( Tile_GetFloat(v12, 0xFA1) != fConstant_1 )
              v13 = v12;
          }
          v12 = *(Tile **)(v11 + 8);
          v11 = *(_DWORD *)(v11 + 4);
        }
        while ( v11 );
        if ( v12 )
        {
          if ( !v11 )
          {
            v14 = v13;
LABEL_19:
            if ( v14 )
            {
              InterfaceManager_GetSingleton(0, 1);
              Singleton = InterfaceManager_GetSingleton(0, 1);
              v16 = (double)(int)++Singleton->unk08C;
              if ( (int)Singleton->unk08C < 0 )
                v16 = v16 + flt_A2FC78;
              a2 = v16;
              Tile_SetFloat(v14, (_DWORD *)0xFF0, a2);
            }
            goto LABEL_23;
          }
          do
          {
            v14 = *(Tile **)(v11 + 8);
            v11 = *(_DWORD *)(v11 + 4);
          }
          while ( v11 && Tile_GetFloat(v14, 0xFA1) == fConstant_1 );
          if ( v14 && Tile_GetFloat(v14, 0xFA1) != fConstant_1 )
            goto LABEL_19;
        }
      }
LABEL_23:
      if ( !a1[0x11] )
      {
        if ( a1[0x12] )
        {
          v34 = (unsigned __int16 *)OblivionDynamicCast(
                                      InventoryEntryOfItem->type,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESEnchantableForm `RTTI Type Descriptor',
                                      0);
          v51 = 0x7FFFFFFF;
          if ( v34 )
            v51 = v34[4];
          a2a = sub_4849C0((void **)&InventoryEntryOfItem->extendData);
          v40 = (float)v51;
          sub_5483E0(v40, a2a);
          v36 = v35;
          if ( v35 <= 1 )
            v36 = 1;
          if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v36 )
          {
            ShowUIMessageBox(
              v37,
              (char)InventoryEntryOfItem,
              a3,
              a4,
              a5,
              (const char *)sNotEnoughGold,
              0,
              1,
              (const char *)sOk,
              0);
          }
          else
          {
            a2b = (const char *)dword_B38D20;
            v39 = (const char *)dword_B38858;
            dword_B3B708 = (int)a7;
            Count = v36;
            _sprintf(v53, "%s %d %s?", v39, v36, a2b);
            ShowUIMessageBox(
              v53,
              (char)InventoryEntryOfItem,
              a3,
              a4,
              a5,
              v53,
              (int)sub_5CF9B0,
              1,
              (const char *)MessageButtonTextYes,
              MessageButtonTextNo);
          }
          sub_65DD20(TESDataHandler_g_PlayerRef);
        }
        goto LABEL_66;
      }
      ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)InventoryEntryOfItem->extendData->node.data);
      v18 = 0;
      ContainerChanges = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
      OblivionDynamicCast(
        InventoryEntryOfItem->type,
        0,
        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
        &TESEnchantableForm `RTTI Type Descriptor',
        0);
      v20 = (_DWORD *)FormHeapAlloc(0x14u);
      v50 = v20;
      v54 = 0;
      if ( v20 )
        v18 = (ExtraDataList *)ExtraDataList_constr(v20);
      type = (int)InventoryEntryOfItem->type;
      v54 = 0xFFFFFFFF;
      ContainerExtraData_GetEntryForForm(ContainerChanges, type, 1, 0);
      v23 = v22;
      v24 = **v45;
      if ( ExtraDataList_GetExtraCount(v24) == 1 )
      {
        if ( v18 )
          (*(void (__thiscall **)(ExtraDataList *, int))v18->vtbl)(v18, 1);
        v18 = v24;
      }
      else
      {
        BaseExtraList_Copy(v18, **v45);
        ExtraDataList_SetExtraCount(v18, 1);
      }
      if ( ExtraDataList_GetExtraCount(v24) > 1 )
        ExtraDataList_SetExtraCount(v24, ExtraCount - 1);
      v46 = sub_4849C0(v44) + (double)(int)v50[0x13];
      sub_41EE90(v18, (BSExtraDataVtbl *)LODWORD(v46));
      v47 = (float)v48;
      Charge = ExtraDataList_GetCharge(v18);
      v26 = v47;
      if ( v47 > Charge )
      {
        InterfaceManager_GetSingleton(0, 1);
        v27 = sub_5966F0(1);
        sub_57D300((Tile *)v49, (Tile *)0xFF0, v27);
      }
      else
      {
        BaseExtraList_RemoveExtraByType(v18, 0x2Eu);
        if ( !v18->members.m_data )
        {
          if ( v18 == v24 )
            BSSimpleList_Remove(*v23, (int)v24);
          (*(void (__thiscall **)(ExtraDataList *, int))v18->vtbl)(v18, 1);
LABEL_46:
          v30 = v49[5].type;
          InitializeComponent = 0;
          if ( v30->vtbl )
            InitializeComponent = v30->vtbl->super.InitializeComponent;
          flags = v30->member.flags;
          if ( flags == TESDataHandler_g_AzuraStone )
          {
            if ( InitializeComponent )
              sub_41F650(InitializeComponent);
          }
          else
          {
            v38 = 0;
            ((void (__thiscall *)(PlayerCharacter *, TESForm::FormFlags, void (__thiscall *)(BaseFormComponent *), int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem)(
              TESDataHandler_g_PlayerRef,
              flags,
              InitializeComponent,
              1,
              0,
              0);
            sub_5C1900();
          }
          sub_65DD20(TESDataHandler_g_PlayerRef);
          sub_57DE50(0x18);
          if ( Tile_GetFloat((_DWORD *)v49->countDelta, 0xFB4) <= fConstant_1 )
            sub_5CE9B0((char)v23, v26, Charge);
          else
            NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
              (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)v49,
              a3,
              v26,
              Charge,
              0);
          InventoryEntryOfItem = v38;
LABEL_66:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v9);
          FormHeapFree((unsigned int)InventoryEntryOfItem);
          return;
        }
      }
      if ( v18 && v18 != v24 )
      {
        v28 = (int)*v23;
        if ( *v23 )
        {
          do
          {
            v29 = *(ExtraDataList **)v28;
            if ( !*(_DWORD *)v28 )
              break;
            if ( !ExtraDataList_CompareList(v29, v18) )
            {
              LOWORD(v33) = ExtraDataList_GetExtraCount(v29) + 1;
              ExtraDataList_SetExtraCount(v29, v33);
              goto LABEL_46;
            }
            v28 = *(_DWORD *)(v28 + 4);
          }
          while ( v28 );
        }
        BSSimpleList_PushFront(*v23, (int)v18);
      }
      goto LABEL_46;
    }
  }
}
