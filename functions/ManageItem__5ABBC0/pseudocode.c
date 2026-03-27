void __userpurge ManageItem(
        int *a1@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        signed int a10,
        Tile *a11)
{
  int OpenMenuTile; // ebp
  double v13; // st7
  TESForm *v14; // eax
  EntryData *InventoryEntryOfItem; // eax
  EntryData *v16; // esi
  char v17; // al
  int v18; // edx
  int ***ContainerExtraDataForRef; // ebp
  ExtraDataList *data; // edi
  int type; // ebx
  char v22; // al
  ExtraDataList *v23; // ebp
  double v24; // st7
  TESForm *v25; // eax
  int v26; // ecx
  float v27; // edx
  const char *v28; // ecx
  NiNode *Health; // eax
  TESForm *v30; // eax
  _DWORD *v31; // eax
  double v32; // st7
  ExtraDataList **extendData; // edi
  double v34; // st7
  int v35; // edx
  int v36; // ecx
  int v37; // esi
  double v38; // st7
  double Float; // st7
  int v40; // eax
  signed int v41; // esi
  double v42; // st7
  char v43; // [esp-8h] [ebp-2Ch]
  float a2; // [esp+4h] [ebp-20h]
  float a2a; // [esp+4h] [ebp-20h]
  float a2b; // [esp+4h] [ebp-20h]
  float v47; // [esp+18h] [ebp-Ch] BYREF
  int v48; // [esp+1Ch] [ebp-8h]
  int v49; // [esp+20h] [ebp-4h]
  Tile *v50; // [esp+2Ch] [ebp+8h]

  OpenMenuTile = Menu_GetOpenMenuTile(0x416);
  byte_B3B3D9 = 0;
  if ( (unsigned int)(a10 - 1) <= 4 )
  {
    sub_5AACF0(a1, a9, a10, (int)a11);
    return;
  }
  if ( a10 == 7 || a10 == 8 )
  {
    Float = Tile_GetFloat((_DWORD *)a1[1], 0xFAE);
    v40 = Double_To_SInt32(Float);
    if ( a10 == 7 )
      v41 = v40 - 1;
    else
      v41 = v40 + 1;
    v50 = (Tile *)v41;
    if ( v41 >= 1 )
    {
      if ( v41 <= 5 )
      {
LABEL_94:
        v42 = (double)(int)v50;
        a2b = v42;
        Tile_SetFloat((Tile *)a1[1], (_DWORD *)0xFAE, a2b);
        sub_5AACF0(a1, v42, v41, 0);
        return;
      }
      v41 = 1;
    }
    else
    {
      v41 = 5;
    }
    v50 = (Tile *)v41;
    goto LABEL_94;
  }
  if ( OpenMenuTile && byte_B3B43D && a10 >= 0x3E9 )
  {
    v13 = Tile_GetFloat(a11, 0xFB9);
    v14 = (TESForm *)Double_To_SInt32(v13);
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v14, 0);
    v16 = InventoryEntryOfItem;
    if ( !InventoryEntryOfItem )
      return;
    sub_5C25C0(OpenMenuTile, a7, a8, v13, (unsigned __int8 *)InventoryEntryOfItem->type);
    if ( sub_484BA0((ExtraDataList ***)v16) == 0xFFFFFFFF )
    {
      TESObjectREFR_GetContainer((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( ContainerExtraDataForRef )
      {
        data = 0;
        if ( v16->extendData )
          data = (ExtraDataList *)v16->extendData->node.data;
        type = (int)v16->type;
        v22 = sub_5C1100();
        sub_489820(ContainerExtraDataForRef, a7, type, data, v22);
      }
    }
    else
    {
      v17 = sub_5C1100();
      sub_484BC0((ExtraDataList ***)v16, v17);
      sub_5C1900();
    }
LABEL_76:
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v16, v18);
    FormHeapFree((unsigned int)v16);
    return;
  }
  if ( (unsigned int)(a10 - 0xE) <= 4 )
  {
    if ( (byte_B3B3DB & 0x7F) == a10 - 0xE )
    {
      sub_597A60(&byte_B3B3DB);
    }
    else
    {
      sub_597A40(&byte_B3B3DB, a10 - 0xE);
      byte_B3B3DB &= ~0x80u;
    }
    InventoryMenu_InitializeOrUpdate(a7, a8);
    return;
  }
  if ( a10 < 0x3E9 )
    return;
  LOBYTE(v23) = (_BYTE)a11;
  v24 = Tile_GetFloat(a11, 0xFB9);
  v25 = (TESForm *)Double_To_SInt32(v24);
  v16 = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v25, 0);
  if ( !v16 )
    return;
  v26 = *((_DWORD *)&Vector3_InitValue_ + 1);
  v27 = dword_B3F9B0;
  v47 = Vector3_InitValue_;
  v48 = v26;
  v49 = LODWORD(v27);
  if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 || byte_B3B3D8 )
  {
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))v16->type->vtbl->Unk_1E)(v16->type) )
    {
      v28 = (const char *)dword_B38568;
LABEL_26:
      GameUI_QueueMessage(v28, 0, 1u, flt_A30634);
      goto LABEL_27;
    }
    if ( Actor_GetCurrentAction(TESDataHandler_g_PlayerRef) != 0xFFFFFFFF
      && (unsigned __int8)ContainerEntryExtraData_HasWorn(v16, 0) )
    {
      GameUI_QueueMessage((const char *)dword_B38A08, 0, 1u, flt_A30634);
      goto LABEL_27;
    }
    if ( sub_65AAD0(TESDataHandler_g_PlayerRef) )
    {
      GameUI_QueueMessage((const char *)dword_B38A18, 0, 1u, flt_A30634);
      goto LABEL_27;
    }
    if ( !sub_66E0D0(
            (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            (int)&v47,
            v16->type,
            &v47,
            1,
            CountDelta == 0xFFFFFFFF) )
    {
      GameUI_QueueMessage((const char *)dword_B38A10, 0, 1u, flt_A30634);
      goto LABEL_27;
    }
  }
  if ( CountDelta == 0xFFFFFFFF )
  {
    if ( (int)TESHealthForm_GetHealth((Sky *)v16) > 1 )
    {
      if ( v16->type->member.type == kFormType_Ingredient )
      {
        if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 )
        {
LABEL_39:
          byte_B3B3D8 = 1;
          Health = TESHealthForm_GetHealth((Sky *)v16);
          sub_5C05D0((char)a11, a10, a7, a8, (int)&CountDelta, a10, (int)a11, (signed int)Health, 0);
          return;
        }
LABEL_46:
        CountDelta = 1;
        goto LABEL_47;
      }
      if ( (int)TESHealthForm_GetHealth((Sky *)v16) >= dword_B38688
        && (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 )
      {
        goto LABEL_39;
      }
      if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 || byte_B3B3D8 )
        goto LABEL_46;
      CountDelta = (int)TESHealthForm_GetHealth((Sky *)v16);
    }
    if ( CountDelta != 0xFFFFFFFF )
      goto LABEL_47;
    goto LABEL_46;
  }
LABEL_47:
  if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) == 0 && !byte_B3B3D8 )
  {
    if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v16, 0) )
    {
      sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, (char)a11, a7, a8, v24, v16->type, 0, 0);
      switch ( v16->type->member.type )
      {
        case kFormType_Armor:
        case kFormType_Clothing:
        case kFormType_Weapon:
        case kFormType_Ammo:
          if ( Actor_GetCurrentAction(TESDataHandler_g_PlayerRef) == 0xFFFFFFFF )
            goto ManageItem___def_5AC127;
          v28 = (const char *)dword_B38A38;
          goto LABEL_26;
        default:
ManageItem___def_5AC127:
          v34 = (double)((Tile_GetFloat(a11, 0xFB8) != fConstant_2) + 1);
          a2a = v34;
          Tile_SetFloat(a11, (_DWORD *)0xFB8, a2a);
          if ( v16->extendData )
            v32 = Actor_UnequipItem(
                    (int)TESDataHandler_g_PlayerRef,
                    v34,
                    a7,
                    a8,
                    (int)v16->type,
                    CountDelta,
                    v16->extendData->node.data,
                    1,
                    0,
                    0);
          else
            v32 = Actor_UnequipItem(
                    (int)TESDataHandler_g_PlayerRef,
                    v34,
                    a7,
                    a8,
                    (int)v16->type,
                    CountDelta,
                    0,
                    1,
                    0,
                    0);
          HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a7, a8, v32, (int)v16->type, 0);
          goto LABEL_75;
      }
    }
    v30 = v16->type;
    if ( v30->member.type == kFormType_Book )
    {
      v31 = OblivionDynamicCast(
              v30,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      if ( v31 )
      {
        if ( v31[1] )
        {
          sub_664850((int)TESDataHandler_g_PlayerRef, (char)a11, a7, a8, v24, (int)v16->type);
          return;
        }
      }
    }
    if ( !TESDataHandler_g_PlayerRef->super.super.super.process->GetWeaponOut(TESDataHandler_g_PlayerRef->super.super.super.process)
      || v16->type->member.type != kFormType_Weapon
      || Actor_GetCurrentAction(TESDataHandler_g_PlayerRef) == 0xFFFFFFFF )
    {
      v32 = (double)((Tile_GetFloat(a11, 0xFB8) != fConstant_2) + 1);
      a2 = v32;
      Tile_SetFloat(a11, (_DWORD *)0xFB8, a2);
      extendData = (ExtraDataList **)v16->extendData;
      if ( !v16->extendData || BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v16->extendData) )
      {
        v23 = 0;
        if ( extendData )
        {
          v23 = *extendData;
          if ( *extendData )
          {
            if ( ExtraDataList_GetExtraCount(*extendData) < CountDelta )
              v23 = 0;
          }
        }
        Actor_EquipItem(
          (int)TESDataHandler_g_PlayerRef,
          (unsigned __int16 *)v23,
          a7,
          a8,
          a5,
          v32,
          st0_0,
          a6,
          a4,
          a3,
          v16->type,
          CountDelta,
          (void **)&v23->vtbl,
          0,
          0);
      }
      else
      {
        if ( sub_41DF40(*extendData) )
        {
          GameUI_QueueMessage((const char *)dword_B38A30, 0, 1u, flt_A30634);
          Tile_SetFloat(a11, (_DWORD *)0xFB8, 1.0);
          CountDelta = 0xFFFFFFFF;
          return;
        }
        Actor_EquipItem(
          (int)TESDataHandler_g_PlayerRef,
          (unsigned __int16 *)a11,
          a7,
          a8,
          a5,
          v32,
          st0_0,
          a6,
          a4,
          a3,
          v16->type,
          CountDelta,
          (void **)v16->extendData->node.data,
          0,
          0);
      }
LABEL_75:
      sub_668CC0((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef, (char)v23, a7, a8, v32);
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_10A)(
        TESDataHandler_g_PlayerRef->super.super.super.process,
        TESDataHandler_g_PlayerRef,
        1,
        0,
        0);
      TESDataHandler_g_PlayerRef->vtbl->super.Unk_B0((Actor *)TESDataHandler_g_PlayerRef);
      InventoryMenu_InitializeOrUpdate(a7, a8);
      CountDelta = 0xFFFFFFFF;
      byte_B3B3D8 = 0;
      goto LABEL_76;
    }
    GameUI_QueueMessage((const char *)dword_B38A20, 0, 1u, flt_A30634);
LABEL_27:
    CountDelta = 0xFFFFFFFF;
    return;
  }
  if ( v16->extendData
    && v16->extendData->node.data
    && sub_41DF40(v16->extendData->node.data)
    && ExtraDataList_HasWorn(v16->extendData->node.data, 0) )
  {
    GameUI_QueueMessage((const char *)dword_B38560, 0, 1u, flt_A30634);
    goto LABEL_27;
  }
  sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, (char)a11, a7, a8, v24, v16->type, 0, 0);
  v35 = v48;
  v43 = LOBYTE(v47);
  v36 = v49;
  a1[0x14] = (int)v16;
  v37 = (int)v16->type;
  v38 = sub_5AB800(a7, a8, v24, v43, v35, v36, 0);
  if ( *(_BYTE *)(v37 + 4) == 0x15 && v37 == sub_65D4C0(TESDataHandler_g_PlayerRef) )
    sub_664850((int)TESDataHandler_g_PlayerRef, (char)a11, a7, a8, v38, 0);
  HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a7, a8, v38, v37, 0);
  sub_668CC0((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef, (char)a11, a7, a8, v38);
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_10A)(
    TESDataHandler_g_PlayerRef->super.super.super.process,
    TESDataHandler_g_PlayerRef,
    1,
    0,
    0);
}
